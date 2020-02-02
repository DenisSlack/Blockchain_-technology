
#include "enter.h"
#include "ui_enter.h"
#include <registration.h>
Enter::Enter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Enter)
{
    ui->setupUi(this);
    fun = new functional();
    connect (this,SIGNAL(SendLogin(QString)),fun,SLOT(RecieveData(QString)));
}

Enter::~Enter()
{
    delete ui;
}



void Enter::on_Enter__clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString LandP = login + password;
    QByteArray Hash = LandP.toUtf8();
    QString hash = QCryptographicHash::hash(Hash, QCryptographicHash::Sha256).toHex();
    qDebug() << hash;
    QFile file("C:\\userswallet\\hash-password.txt");
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        while(!file.atEnd())
        {
            QString str={};
            str=file.readLine();
            str.remove("\n");
            if (hash == str)
            {
                 hide();
                 emit SendLogin(login);
                 fun->show();
                 QString path = "C:\\userswallet\\profiles_users\\" + login + "\\" + login + "_blockchain.txt";
                 fun->AnalizChain(path);
                 fun->Synchronization(path);
                 return;
            }

        }
             QMessageBox::critical(this, " Attention! ", "Check your login or password!");
    }
            else
    {
            QMessageBox::critical(this, " Attention! ", "File not found");
    }


  file.close();
}

void Enter::on_Registration_clicked()
{
    hide();
    registration window;
    window.setModal(true);
    window.exec();
}

