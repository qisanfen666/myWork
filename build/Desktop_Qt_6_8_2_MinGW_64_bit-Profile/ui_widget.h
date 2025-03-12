/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *title;
    QLabel *account;
    QLabel *password;
    QLineEdit *accountLine;
    QLineEdit *passwordLine;
    QPushButton *confirm_Button;
    QPushButton *cancel_Button;
    QPushButton *picture;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(615, 396);
        title = new QLabel(Widget);
        title->setObjectName("title");
        title->setGeometry(QRect(210, 40, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font.setPointSize(16);
        title->setFont(font);
        account = new QLabel(Widget);
        account->setObjectName("account");
        account->setGeometry(QRect(110, 120, 69, 19));
        QFont font1;
        font1.setPointSize(11);
        account->setFont(font1);
        password = new QLabel(Widget);
        password->setObjectName("password");
        password->setGeometry(QRect(110, 190, 69, 19));
        password->setFont(font1);
        accountLine = new QLineEdit(Widget);
        accountLine->setObjectName("accountLine");
        accountLine->setGeometry(QRect(170, 120, 251, 31));
        passwordLine = new QLineEdit(Widget);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setGeometry(QRect(170, 186, 251, 31));
        confirm_Button = new QPushButton(Widget);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setGeometry(QRect(170, 280, 91, 28));
        cancel_Button = new QPushButton(Widget);
        cancel_Button->setObjectName("cancel_Button");
        cancel_Button->setGeometry(QRect(330, 280, 92, 28));
        picture = new QPushButton(Widget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(450, 130, 101, 81));
        picture->setIconSize(QSize(105, 150));
        picture->setCheckable(false);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        title->setText(QCoreApplication::translate("Widget", "\347\263\273\347\273\237\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        account->setText(QCoreApplication::translate("Widget", "\350\264\246\345\217\267\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm_Button->setText(QCoreApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        cancel_Button->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
