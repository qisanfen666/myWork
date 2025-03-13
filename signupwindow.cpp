#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <widget.h>

SignUpWindow::SignUpWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);

    //添加图片
    QIcon con("E:\\picture\\rana.png");
    this->setWindowIcon(con);
    this->setWindowTitle("注册");
    ui->picture->setIcon(con);

    //连接信号与槽
    connect(ui->passwordLine,SIGNAL(returnPressed()),this,SLOT(on_confirm_Button_clicked()));
    connect(ui->return_Button,SIGNAL(&QPushButton::clicked),this,SLOT(on_return_Button_clicked()));

    //连接数据库
    db=QSqlDatabase::addDatabase("QODBC"); // jiasai bd qudong
    db.setPort(3306);
    db.setDatabaseName ("test");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("061532");
    db.open();
}


SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::on_confirm_Button_clicked()
{
    //获取输入的账号，密码，再次确认的密码
    QString account=ui->accountLine->text();
    QString pwd=ui->passwordLine->text();
    QString pwd1=ui->pwdConfirm->text();
    QSqlQuery query;
    QString sql=QString("insert into account (account,password) values ('%1','%2');").arg(account,pwd);

    //如果密码与确认密码一致，则将账号信息插入数据库
    if(pwd==pwd1 && query.exec(sql)){
        QMessageBox::information(this,"提示","注册成功");
    }
    else{
        QMessageBox::information(this,"失败","账号已注册或非法");
    }
}

//关闭当前界面，返回登录界面
void SignUpWindow::on_return_Button_clicked()
{
    this->close();
    Widget* signIn=new Widget;
    signIn->show();
}

