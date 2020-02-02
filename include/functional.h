#pragma once
#ifndef FUNCTIONAL_H
#define FUNCTIONAL_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <Block.h>
#include <QDate>
#include <QTime>
#include <QDir>
#include <qrsaencryption.h>
#include <transaction.h>
namespace Ui {
class functional;
}

class functional : public QDialog
{
    Q_OBJECT

public:
    explicit functional(QWidget *parent = nullptr);
    ~functional();
    QString priv_key;
    struct chain{
        QString path;
        int rating = 0;
        QString hash;
    };
public slots:
    void RecieveData (QString str);
    void Synchronization(QString path);
    Block ReadLastBlock(QString path);
    chain Find_Majority(QVector<chain> vars);
    void AnalizChain(QString path);
    QString GetHash(Block temp);

signals:
    void GoTransaction(QString log, QString balance, QString pub, QString priv);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::functional *ui;
    transaction *trans;
};




#endif // FUNCTIONAL_H


