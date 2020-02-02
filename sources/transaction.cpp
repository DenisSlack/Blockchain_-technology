
#include "transaction.h"
#include "ui_transaction.h"
#include <Block.h>
#include <functional.h>


transaction::transaction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transaction)
{
    ui->setupUi(this);
}

transaction::~transaction()
{
    delete ui;
}

void transaction::RecieveData(QString log, QString balance, QString pub, QString priv)
{
    login = log;
    balanc = balance;
    publ = pub;
    priva = priv;
    ui->balan->setText(balanc);
}

Block transaction:: GetlatestBlock(){
    Block Last;
    QStringList last_block;
    QFile UserBlock("C:\\userswallet\\profiles_users\\" + login + "\\" + login + "_blockchain.txt");
    QString last;
    if ((UserBlock.exists())&&(UserBlock.open(QIODevice::ReadOnly)))
    {
        for (int i =0; i<7; i++){
        last_block << UserBlock.readLine(); }
        Last.Index = last_block[0].remove("\n");
        Last.TimeStamp = last_block[1].remove("\n");
        Last.Sender = last_block[2].remove("\n");
        Last.Reciever = last_block[3].remove("\n");
        Last.SumTrans = last_block[4].remove("\n");
        Last.Sign = last_block[5].remove("\n");
        Last.HashPrev = last_block[6].remove("\n");
        return Last;
    }
    else
    {
      QMessageBox::critical(this, " Attention! ", "File not found!");
      return Last;

    }

}

QString transaction::HashingBlock(Block prev)
{
    QString DataTohash = prev.Index + prev.TimeStamp + prev.Sender + prev.Reciever + prev.SumTrans + prev.Sign + prev.HashPrev;
    QByteArray Data = DataTohash.toUtf8();
    QString hash = QCryptographicHash::hash(Data, QCryptographicHash::Sha256).toHex();
    return hash;

}

QString transaction::Signing(Block NewBlock)
{
    QString data = NewBlock.Sender + NewBlock.Reciever + NewBlock.SumTrans + NewBlock.TimeStamp;
    QByteArray message;
    message.append(data);
    QRSAEncryption e;
    QByteArray priv = priva.remove("\n").toUtf8();
    priv = QByteArray::fromHex(priv);
    QByteArray signed_message = e.signMessage(message,priv);
    QString Sign;
    Sign.append(signed_message);
    return Sign;
}

void transaction::AddBlocktoChain(QString path,Block myblock)
{
    QVector<Block> chain (myblock.Index.toInt());
    QFile UserChain(path);
    if ((UserChain.exists())&&(UserChain.open(QIODevice::ReadOnly)))
    {
        for (int i =0 ; i<chain.size(); i++)
        {
            chain[i].Index  = UserChain.readLine();
            chain[i].TimeStamp = UserChain.readLine();
            chain[i].Sender = UserChain.readLine();
            chain[i].Reciever = UserChain.readLine();
            chain[i].SumTrans = UserChain.readLine();
            chain[i].Sign = UserChain.readLine();
            chain[i].HashPrev = UserChain.readLine();
            QString buff = UserChain.readLine();
        }
    }
    UserChain.close();
    if ((UserChain.exists())&&(UserChain.open(QIODevice::WriteOnly)))
    {
        QTextStream stream(&UserChain);
        stream << myblock.Index  << "\n";
        stream << myblock.TimeStamp << "\n";
        stream << myblock.Sender << "\n";
        stream << myblock.Reciever << "\n";
        stream << myblock.SumTrans << "\n";
        stream << myblock.Sign << "\n";
        stream << myblock.HashPrev << "\n";
        stream << "----------------------------\n";
    }
    UserChain.close();
        QTextStream stream(&UserChain);
        for ( int i = 0; i<chain.size(); i++)
        {
          if ((UserChain.exists())&&(UserChain.open(QIODevice::Append))){
              QTextStream stream(&UserChain);
          stream << chain[i].Index;
         stream << chain[i].TimeStamp;
         stream << chain[i].Sender;
         stream << chain[i].Reciever;
          stream << chain[i].SumTrans;
         stream << chain[i].Sign;
          stream << chain[i].HashPrev;
          stream << "----------------------------\n";
          UserChain.close();
        }
   }

}

void transaction::UpdateBalance(QString Login,QString NewBalance){
    QFile date("C:\\userswallet\\profiles_users\\" + Login + "\\" + Login + ".txt");
    QStringList info;
    if ((date.exists())&&(date.open(QIODevice::ReadOnly)))
    {
        while(!date.atEnd())
        {
            info << date.readLine();
        }
    }
    date.close();
    if (Login == login) info[0] = NewBalance +"\n";
    else info[0] = QString::number(NewBalance.toInt()+ info[0].toInt()) +"\n";
    foreach(QString s, info) qDebug() << s;
    QTextStream NewInfo(&date);
    if ((date.exists())&&(date.open(QIODevice::WriteOnly)))
    {
        foreach(QString s, info)
        {
            NewInfo << s;
        }
    }
     date.close();
}

bool transaction::AcceptNewBlock(Block NewBlock)
{
    QFile all_chains("C:\\userswallet\\blockchains.txt");
    QStringList nodes;
    if ((all_chains.exists())&&(all_chains.open(QIODevice::ReadOnly)))
    {
       while(!all_chains.atEnd())
       {
           QString temp = all_chains.readLine();
           nodes.push_back(temp.remove("\n"));

       }
        all_chains.close();
    }
    functional *tmp = new functional;
    foreach (QString s, nodes)
    {
    if (s == "") continue;
    tmp->AnalizChain(s);
    tmp->Synchronization(s); // нахождение консенсуса относительно действительности *
    }
    foreach(QString s, nodes)
    {
        if (s == "") continue;
        if (balanc.toInt() < NewBlock.SumTrans.toInt())
        {
          QMessageBox::critical(this, " Attention! ", "Other nodes rejected your block. Insufficient funds!");
          return false;
        }
        else
        {
          QFile key("C:\\userswallet\\profiles_users\\" + NewBlock.Sender + "\\" + NewBlock.Sender + ".txt");
          QStringList find_pubkey;
          if ((key.exists())&&(key.open(QIODevice::ReadOnly)))
          {
              while (!key.atEnd())
              find_pubkey << key.readLine();
          }
          key.close();

          QRSAEncryption e;

          QByteArray pub = QByteArray::fromHex(find_pubkey[1].remove("\n").toUtf8());
           if (!e.checkSignMessage(NewBlock.Sign.toUtf8(),pub))
         {
            QMessageBox::critical(this, " Attention! ", "Sign is invalid!");
            return false;
         }
          else
         {
            AddBlocktoChain(s,NewBlock); // после чего в цепь добавляется новый блок

}

        }

    }
    return true;
}


void transaction::on_pushButton_clicked()
{
    Block temp;
    temp.SumTrans = ui->lineEdit_3->text();
    temp.Sender = login;
    temp.Reciever = ui->LogReciv->text();
    temp.TimeStamp = QDate::currentDate().toString("d.M.yy") + "," + QTime::currentTime().toString();
    Block LatestBlock = GetlatestBlock();
    int tmp = LatestBlock.Index.toInt() + 1;
    temp.Index = QString::number(tmp);
    temp.HashPrev = HashingBlock(LatestBlock);
    temp.Sign = Signing(temp);
    if (!AcceptNewBlock(temp))
    {
        hide();
        transaction* NewW = new transaction;
        NewW->show();
        NewW->RecieveData(login,balanc,publ,priva);
        return;
    }
    else
    {
    QMessageBox::information(this, " Good! ", "Other nodes accept your block!");
    balanc = QString::number(balanc.toInt() -temp.SumTrans.toInt());
    QString path = "C:\\userswallet\\profiles_users\\" + login + "\\" + login + "_blockchain.txt";
    ui->balan->setText(balanc);
    UpdateBalance(login,balanc);
    UpdateBalance(ui->LogReciv->text(),temp.SumTrans);
    }

}


void transaction::on_pushButton_2_clicked()
{
    hide();
    functional *tmp;
    tmp = new functional;
    tmp->RecieveData(login);
    tmp->show();
}
