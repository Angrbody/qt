/********************************************************************************
** Form generated from reading UI file 'sreverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SREVERDIALOG_H
#define UI_SREVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SreverDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget_2;

    void setupUi(QDialog *SreverDialog)
    {
        if (SreverDialog->objectName().isEmpty())
            SreverDialog->setObjectName(QString::fromUtf8("SreverDialog"));
        SreverDialog->resize(1072, 640);
        layoutWidget = new QWidget(SreverDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 80, 351, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(SreverDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 50, 151, 16));
        label = new QLabel(SreverDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 530, 72, 51));
        lineEdit = new QLineEdit(SreverDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 550, 109, 20));
        pushButton = new QPushButton(SreverDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 550, 301, 23));
        layoutWidget_2 = new QWidget(SreverDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(440, 80, 151, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget_2 = new QListWidget(layoutWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        horizontalLayout_2->addWidget(listWidget_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(SreverDialog);

        QMetaObject::connectSlotsByName(SreverDialog);
    } // setupUi

    void retranslateUi(QDialog *SreverDialog)
    {
        SreverDialog->setWindowTitle(QApplication::translate("SreverDialog", "SreverDialog", nullptr));
        label_2->setText(QApplication::translate("SreverDialog", "Welcome to the chatroom!", nullptr));
        label->setText(QApplication::translate("SreverDialog", "server port:", nullptr));
        lineEdit->setText(QApplication::translate("SreverDialog", "8080", nullptr));
        pushButton->setText(QApplication::translate("SreverDialog", "create server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SreverDialog: public Ui_SreverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREVERDIALOG_H
