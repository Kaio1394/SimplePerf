/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *uri;
    QRadioButton *radioButton_Post;
    QRadioButton *radioButton_Get;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        uri = new QLineEdit(centralwidget);
        uri->setObjectName("uri");
        uri->setGeometry(QRect(210, 180, 113, 24));
        radioButton_Post = new QRadioButton(centralwidget);
        radioButton_Post->setObjectName("radioButton_Post");
        radioButton_Post->setGeometry(QRect(140, 240, 91, 22));
        radioButton_Get = new QRadioButton(centralwidget);
        radioButton_Get->setObjectName("radioButton_Get");
        radioButton_Get->setGeometry(QRect(260, 240, 91, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 180, 49, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 180, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButton_Post->setText(QCoreApplication::translate("MainWindow", "POST", nullptr));
        radioButton_Get->setText(QCoreApplication::translate("MainWindow", "GET", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "URI", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
