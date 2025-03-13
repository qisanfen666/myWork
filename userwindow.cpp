//普通用户权限界面

#include "userwindow.h"
#include "ui_userwindow.h"
#include <widget.h>

UserWindow::UserWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserWindow)
{
    ui->setupUi(this);

    //添加图片
    QIcon con("E:\\picture\\emu.png");
    this->setWindowIcon(con);
    this->setWindowTitle("学生管理系统");

    //连接信号与槽
    connect(ui->confirm_Button,SIGNAL(&QPushButton::pressed),this,SLOT(on_confirm_Button_clicked()));
    connect(ui->return_Button,SIGNAL(&QPushButton:pressed),this,SLOT(on_return_Button_clicked()));
    connect(ui->close_Button,SIGNAL(&QPushButton:pressed),this,SLOT(on_close_Button_clicked()));

    //连接数据库
    db=QSqlDatabase::addDatabase("QODBC"); // jiasai bd qudong
    db.setPort(3306);
    db.setDatabaseName ("test");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("061532");
    db.open();

    //设置表的显示
    m=new QSqlTableModel;
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(1, Qt::Horizontal, tr("学号"));
    m->setHeaderData(2, Qt::Horizontal, tr("性别"));
    ui->tableView->setModel(m);
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::on_confirm_Button_clicked()
{
    QString name=ui->nameLine->text();
    QString id=ui->idLine->text();

    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(1, Qt::Horizontal, tr("学号"));
    m->setHeaderData(2, Qt::Horizontal, tr("性别"));

    //如果没输入则查询所有信息，有输入则按id或name查询
    if(name==""&&id==""){
        m->select();
    }
    else{
        m->setFilter(QString("id='%1'||name='%2'").arg(id,name));
        m->select();
    }

    //重置输入内容
    ui->nameLine->clear();
    ui->idLine->clear();
}

//关闭当前界面，回到登录界面
void UserWindow::on_return_Button_clicked()
{
    this->close();
    Widget *w=new Widget;
    w->show();
}

//关闭当前界面
void UserWindow::on_close_Button_clicked()
{
    this->close();
}

