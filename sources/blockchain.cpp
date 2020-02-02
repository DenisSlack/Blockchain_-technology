#include "blockchain.h"
#include "ui_blockchain.h"
#include <QFile>
#include <QStringList>
#include <functional.h>
blockchain::blockchain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::blockchain)
{
    ui->setupUi(this);
}

blockchain::~blockchain()
{
    delete ui;
}

void blockchain::ReadChain(){
    int numb;
    QString path = "C:\\userswallet\\profiles_users\\" + login + "\\" + login + "_blockchain.txt";
    QFile block(path);
    QStringList date;
    if ((block.exists() && (block.open(QIODevice::ReadOnly))))
    {
        QString number = block.readLine();
        numb = number.toInt();
        block.close();
     }
     if ((block.exists() && (block.open(QIODevice::ReadOnly))))
     {
        for (int i = 0; i <= numb; i++)
        {
            Block temp;
            blocks.push_back(temp);
            blocks[i].Index  = block.readLine();
            blocks[i].TimeStamp = block.readLine();
            blocks[i].Sender = block.readLine();
            blocks[i].Reciever = block.readLine();
            blocks[i].SumTrans = block.readLine();
            blocks[i].Sign = block.readLine();
            blocks[i].HashPrev = block.readLine();
            QString buff = block.readLine();
        }
        block.close();
     }
}

void blockchain::Show(){
    ui->Index->setText(blocks[num].Index.remove("\n"));
    ui->Time->setText(blocks[num].TimeStamp.remove("\n"));
    ui->Sender->setText(blocks[num].Sender.remove("\n"));
    ui->Reciever->setText(blocks[num].Reciever.remove("\n"));
    ui->Sum->setText(blocks[num].SumTrans.remove("\n"));
    ui->Sign->setText(blocks[num].Sign.remove("\n"));
    ui->Hash->setText(blocks[num].HashPrev.remove("\n"));
}


void blockchain::on_pushButton_2_clicked()
{
   hide();
   functional *win = new functional;
   win->show();
   win->RecieveData(login);
}

void blockchain::on_pushButton_clicked()
{
    if (num+1 >= blocks.size()-1)
    {
     Show();
    }
    else
    {
        num++;
        Show();
    }
}

void blockchain::on_pushButton_3_clicked()
{
    if (num-1 < 0)
    {
     Show();
    }
    else
    {
        num--;
        Show();
    }
}
