#pragma once
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <Block.h>
#include <QDate>
#include <QTime>
#include <QDir>
#include <qrsaencryption.h>
namespace Ui {
class transaction;
}

class transaction : public QWidget
{
    Q_OBJECT

public:
    explicit transaction(QWidget *parent = nullptr);
    ~transaction();
    QString login,balanc,publ,priva;

public slots:
    void RecieveData (QString log, QString balance, QString pub, QString priv);
    Block GetlatestBlock();
    QString HashingBlock(Block prev);
    QString Signing(Block NewBlock);
    void AddBlocktoChain(QString path,Block myblock);
    void UpdateBalance(QString Login,QString NewBalance);
    bool AcceptNewBlock(Block newBlock);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::transaction *ui;
};

#endif // TRANSACTION_H
