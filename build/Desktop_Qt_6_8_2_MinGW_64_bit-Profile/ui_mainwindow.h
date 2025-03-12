/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *return_Button;
    QPushButton *close_Button;
    QLabel *name;
    QLabel *id;
    QComboBox *functionBox;
    QLineEdit *nameLine;
    QLineEdit *idLine;
    QPushButton *confirm_Button;
    QTableView *tableView;
    QComboBox *genderBox;
    QLabel *gender;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(811, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        return_Button = new QPushButton(centralwidget);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(520, 450, 92, 31));
        close_Button = new QPushButton(centralwidget);
        close_Button->setObjectName("close_Button");
        close_Button->setGeometry(QRect(520, 490, 92, 28));
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(50, 450, 69, 19));
        QFont font;
        font.setPointSize(12);
        name->setFont(font);
        id = new QLabel(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(50, 490, 69, 19));
        id->setFont(font);
        functionBox = new QComboBox(centralwidget);
        functionBox->addItem(QString());
        functionBox->addItem(QString());
        functionBox->addItem(QString());
        functionBox->addItem(QString());
        functionBox->addItem(QString());
        functionBox->setObjectName("functionBox");
        functionBox->setGeometry(QRect(410, 450, 91, 31));
        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(110, 450, 241, 27));
        idLine = new QLineEdit(centralwidget);
        idLine->setObjectName("idLine");
        idLine->setGeometry(QRect(110, 490, 241, 27));
        confirm_Button = new QPushButton(centralwidget);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setGeometry(QRect(410, 490, 91, 31));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 30, 681, 391));
        genderBox = new QComboBox(centralwidget);
        genderBox->addItem(QString());
        genderBox->addItem(QString());
        genderBox->addItem(QString());
        genderBox->setObjectName("genderBox");
        genderBox->setGeometry(QRect(110, 530, 101, 27));
        gender = new QLabel(centralwidget);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(50, 530, 69, 19));
        gender->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 811, 24));
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
        return_Button->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        close_Button->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        id->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        functionBox->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234", nullptr));
        functionBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        functionBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        functionBox->setItemText(3, QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        functionBox->setItemText(4, QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));

        confirm_Button->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        genderBox->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\200\247\345\210\253", nullptr));
        genderBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        genderBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));

        gender->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
