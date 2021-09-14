#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<QObject>
#include<QThread>
#include"worker.h"

class Controller : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    Controller();
    ~Controller() {
        workerThread.quit();
        workerThread.wait();
    }
public slots:
    void handleResults(const QString &);
signals:
    void operate(const QString &);
};

#endif // CONTROLLER_H
