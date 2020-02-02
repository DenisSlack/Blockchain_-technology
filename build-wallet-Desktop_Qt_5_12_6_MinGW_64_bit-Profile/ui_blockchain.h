/********************************************************************************
** Form generated from reading UI file 'blockchain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKCHAIN_H
#define UI_BLOCKCHAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blockchain
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *Index;
    QLabel *Time;
    QLabel *Sender;
    QLabel *Reciever;
    QLabel *Sum;
    QLabel *Sign;
    QLabel *Hash;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *blockchain)
    {
        if (blockchain->objectName().isEmpty())
            blockchain->setObjectName(QString::fromUtf8("blockchain"));
        blockchain->resize(1293, 376);
        widget = new QWidget(blockchain);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 1271, 361));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setPointSize(16);
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Index = new QLabel(widget);
        Index->setObjectName(QString::fromUtf8("Index"));
        QFont font2;
        font2.setPointSize(10);
        Index->setFont(font2);

        verticalLayout_2->addWidget(Index);

        Time = new QLabel(widget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setFont(font2);

        verticalLayout_2->addWidget(Time);

        Sender = new QLabel(widget);
        Sender->setObjectName(QString::fromUtf8("Sender"));
        Sender->setFont(font2);

        verticalLayout_2->addWidget(Sender);

        Reciever = new QLabel(widget);
        Reciever->setObjectName(QString::fromUtf8("Reciever"));
        Reciever->setFont(font2);

        verticalLayout_2->addWidget(Reciever);

        Sum = new QLabel(widget);
        Sum->setObjectName(QString::fromUtf8("Sum"));
        Sum->setFont(font2);

        verticalLayout_2->addWidget(Sum);

        Sign = new QLabel(widget);
        Sign->setObjectName(QString::fromUtf8("Sign"));
        QFont font3;
        font3.setPointSize(6);
        Sign->setFont(font3);

        verticalLayout_2->addWidget(Sign);

        Hash = new QLabel(widget);
        Hash->setObjectName(QString::fromUtf8("Hash"));
        Hash->setFont(font2);

        verticalLayout_2->addWidget(Hash);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(blockchain);

        QMetaObject::connectSlotsByName(blockchain);
    } // setupUi

    void retranslateUi(QWidget *blockchain)
    {
        blockchain->setWindowTitle(QApplication::translate("blockchain", "Form", nullptr));
        label->setText(QApplication::translate("blockchain", "\320\230\320\275\320\264\320\265\320\272\321\201:", nullptr));
        label_2->setText(QApplication::translate("blockchain", "\320\222\321\200\320\265\320\274\321\217:", nullptr));
        label_3->setText(QApplication::translate("blockchain", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214:", nullptr));
        label_4->setText(QApplication::translate("blockchain", "\320\237\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\214:", nullptr));
        label_5->setText(QApplication::translate("blockchain", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
        label_6->setText(QApplication::translate("blockchain", "\320\237\320\276\320\264\320\277\320\270\321\201\321\214:", nullptr));
        label_7->setText(QApplication::translate("blockchain", "\320\245\321\215\321\210 \320\277\321\200\320\276\321\210\320\273\320\276\320\263\320\276 \320\261\320\273\320\276\320\272\320\260:", nullptr));
        Index->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Time->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Sender->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Reciever->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Sum->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Sign->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        Hash->setText(QApplication::translate("blockchain", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("blockchain", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_3->setText(QApplication::translate("blockchain", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton->setText(QApplication::translate("blockchain", "\320\222\320\277\320\265\321\200\320\265\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class blockchain: public Ui_blockchain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKCHAIN_H
