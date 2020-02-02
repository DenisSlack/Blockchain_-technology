#pragma once
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <Block.h>
#include <QFile>
#include <qrsaencryption.h>
#include <QDir>
#include <enter.h>

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();


private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::registration *ui;
};

#endif // REGISTRATION_H
