#include "worker.h"

void Worker::doWork(const QString &parameter) {
    QString result;
    result="nothing to do here: ";
    result+=parameter;
    /* ... here is the expensive or blocking operation ... */
    int i=0;
    emit resultReady(result+QString::number(i));

}
