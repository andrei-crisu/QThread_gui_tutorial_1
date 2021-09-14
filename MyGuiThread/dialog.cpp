#include "dialog.h"
#include "ui_dialog.h"
#include"controller.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    mThread=new MyThread(this);
    connect(mThread,SIGNAL(NumberChanged(int)),this,SLOT(onNumberChanged(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChanged(int number)
{
    ui->label->setText(QString::number(number));
}


void Dialog::on_start_clicked()
{/*
    //started
    mThread->start();
    ui->start->setEnabled(false);*/
    Controller * ctrl=new Controller();
    delete ctrl;

}


void Dialog::on_stop_clicked()
{
//    //stopped
//    mThread->stop=true;
}


void Dialog::on_pushButton_clicked()
{
//    //resumed
//    mThread->stop=true;
}

