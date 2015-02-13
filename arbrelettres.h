#ifndef ARBRELETTRES_H
#define ARBRELETTRES_H

#include "famillelettres.h"
#include <time.h>
#include <cstdlib>

class ArbreLettres
{
public:
    ArbreLettres(int N);
    void ajouterMot(const QString *formeFlechie,const QString *formeDeBase,const QString *infos);
    QString motAuHazard(); // renvoi un mot au hazard etant contenu dans l'arbre

protected:
    ArbreLettres* lettres[27]; // contient 27 pointeurs vers des noeus, un pour chaque lettre et un pour les caracteres speciaux.
    FamilleLettres* famille; // pointeur vers la famille de lettres si le noeud est la derniere lettre du mot
    int n; // indique a quelle place ce situe la lettre dans le mot
};

#endif // ARBRELETTRES_H
