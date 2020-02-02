
#include "functional.h"
#include <blockchain.h>
#include "ui_functional.h"
#include <Block.h>
functional::functional(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::functional)
{
    ui->setupUi(this);
    trans = new transaction;
    connect( this, SIGNAL(GoTransaction(QString,QString,QString,QString)), trans, SLOT(RecieveData(QString,QString,QString,QString)));
}

functional::~functional()
{
    delete ui;
}

void functional::AnalizChain(QString path)
{
    QVector<Block> InF;
    int num;
    QFile Chain (path);
    if ((Chain.exists() && (Chain.open(QIODevice::ReadOnly))))
    {
        QString number = Chain.readLine();
        num = number.toInt();
        qDebug() << "num blocks NEW - " << num;
        Chain.close();
     }
     if ((Chain.exists() && (Chain.open(QIODevice::ReadOnly))))
     {
        for (int i = 0; i <= num; i++)
        {
            Block temp;
            InF.push_back(temp);
            InF[i].Index  = Chain.readLine();
            InF[i].TimeStamp = Chain.readLine();
            InF[i].Sender = Chain.readLine();
            InF[i].Reciever = Chain.readLine();
            InF[i].SumTrans = Chain.readLine();
            InF[i].Sign = Chain.readLine();
            InF[i].HashPrev = Chain.readLine();
            qDebug() << "hashprev" << InF[i].HashPrev.remove("\n");
            QString buff = Chain.readLine();
        }
        Chain.close();
     }

     for (int i = InF.size()-1; i>0; i--)
     {
       if (GetHash(InF[i]) != InF[i-1].HashPrev.remove("\n"))
       {
           InF[i-1].HashPrev = GetHash(InF[i]);
           QMessageBox::critical(this, " Attention! ", "Data has been changed!!");
       }
     }

     QFile NewChain(path);
     if ((NewChain.exists() && (NewChain.open(QIODevice::WriteOnly))))
     {
         QTextStream stream(&NewChain);
         for ( int i =0; i<=num; i++)
         {
            stream << InF[i].Index;
            stream << InF[i].TimeStamp;
            stream << InF[i].Sender;
            stream << InF[i].Reciever;
            stream << InF[i].SumTrans;
            stream << InF[i].Sign;
            stream << InF[i].HashPrev;
            stream << "\n----------------------------\n";
         }
     }
}

QString functional::GetHash(Block temp)
{
    QString DataTohash = temp.Index.remove("\n") + temp.TimeStamp.remove("\n") + temp.Sender.remove("\n") + temp.Reciever.remove("\n") + temp.SumTrans.remove("\n") + temp.Sign.remove("\n") + temp.HashPrev.remove("\n");
    QByteArray Data = DataTohash.toUtf8();
    QString hash = QCryptographicHash::hash(Data, QCryptographicHash::Sha256).toHex();
    return hash;
}
Block functional::ReadLastBlock(QString path)
{
    Block temp;
    QFile UserChain(path);
    if ((UserChain.exists())&&(UserChain.open(QIODevice::ReadOnly)))
    {
        temp.Index  = UserChain.readLine();
        temp.Index = temp.Index.remove("\n");
        temp.TimeStamp = UserChain.readLine();
        temp.TimeStamp = temp.TimeStamp.remove("\n");
        temp.Sender = UserChain.readLine();
        temp.Sender = temp.Sender.remove("\n");
        temp.Reciever = UserChain.readLine();
        temp.Reciever = temp.Reciever.remove("\n");
        temp.SumTrans = UserChain.readLine();
        temp.SumTrans = temp.SumTrans.remove("\n");
        temp.Sign = UserChain.readLine();
        temp.Sign = temp.Sign.remove("\n");
        temp.HashPrev = UserChain.readLine();
        temp.HashPrev = temp.HashPrev.remove("\n");
        UserChain.close();
    }
    return temp;
}

functional::chain functional::Find_Majority(QVector<functional::chain> vars)
{
    for (int i = 0; i < vars.size(); i++)
    {
        for ( int j = 0; j <vars.size(); j++)
        {
            if ( i == j) continue;
            if (vars[i].hash == vars[j].hash)
            {
                vars[i].rating++;
                vars[j] = vars[i];
            }
        }
    }
    int max = -1;
    for (int i = 0; i < vars.size(); i++)
    {
        if (max < vars[i].rating) max = vars[i].rating;
        if (max > vars.size()/2)
        {
            return vars[i];
        }
    }

    return vars[0];
}



void functional::Synchronization(QString path){

        QVector<Block> try_chain;
        QVector<chain> versions;
        chain mychain;
        Block mylastblock;
        mychain.path = path;
        mylastblock = ReadLastBlock(mychain.path);
        QString mydate = mylastblock.toStrings();
        mychain.hash = QCryptographicHash::hash(mydate.toUtf8(), QCryptographicHash::Sha256).toHex();

        versions.push_back(mychain);


        QFile all_chains("C:\\userswallet\\blockchains.txt");
        if ((all_chains.exists())&&(all_chains.open(QIODevice::ReadOnly)))
        {
           while(!all_chains.atEnd())
           {
               QString temp = all_chains.readLine();
               if (temp.remove("\n") == mychain.path) continue;
               if (temp == "") continue;
               temp = temp.remove("\n");
               chain tmp;
               tmp.path = temp;
               QString date = ReadLastBlock(temp).toStrings();
               tmp.hash = QCryptographicHash::hash(date.toUtf8(),QCryptographicHash::Sha256).toHex();
               versions.push_back(tmp);
           }
           all_chains.close();
        }
        if (versions.size() == 1)
        {
           return;
        }
        chain major = Find_Majority(versions);
        if (mychain.hash != major.hash)
        {
                int num;
                QFile TrueChain (major.path);
                if ((TrueChain.exists() && (TrueChain.open(QIODevice::ReadOnly))))
                {
                    QString number = TrueChain.readLine();
                    num = number.toInt();
                    qDebug() << "num blocks - " << num;
                    TrueChain.close();
                 }
                 if ((TrueChain.exists() && (TrueChain.open(QIODevice::ReadOnly))))
                 {
                    for (int i = 0; i <= num; i++)
                    {
                        Block temp;
                        try_chain.push_back(temp);
                        try_chain[i].Index  = TrueChain.readLine();
                        try_chain[i].TimeStamp = TrueChain.readLine();
                        try_chain[i].Sender = TrueChain.readLine();
                        try_chain[i].Reciever = TrueChain.readLine();
                        try_chain[i].SumTrans = TrueChain.readLine();
                        try_chain[i].Sign = TrueChain.readLine();
                        try_chain[i].HashPrev = TrueChain.readLine();
                        QString buff = TrueChain.readLine();
                    }
                 }
                 QFile NeedSync(mychain.path);
                 if ((NeedSync.exists() && (NeedSync.open(QIODevice::WriteOnly))))
                 {
                     QTextStream stream(&NeedSync);
                     for ( int i =0; i<=num; i++)
                     {
                        stream << try_chain[i].Index;
                        stream << try_chain[i].TimeStamp;
                        stream << try_chain[i].Sender;
                        stream << try_chain[i].Reciever;
                        stream << try_chain[i].SumTrans;
                        stream << try_chain[i].Sign;
                        stream << try_chain[i].HashPrev;
                        stream << "----------------------------\n";
                     }
                 }
                 QMessageBox::information(this, " Attention! ", "Sync is over!");


        }

}



void functional::RecieveData(QString str)
{
    ui->log->setText(str);
    QString path = ("C:\\userswallet\\profiles_users\\" + str + "\\" + str + ".txt");
    QFile data (path);
    QStringList inf;
    if ((data.exists())&&(data.open(QIODevice::ReadOnly)))
        while (!data.atEnd())
        {
            inf << data.readLine();
        }
    ui->balance->setText(inf[0]);
    ui->pub_key->setText(inf[1]);
    priv_key = inf[2];
}

void functional::on_pushButton_clicked()
{
    hide();
    trans->show();
    emit GoTransaction(ui->log->text(),ui->balance->text(),ui->pub_key->text(),priv_key);
}

void functional::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void functional::on_pushButton_3_clicked()
{
    hide();
    blockchain *win = new blockchain;
    win->show();
    win->login = ui->log->text();
    win->ReadChain();
    win->Show();

}
