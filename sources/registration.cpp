
#include "registration.h"

#include "ui_registration.h"


registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}



void registration::on_pushButton_clicked()
{
   QString login = ui->log->text();
   QString pass = ui->pass->text();
   QString pass2 = ui->pass2->text();

   QFile lf("C:\\userswallet\\logins.txt");
   if (pass == pass2)
   {
   if ((lf.exists())&&(lf.open(QIODevice::ReadOnly)))
   {
       while(!lf.atEnd())
       {
           QString str={};
           str=lf.readLine();
           str.remove("\n");
           if (login == str)
           {
               QMessageBox::critical(this, " Attention! ", "This login already exists!");
               hide();
               registration* w = new registration;
               w->show();
               return;
           }
       }

       lf.close();
       if ((lf.exists())&&(lf.open(QIODevice::ReadOnly)))
       {

               QStringList strList ;
                   while(!lf.atEnd())
                   {
                   strList << lf.readLine();
                   }
                   lf.close();
                   strList.push_back(login+"\n");
                   qDebug() << "\n";
                   for (int i =0; i < strList.size(); i ++)
                   {
                       qDebug() << strList[i] << "\n";
                   }
                   if ((lf.exists())&&(lf.open(QIODevice::WriteOnly))){
                   QTextStream stream(&lf);
                   foreach(QString s, strList)
                       {
                           stream<<s;
                       }
                   lf.close();
                    }
}
                   QString LandP = login + pass;
                   QByteArray Hash = LandP.toUtf8();
                   QString hash = QCryptographicHash::hash(Hash, QCryptographicHash::Sha256).toHex();
                   QFile file("C:\\userswallet\\hash-password.txt");
                   QStringList strList2 ;
                   if ((file.exists())&&(file.open(QIODevice::ReadOnly))){
                       while(!file.atEnd())
                       {

                       strList2 << file.readLine();
                       }
                       file.close();
                   }
                   strList2.push_back(hash+"\n");
                   if ((file.exists())&&(file.open(QIODevice::WriteOnly))){
                       QTextStream stream2(&file);
                       foreach(QString s, strList2)
                           {
                               stream2<<s;
                           }

                   }
                   file.close();
               }
               else
               {
                   QMessageBox::critical(this, " Attention! ", "Error with password!");

               }


               QByteArray pub, priv;
               QRSAEncryption e;
               e.generatePairKey(pub,priv,QRSAEncryption::Rsa::RSA_256);
               QString path = "C:\\userswallet\\profiles_users";
               QDir dir(path);
               dir.mkdir(login);
               QFile ProfUser("C:\\userswallet\\profiles_users\\" + login + "\\" + login + ".txt");
               ProfUser.open(QIODevice::WriteOnly);
               QTextStream stream(&ProfUser);
               stream << 0;
               stream << "\n";
               stream << pub.toHex();
               stream << "\n";
               stream << priv.toHex();
               stream << "\n";

               QString path_to_chain = "C:\\userswallet\\profiles_users\\" + login + "\\" + login + "_blockchain.txt";
               QFile UserBlock(path_to_chain);
               UserBlock.open(QIODevice::WriteOnly);
               QTextStream genezis(&UserBlock);
               genezis << "0 \n";
               genezis << "0.0.0000, 00:00:00 \n";
               genezis << "0 \n";
               genezis << "0 \n";
               genezis << "0 \n";
               genezis << "0 \n";
               genezis << "0\n";
               UserBlock.close();

               ProfUser.close();
               hide();
               Enter *win = new Enter;
               win->show();

               QFile chain_addres("C:\\userswallet\\blockchains.txt");
               if ((chain_addres.exists())&&(chain_addres.open(QIODevice::Append)))
               {
                   QTextStream stream(&chain_addres);
                   stream << "\n" << path_to_chain;
                   chain_addres.close();
               }


   }
}


void registration::on_pushButton_2_clicked()
{
    hide();
    Enter *tmp = new Enter;
    tmp->show();
}
