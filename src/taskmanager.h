#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QObject>

class TaskManager : public QObject
{
    Q_OBJECT
public:
    explicit TaskManager(QObject *parent = nullptr);

signals:
};

#endif // TASKMANAGER_H
