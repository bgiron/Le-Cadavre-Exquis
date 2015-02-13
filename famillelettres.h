#ifndef FAMILLELETTRES_H
#define FAMILLELETTRES_H

#include <QString>
#include <QList>

class FamilleLettres
{
public:
    FamilleLettres(QString MOT);
    QString formeDeBase();

protected:
    QString mot; // contient le mot
    QList<QString> famille; // contient la famille du mot
};

#endif // FAMILLELETTRES_H
