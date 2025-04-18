//管理员权限界面

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <widget.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //添加图片
    QIcon con("E:\\picture\\emu.png");
    this->setWindowIcon(con);
    this->setWindowTitle("学生管理系统");

    //连接信号与槽
    connect(ui->return_Button,SIGNAL(&QPushButton::pressed),this,SLOT(on_return_Button_clicked()));
    connect(ui->close_Button,SIGNAL(&QPushButton::pressed),this,SLOT(on_close_Button_clicked()));
    connect(ui->confirm_Button,SIGNAL(&QPushButton::pressed),this,SLOT(on_confirm_Button_clicked()));

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
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    ui->tableView->setModel(m);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//关闭当前界面，返回登录界面
void MainWindow::on_return_Button_clicked()
{
    this->close();
    Widget *w=new Widget;
    w->show();
}

//关闭当前界面
void MainWindow::on_close_Button_clicked()
{
    this->close();
}

//记录选择的操作类型
void MainWindow::on_functionBox_currentTextChanged(const QString &arg1)
{
    this->func=arg1;
}


void MainWindow::on_confirm_Button_clicked()
{
    //获取输入的文本
    QString name=ui->nameLine->text();
    QString stuId=ui->idLine->text();
    QString phone=ui->phoneLine->text();
    QString gender=this->gender;
    QSqlQuery query;

    //根据选择的操作类型对数据库进行操作
    if(func=="增加"){
        QString sql=QString("insert into student (name,stuId,gender,phone)value('%1','%2','%3','%4');").arg(name,stuId,gender,phone);
        if(query.exec(sql)){
            QMessageBox::information(this,"提示","添加成功");
        }
        else{
            QMessageBox::information(this,"提示","添加失败");
        }
    }
    if(func=="删除"){
        QString sql=QString("delete from student where name='%1'&&stuId='%2' ;").arg(name,stuId);
        if(query.exec(sql)){
            QMessageBox::information(this,"提示","删除成功");
        }
        else{
             QMessageBox::information(this,"提示","删除失败");
        }
    }
    if(func=="修改"){
        QString sql=QString("update student set name='%1',gender='%2',phone='%3' where stuId='%4'").arg(name,gender,phone,stuId);
        if(query.exec(sql)){
            QMessageBox::information(this,"提示","修改成功");
        }
        else{
            QMessageBox::information(this,"提示","修改失败");
        }
    }
    if(func=="查询"){
        m->setTable("student");
        m->setHeaderData(0, Qt::Horizontal, tr("编号"));
        m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
        m->setHeaderData(5, Qt::Horizontal, tr("性别"));
        m->setHeaderData(2, Qt::Horizontal, tr("学号"));
        m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
        m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));


        //如果没输入则查询所有信息，有输入则按id或name查询
        if(name==""&&stuId==""){
            m->select();
        }
        else{
            m->setFilter(QString("stuId='%1'|| name='%2'").arg(stuId,name));
            m->select();
        }
    }
    ui->nameLine->clear();
    ui->idLine->clear();
    ui->genderBox->setCurrentIndex(0);
    ui->phoneLine->clear();
}

//记录选择的性别
void MainWindow::on_genderBox_currentTextChanged(const QString &arg1)
{
    this->gender=arg1;
}


void MainWindow::on_nameAscButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(1,Qt::AscendingOrder);
    m->select();
}


void MainWindow::on_nameDescButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(1,Qt::DescendingOrder);
    m->select();
}


void MainWindow::on_timeAscButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(0,Qt::AscendingOrder);
    m->select();
}


void MainWindow::on_timeDescButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(0,Qt::DescendingOrder);
    m->select();
}


void MainWindow::on_maleButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(0,Qt::AscendingOrder);
    m->setFilter(QString("gender='男'"));
    m->select();
}


void MainWindow::on_femaleButton_clicked()
{
    m->setTable("student");
    m->setHeaderData(0, Qt::Horizontal, tr("编号"));
    m->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    m->setHeaderData(5, Qt::Horizontal, tr("性别"));
    m->setHeaderData(2, Qt::Horizontal, tr("学号"));
    m->setHeaderData(3, Qt::Horizontal, tr("手机号"));
    m->setHeaderData(4, Qt::Horizontal, tr("入学时间"));
    m->setSort(0,Qt::AscendingOrder);
    m->setFilter(QString("gender='女'"));
    m->select();
}

