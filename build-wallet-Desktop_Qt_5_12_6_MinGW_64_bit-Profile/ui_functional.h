/********************************************************************************
** Form generated from reading UI file 'functional.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONAL_H
#define UI_FUNCTIONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_functional
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *log;
    QLabel *balance;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *pub_key;

    void setupUi(QDialog *functional)
    {
        if (functional->objectName().isEmpty())
            functional->setObjectName(QString::fromUtf8("functional"));
        functional->resize(1166, 481);
        label = new QLabel(functional);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 143, 59));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(functional);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 371, 51));
        label_3->setFont(font);
        log = new QLabel(functional);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(380, 10, 271, 51));
        log->setFont(font);
        balance = new QLabel(functional);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(180, 80, 501, 41));
        balance->setFont(font);
        layoutWidget = new QWidget(functional);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 400, 1111, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setPointSize(16);
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(functional);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 320, 551, 61));
        QFont font2;
        font2.setPointSize(11);
        pushButton_3->setFont(font2);
        widget = new QWidget(functional);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 137, 1151, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        pub_key = new QLabel(widget);
        pub_key->setObjectName(QString::fromUtf8("pub_key"));
        QFont font3;
        font3.setPointSize(14);
        pub_key->setFont(font3);

        verticalLayout->addWidget(pub_key);


        retranslateUi(functional);

        QMetaObject::connectSlotsByName(functional);
    } // setupUi

    void retranslateUi(QDialog *functional)
    {
        functional->setWindowTitle(QApplication::translate("functional", "Dialog", nullptr));
        label->setText(QApplication::translate("functional", "\320\221\320\260\320\273\320\260\320\275\321\201:", nullptr));
        label_3->setText(QApplication::translate("functional", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214, ", nullptr));
        log->setText(QString());
        balance->setText(QApplication::translate("functional", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("functional", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton->setText(QApplication::translate("functional", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\272\321\200\320\270\320\277\321\202\320\276\320\262\320\260\320\273\321\216\321\202\321\203", nullptr));
        pushButton_3->setText(QApplication::translate("functional", "\320\221\320\273\320\276\320\272\321\207\320\265\320\271\320\275", nullptr));
        label_2->setText(QApplication::translate("functional", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        pub_key->setText(QApplication::translate("functional", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class functional: public Ui_functional {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONAL_H
