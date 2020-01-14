/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *messageEdit;
    QPushButton *connButton;
    QLineEdit *ipEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *portEdit;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        messageEdit = new QLineEdit(centralwidget);
        messageEdit->setObjectName(QStringLiteral("messageEdit"));
        messageEdit->setEnabled(true);
        messageEdit->setGeometry(QRect(190, 160, 281, 22));
        connButton = new QPushButton(centralwidget);
        connButton->setObjectName(QStringLiteral("connButton"));
        connButton->setGeometry(QRect(290, 190, 93, 28));
        ipEdit = new QLineEdit(centralwidget);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));
        ipEdit->setGeometry(QRect(200, 90, 151, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 60, 131, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 140, 56, 16));
        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setGeometry(QRect(370, 90, 51, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 60, 31, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        messageEdit->setText(QApplication::translate("MainWindow", "hahha", nullptr));
        connButton->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        ipEdit->setText(QApplication::translate("MainWindow", "172.22.18.14", nullptr));
        label->setText(QApplication::translate("MainWindow", "Server IP", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Message", nullptr));
        portEdit->setText(QApplication::translate("MainWindow", "1234", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
