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
    QLabel *phone;
    QLineEdit *phoneLine;
    QPushButton *nameAscButton;
    QPushButton *nameDescButton;
    QLabel *inName;
    QLabel *inTime;
    QPushButton *timeAscButton;
    QPushButton *timeDescButton;
    QLabel *inGender;
    QPushButton *maleButton;
    QPushButton *femaleButton;
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
        return_Button->setGeometry(QRect(650, 450, 92, 31));
        close_Button = new QPushButton(centralwidget);
        close_Button->setObjectName("close_Button");
        close_Button->setGeometry(QRect(650, 490, 92, 31));
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
        functionBox->setGeometry(QRect(550, 450, 91, 31));
        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(100, 450, 171, 27));
        QFont font1;
        font1.setPointSize(10);
        nameLine->setFont(font1);
        idLine = new QLineEdit(centralwidget);
        idLine->setObjectName("idLine");
        idLine->setGeometry(QRect(100, 490, 171, 27));
        confirm_Button = new QPushButton(centralwidget);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setGeometry(QRect(550, 490, 91, 31));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 30, 601, 391));
        genderBox = new QComboBox(centralwidget);
        genderBox->addItem(QString());
        genderBox->addItem(QString());
        genderBox->addItem(QString());
        genderBox->setObjectName("genderBox");
        genderBox->setGeometry(QRect(350, 490, 101, 27));
        gender = new QLabel(centralwidget);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(300, 490, 69, 19));
        gender->setFont(font);
        phone = new QLabel(centralwidget);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(290, 450, 71, 21));
        phone->setFont(font);
        phoneLine = new QLineEdit(centralwidget);
        phoneLine->setObjectName("phoneLine");
        phoneLine->setGeometry(QRect(350, 450, 181, 31));
        phoneLine->setFont(font1);
        nameAscButton = new QPushButton(centralwidget);
        nameAscButton->setObjectName("nameAscButton");
        nameAscButton->setGeometry(QRect(690, 70, 81, 23));
        nameDescButton = new QPushButton(centralwidget);
        nameDescButton->setObjectName("nameDescButton");
        nameDescButton->setGeometry(QRect(690, 100, 80, 23));
        inName = new QLabel(centralwidget);
        inName->setObjectName("inName");
        inName->setGeometry(QRect(690, 40, 81, 20));
        QFont font2;
        font2.setPointSize(11);
        inName->setFont(font2);
        inTime = new QLabel(centralwidget);
        inTime->setObjectName("inTime");
        inTime->setGeometry(QRect(690, 160, 101, 16));
        inTime->setFont(font2);
        timeAscButton = new QPushButton(centralwidget);
        timeAscButton->setObjectName("timeAscButton");
        timeAscButton->setGeometry(QRect(690, 190, 80, 23));
        timeDescButton = new QPushButton(centralwidget);
        timeDescButton->setObjectName("timeDescButton");
        timeDescButton->setGeometry(QRect(690, 220, 80, 23));
        inGender = new QLabel(centralwidget);
        inGender->setObjectName("inGender");
        inGender->setGeometry(QRect(690, 270, 81, 16));
        inGender->setFont(font2);
        maleButton = new QPushButton(centralwidget);
        maleButton->setObjectName("maleButton");
        maleButton->setGeometry(QRect(690, 300, 80, 23));
        femaleButton = new QPushButton(centralwidget);
        femaleButton->setObjectName("femaleButton");
        femaleButton->setGeometry(QRect(690, 330, 80, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 811, 20));
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
        phone->setText(QCoreApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267:", nullptr));
        nameAscButton->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        nameDescButton->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        inName->setText(QCoreApplication::translate("MainWindow", "\346\214\211\347\205\247\345\247\223\345\220\215:", nullptr));
        inTime->setText(QCoreApplication::translate("MainWindow", "\346\214\211\347\205\247\345\205\245\345\255\246\346\227\266\351\227\264:", nullptr));
        timeAscButton->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        timeDescButton->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        inGender->setText(QCoreApplication::translate("MainWindow", "\346\214\211\347\205\247\346\200\247\345\210\253:", nullptr));
        maleButton->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        femaleButton->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
