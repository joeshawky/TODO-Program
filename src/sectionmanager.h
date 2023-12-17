#ifndef SECTIONMANAGER_H
#define SECTIONMANAGER_H

#include <QObject>

class SectionManager : public QObject
{
    Q_OBJECT
public:
    explicit SectionManager(QObject *parent = nullptr);

signals:
};

#endif // SECTIONMANAGER_H
