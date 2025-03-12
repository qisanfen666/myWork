/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QLabel *title;
    QPushButton *picture;
    QPushButton *confirm_Button;
    QLineEdit *accountLine;
    QLabel *password;
    QPushButton *return_Button;
    QLineEdit *passwordLine;
    QLabel *account;
    QLineEdit *pwdConfirm;
    QLabel *label;

    void setupUi(QWidget *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(615, 400);
        title = new QLabel(SignUpWindow);
        title->setObjectName("title");
        title->setGeometry(QRect(220, 60, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font.setPointSize(16);
        title->setFont(font);
        picture = new QPushButton(SignUpWindow);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(440, 150, 101, 81));
        picture->setIconSize(QSize(105, 150));
        picture->setCheckable(false);
        confirm_Button = new QPushButton(SignUpWindow);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setGeometry(QRect(160, 300, 91, 28));
        accountLine = new QLineEdit(SignUpWindow);
        accountLine->setObjectName("accountLine");
        accountLine->setGeometry(QRect(160, 140, 251, 31));
        password = new QLabel(SignUpWindow);
        password->setObjectName("password");
        password->setGeometry(QRect(100, 180, 69, 19));
        QFont font1;
        font1.setPointSize(11);
        password->setFont(font1);
        return_Button = new QPushButton(SignUpWindow);
        return_Button->setObjectName("return_Button");
        return_Button->setGeometry(QRect(320, 300, 92, 28));
        passwordLine = new QLineEdit(SignUpWindow);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setGeometry(QRect(160, 180, 251, 31));
        passwordLine->setEchoMode(QLineEdit::EchoMode::Password);
        account = new QLabel(SignUpWindow);
        account->setObjectName("account");
        account->setGeometry(QRect(100, 140, 69, 19));
        account->setFont(font1);
        pwdConfirm = new QLineEdit(SignUpWindow);
        pwdConfirm->setObjectName("pwdConfirm");
        pwdConfirm->setGeometry(QRect(160, 220, 251, 31));
        pwdConfirm->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(SignUpWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 220, 81, 20));
        label->setFont(font1);

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QWidget *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Form", nullptr));
        title->setText(QCoreApplication::translate("SignUpWindow", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        picture->setText(QString());
        confirm_Button->setText(QCoreApplication::translate("SignUpWindow", "\347\241\256\345\256\232", nullptr));
        password->setText(QCoreApplication::translate("SignUpWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        return_Button->setText(QCoreApplication::translate("SignUpWindow", "\350\277\224\345\233\236", nullptr));
        account->setText(QCoreApplication::translate("SignUpWindow", "\350\264\246\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("SignUpWindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
