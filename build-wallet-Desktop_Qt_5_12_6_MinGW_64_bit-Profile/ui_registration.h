/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *log;
    QLabel *label_3;
    QLineEdit *pass;
    QLabel *label_4;
    QLineEdit *pass2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(461, 375);
        groupBox = new QGroupBox(registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 351));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        log = new QLineEdit(groupBox);
        log->setObjectName(QString::fromUtf8("log"));

        verticalLayout->addWidget(log);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        pass = new QLineEdit(groupBox);
        pass->setObjectName(QString::fromUtf8("pass"));

        verticalLayout->addWidget(pass);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        pass2 = new QLineEdit(groupBox);
        pass2->setObjectName(QString::fromUtf8("pass2"));

        verticalLayout->addWidget(pass2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QApplication::translate("registration", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("registration", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \321\201\320\265\320\261\320\265", nullptr));
        label_2->setText(QApplication::translate("registration", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QApplication::translate("registration", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_4->setText(QApplication::translate("registration", "\320\225\321\211\320\265 \321\200\320\260\320\267 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton->setText(QApplication::translate("registration", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton_2->setText(QApplication::translate("registration", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
