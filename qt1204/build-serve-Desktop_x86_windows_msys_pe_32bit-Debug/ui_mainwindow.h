/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionclose;
    QAction *actionforbid;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *mess_rec;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QTableWidget *iplist;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *ipline;
    QLabel *label_2;
    QLineEdit *portline;
    QLabel *label_3;
    QLineEdit *nameline;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *mess_send;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sendButton;
    QPushButton *clearbutton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(942, 800);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(900, 800));
        MainWindow->setMaximumSize(QSize(5000, 5000));
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        actionforbid = new QAction(MainWindow);
        actionforbid->setObjectName(QString::fromUtf8("actionforbid"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mess_rec = new QTextEdit(centralWidget);
        mess_rec->setObjectName(QString::fromUtf8("mess_rec"));

        verticalLayout->addWidget(mess_rec);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/bold.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(27, 26));
        toolButton->setPopupMode(QToolButton::DelayedPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/color.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(27, 26));
        toolButton_2->setPopupMode(QToolButton::DelayedPopup);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/font.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(27, 26));

        horizontalLayout->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(groupBox);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/underline.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(27, 26));

        horizontalLayout->addWidget(toolButton_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout);

        iplist = new QTableWidget(centralWidget);
        if (iplist->columnCount() < 2)
            iplist->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        iplist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        iplist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        iplist->setObjectName(QString::fromUtf8("iplist"));

        horizontalLayout_2->addWidget(iplist);

        horizontalLayout_2->setStretch(0, 57);

        verticalLayout_3->addLayout(horizontalLayout_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        ipline = new QLineEdit(widget);
        ipline->setObjectName(QString::fromUtf8("ipline"));

        horizontalLayout_4->addWidget(ipline);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        portline = new QLineEdit(widget);
        portline->setObjectName(QString::fromUtf8("portline"));

        horizontalLayout_4->addWidget(portline);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        nameline = new QLineEdit(widget);
        nameline->setObjectName(QString::fromUtf8("nameline"));

        horizontalLayout_4->addWidget(nameline);


        verticalLayout_3->addWidget(widget);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mess_send = new QTextEdit(centralWidget);
        mess_send->setObjectName(QString::fromUtf8("mess_send"));

        horizontalLayout_3->addWidget(mess_send);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        verticalLayout_2->addWidget(sendButton);

        clearbutton = new QPushButton(groupBox_2);
        clearbutton->setObjectName(QString::fromUtf8("clearbutton"));

        verticalLayout_2->addWidget(clearbutton);


        horizontalLayout_3->addWidget(groupBox_2);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_4->setStretch(0, 4);
        verticalLayout_4->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 942, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actionclose);
        menu_2->addAction(actionforbid);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\233\221\345\220\254", nullptr));
        actionclose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\233\221\345\220\254", nullptr));
        actionforbid->setText(QApplication::translate("MainWindow", "\345\205\250\344\275\223\347\246\201\350\250\200", nullptr));
        groupBox->setTitle(QString());
        toolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", nullptr));
        toolButton_3->setText(QApplication::translate("MainWindow", "...", nullptr));
        toolButton_4->setText(QApplication::translate("MainWindow", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = iplist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = iplist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "ip", nullptr));
        label->setText(QApplication::translate("MainWindow", "ip", nullptr));
        ipline->setText(QApplication::translate("MainWindow", "172.18.38.192", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        portline->setText(QApplication::translate("MainWindow", "6666", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        nameline->setText(QApplication::translate("MainWindow", "\345\205\224\345\255\220", nullptr));
        groupBox_2->setTitle(QString());
        sendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        clearbutton->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\235\203\351\231\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
