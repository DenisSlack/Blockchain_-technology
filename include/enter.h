#ifndef ENTER_H
#define ENTER_H
#pragma once
#include <QMainWindow>
#include <functional.h>
#include <Block.h>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <qrsaencryption.h>
#include <QDate>
#include <QTime>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class Enter; }
QT_END_NAMESPACE

class Enter : public QMainWindow
{
    Q_OBJECT

public:
    Enter(QWidget *parent = nullptr);
    ~Enter();

signals:
       void SendLogin (QString log);
private slots:

    void on_Enter__clicked();

    void on_Registration_clicked();

private:
    Ui::Enter *ui;
    functional *fun;
};
#endif // ENTER_H
