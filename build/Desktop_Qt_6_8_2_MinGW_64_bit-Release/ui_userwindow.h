/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

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

class Ui_UserWindow
{
public:
    QWidget *centralwidget;
    QPushButton *return_Button;
    QLineEdit *nameLine;
    QLabel *id;
    QPushButton *confirm_Button;
    QComboBox *genderBox;
    QPushButton *close_Button;
    QLineEdit *idLine;
    QLabel *name;
    QTableView *tableView;
    QLabel *inName;
    QPushButton *nameAscButton;
    QPushButton *nameDescButton;
    QLabel *inTime;
    QPushButton *timeAscButton;
    QPushButton *timeDescButton;
    QLabel *inGender;
    QPushButton *maleButton;
    QPushButton *femaleButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName("UserWindow");
        UserWindow->resize(800, 600);
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName("centralwidget");
        return_Button = new QPushButton(centralwidget);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(520, 440, 92, 31));
        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(110, 440, 241, 27));
        id = new QLabel(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(50, 480, 69, 19));
        QFont font;
        font.setPointSize(12);
        id->setFont(font);
        confirm_Button = new QPushButton(centralwidget);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setGeometry(QRect(410, 480, 91, 31));
        genderBox = new QComboBox(centralwidget);
        genderBox->addItem(QString());
        genderBox->setObjectName("genderBox");
        genderBox->setGeometry(QRect(410, 440, 91, 31));
        close_Button = new QPushButton(centralwidget);
        close_Button->setObjectName("close_Button");
        close_Button->setGeometry(QRect(520, 480, 92, 28));
        idLine = new QLineEdit(centralwidget);
        idLine->setObjectName("idLine");
        idLine->setGeometry(QRect(110, 480, 241, 27));
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(50, 440, 69, 19));
        name->setFont(font);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 20, 591, 391));
        inName = new QLabel(centralwidget);
        inName->setObjectName("inName");
        inName->setGeometry(QRect(680, 60, 81, 20));
        QFont font1;
        font1.setPointSize(11);
        inName->setFont(font1);
        nameAscButton = new QPushButton(centralwidget);
        nameAscButton->setObjectName("nameAscButton");
        nameAscButton->setGeometry(QRect(680, 90, 81, 23));
        nameDescButton = new QPushButton(centralwidget);
        nameDescButton->setObjectName("nameDescButton");
        nameDescButton->setGeometry(QRect(680, 120, 80, 23));
        inTime = new QLabel(centralwidget);
        inTime->setObjectName("inTime");
        inTime->setGeometry(QRect(670, 170, 101, 16));
        inTime->setFont(font1);
        timeAscButton = new QPushButton(centralwidget);
        timeAscButton->setObjectName("timeAscButton");
        timeAscButton->setGeometry(QRect(680, 200, 80, 23));
        timeDescButton = new QPushButton(centralwidget);
        timeDescButton->setObjectName("timeDescButton");
        timeDescButton->setGeometry(QRect(680, 230, 80, 23));
        inGender = new QLabel(centralwidget);
        inGender->setObjectName("inGender");
        inGender->setGeometry(QRect(690, 280, 81, 16));
        inGender->setFont(font1);
        maleButton = new QPushButton(centralwidget);
        maleButton->setObjectName("maleButton");
        maleButton->setGeometry(QRect(680, 310, 80, 23));
        femaleButton = new QPushButton(centralwidget);
        femaleButton->setObjectName("femaleButton");
        femaleButton->setGeometry(QRect(680, 340, 80, 23));
        UserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        UserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName("statusbar");
        UserWindow->setStatusBar(statusbar);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QCoreApplication::translate("UserWindow", "MainWindow", nullptr));
        return_Button->setText(QCoreApplication::translate("UserWindow", "\350\277\224\345\233\236", nullptr));
        id->setText(QCoreApplication::translate("UserWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        confirm_Button->setText(QCoreApplication::translate("UserWindow", "\347\241\256\345\256\232", nullptr));
        genderBox->setItemText(0, QCoreApplication::translate("UserWindow", "\344\273\205\346\237\245\350\257\242", nullptr));

        close_Button->setText(QCoreApplication::translate("UserWindow", "\345\205\263\351\227\255", nullptr));
        name->setText(QCoreApplication::translate("UserWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        inName->setText(QCoreApplication::translate("UserWindow", "\346\214\211\347\205\247\345\247\223\345\220\215:", nullptr));
        nameAscButton->setText(QCoreApplication::translate("UserWindow", "\345\215\207\345\272\217", nullptr));
        nameDescButton->setText(QCoreApplication::translate("UserWindow", "\351\231\215\345\272\217", nullptr));
        inTime->setText(QCoreApplication::translate("UserWindow", "\346\214\211\347\205\247\345\205\245\345\255\246\346\227\266\351\227\264:", nullptr));
        timeAscButton->setText(QCoreApplication::translate("UserWindow", "\345\215\207\345\272\217", nullptr));
        timeDescButton->setText(QCoreApplication::translate("UserWindow", "\351\231\215\345\272\217", nullptr));
        inGender->setText(QCoreApplication::translate("UserWindow", "\346\214\211\347\205\247\346\200\247\345\210\253:", nullptr));
        maleButton->setText(QCoreApplication::translate("UserWindow", "\347\224\267", nullptr));
        femaleButton->setText(QCoreApplication::translate("UserWindow", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
