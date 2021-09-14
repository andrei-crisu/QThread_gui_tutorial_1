#include "controller.h"
#include<QtDebug>

Controller::Controller()
{
    Worker *worker = new Worker;
    worker->moveToThread(&workerThread);
    connect(&workerThread, &QThread::finished, worker, &QObject::deleteLater);
    connect(this, &Controller::operate, worker, &Worker::doWork);
    connect(worker, &Worker::resultReady, this, &Controller::handleResults);
    workerThread.start();
    worker->doWork("Crisu Radu Andrei");
}

void Controller::handleResults(const QString &result)
{
    qDebug()<<result;
}
