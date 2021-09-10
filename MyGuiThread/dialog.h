#ifndef DIALOG_H
#define DIALOG_H

#include"mythread.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    MyThread *mThread;

public slots:
     void onNumberChanged(int);

private slots:
     void on_start_clicked();

     void on_stop_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
