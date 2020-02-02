/********************************************************************************
** Form generated from reading UI file 'transaction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTION_H
#define UI_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transaction
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *balan;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *LogReciv;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *transaction)
    {
        if (transaction->objectName().isEmpty())
            transaction->setObjectName(QString::fromUtf8("transaction"));
        transaction->resize(632, 268);
        widget = new QWidget(transaction);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 606, 251));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        balan = new QLabel(widget);
        balan->setObjectName(QString::fromUtf8("balan"));
        balan->setFont(font);

        horizontalLayout_3->addWidget(balan);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        LogReciv = new QLineEdit(widget);
        LogReciv->setObjectName(QString::fromUtf8("LogReciv"));
        LogReciv->setFont(font1);

        horizontalLayout->addWidget(LogReciv);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(transaction);

        QMetaObject::connectSlotsByName(transaction);
    } // setupUi

    void retranslateUi(QWidget *transaction)
    {
        transaction->setWindowTitle(QApplication::translate("transaction", "Form", nullptr));
        label->setText(QApplication::translate("transaction", "\320\221\320\260\320\273\320\260\320\275\321\201:", nullptr));
        balan->setText(QApplication::translate("transaction", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("transaction", "\320\233\320\276\320\263\320\270\320\275 \320\277\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\217:", nullptr));
        label_3->setText(QApplication::translate("transaction", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260:", nullptr));
        pushButton_2->setText(QApplication::translate("transaction", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton->setText(QApplication::translate("transaction", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transaction: public Ui_transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTION_H
