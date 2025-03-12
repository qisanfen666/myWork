#include "widget.h"
#include "signupwindow.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //添加图片
    QIcon con("E:\\picture\\rana.png");
    this->setWindowIcon(con);
    this->setWindowTitle("登录");
    ui->picture->setIcon(con);

    //连接信号与槽
    connect(ui->passwordLine,SIGNAL(returnPressed()),this,SLOT(on_confirm_Button_clicked()));
    connect(ui->cancel_Button,SIGNAL(&QPushButton::clicked),this,SLOT(on_cancel_Button_clicked()));

    //连接数据库
    db=QSqlDatabase::addDatabase("QODBC");
    db.setPort(3306);
    db.setDatabaseName ("test");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("061532");
    db.open();


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_confirm_Button_clicked()
{
    //获取输入的文本
    QString account=ui->accountLine->text();
    QString pwd=ui->passwordLine->text();
    QSqlQuery query;

    //查询
    QString sql=QString("select account,password,level from account;");

    if(query.exec(sql)){
        bool flag=0;
        while(query.next()){

            //每行查询的结果
            QString ret1=query.value(0).toString();
            QString ret2=query.value(1).toString();
            QString ret3=query.value(2).toString();

            //用管理员权限登录
            if(ret1==account&&ret2==pwd&&ret3=="1"){
                QMessageBox::information(this,"提示","登陆成功");
                this->close();
                MainWindow* w1=new MainWindow;
                w1->show();
                flag=1;
                break;
            }
            //用普通用户权限登录
            if(ret1==account&&ret2==pwd&&ret3=="2"){
                QMessageBox::information(this,"提示","登陆成功");
                this->close();
                UserWindow* w2=new UserWindow;
                w2->show();
                flag=1;
                break;
            }
        }
        if(flag==0){
            QMessageBox::information(this,"提示","账号或密码错误");
        }
    }
}

//关闭界面
void Widget::on_cancel_Button_clicked()
{
    this->close();
}

//进入注册界面
void Widget::on_commandLinkButton_clicked()
{
    this->close();
    SignUpWindow* signUp=new SignUpWindow;
    signUp->show();
}

