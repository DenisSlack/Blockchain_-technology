/********************************************************************************
** Form generated from reading UI file 'enter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_H
#define UI_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *Enter_;
    QPushButton *Registration;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Enter)
    {
        if (Enter->objectName().isEmpty())
            Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->resize(582, 390);
        centralwidget = new QWidget(Enter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 571, 321));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        Enter_ = new QPushButton(groupBox);
        Enter_->setObjectName(QString::fromUtf8("Enter_"));
        Enter_->setFont(font1);

        verticalLayout->addWidget(Enter_);

        Registration = new QPushButton(groupBox);
        Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->setFont(font1);

        verticalLayout->addWidget(Registration);

        Enter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Enter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 582, 30));
        Enter->setMenuBar(menubar);
        statusbar = new QStatusBar(Enter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Enter->setStatusBar(statusbar);

        retranslateUi(Enter);

        QMetaObject::connectSlotsByName(Enter);
    } // setupUi

    void retranslateUi(QMainWindow *Enter)
    {
        Enter->setWindowTitle(QApplication::translate("Enter", "Enter", nullptr));
        groupBox->setTitle(QApplication::translate("Enter", "\320\222\321\205\320\276\320\264 \320\262 \320\272\320\276\321\210\320\265\320\273\320\265\320\272", nullptr));
        label->setText(QApplication::translate("Enter", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QApplication::translate("Enter", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Enter_->setText(QApplication::translate("Enter", "\320\222\320\276\320\271\321\202\320\270!", nullptr));
        Registration->setText(QApplication::translate("Enter", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter: public Ui_Enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_H
