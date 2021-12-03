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
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SreverDialog)
    {
        if (SreverDialog->objectName().isEmpty())
            SreverDialog->setObjectName(QString::fromUtf8("SreverDialog"));
        SreverDialog->resize(813, 591);
        layoutWidget = new QWidget(SreverDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 160, 258, 262));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SreverDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 320, 75, 23));

        retranslateUi(SreverDialog);

        QMetaObject::connectSlotsByName(SreverDialog);
    } // setupUi

    void retranslateUi(QDialog *SreverDialog)
    {
        SreverDialog->setWindowTitle(QApplication::translate("SreverDialog", "SreverDialog", nullptr));
        label->setText(QApplication::translate("SreverDialog", "server port:", nullptr));
        lineEdit->setText(QApplication::translate("SreverDialog", "8080", nullptr));
        pushButton->setText(QApplication::translate("SreverDialog", "create server", nullptr));
        pushButton_2->setText(QApplication::translate("SreverDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SreverDialog: public Ui_SreverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREVERDIALOG_H
