#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include "qstring.h"
#include "qmessagebox.h"
#include<time.h>
void GenerateCaptcha();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    on_refresh_clicked();
}


MainWindow::~MainWindow()
{
    delete ui;
}



student::student()
{
    name = "";
    clg = "";
    email = "";
}

int student::count;
char cap[5];

void student::AcceptUser(QString name,QString email,QString clg)
{
    this->name = name;
    this->email = email;
    this->clg = clg;
}

void GenerateCaptcha()
{
    char ValuesAllowed[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    int index;
    srand(time(NULL));

//    char cap[5];
    for(int i=0;i<5;i++)
    {
        index = rand();
        index = index%36;
        cap[i] = ValuesAllowed[index];
    }

}

void MainWindow::on_pushButton_clicked()
{
    QString name,email,clg;
    name = ui->name->text();
    email = ui->email->text();
    clg = ui->clg->text();

    QString captcha = ui->captcha->text();
    int flag;


    if(flag!=0)
    {
        QMessageBox::information(this,"Invalid Captcha","Invalid Captcha, Please try again");
    }
    else
    {
        student *stud = new student;

        stud->AcceptUser(name,email,clg);
        student::count++;

        QMessageBox::information(this,"Success","User registered successfully");
        ui->name->clear();
        ui->clg->clear();
        ui->email->clear();
    }
}

void MainWindow::on_refresh_clicked()
{
    GenerateCaptcha();
    QString s1(cap[0]);
    ui->c1->setText(s1);
    QString s2(cap[1]);
    ui->c2->setText(s2);
    QString s3(cap[2]);
    ui->c3->setText(s3);
    QString s4(cap[3]);
    ui->c4->setText(s4);
    QString s5(cap[4]);
    ui->c5->setText(s5);

}

void MainWindow::on_exit_clicked()
{
    this->close();
}
