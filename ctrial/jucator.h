#ifndef JUCATOR_H
#define JUCATOR_H
#include <QString>
#include <QObject>

class Jucator
{


public:
    QString nume;
    int scor;
    Jucator(QString);
    void operator +=(int a);
};



#endif // JUCATOR_H
