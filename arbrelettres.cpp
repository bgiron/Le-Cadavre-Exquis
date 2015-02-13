#include "arbrelettres.h"

ArbreLettres::ArbreLettres(int N)
{
    n = N;

    for(int i = 0 ; i < 27 ; i++)
    {
        lettres[i] = NULL;
    }

    famille = NULL;
}

void ArbreLettres::ajouterMot(const QString *formeFlechie,const QString *formeDeBase,const QString *infos)
{
    if( n >= formeDeBase->size()) //si le mot est fini
    {
        if(famille == NULL) // si la famille n'a toujours pas été créée
        {
            famille = new FamilleLettres(*formeDeBase); // on la créée
        }

        //ajout des accords et conjugaisons

        return; // puis on sort
    }


    int index = formeDeBase->mid(n,1).toStdString().c_str()[0] - 'a';// recupere l'index de la premiere lettre 0 correspond a 'a'

    if(index < 0 || index > 25)//si l'index ne correspond pas a une lettre
        index = 26; // alors c'est un caractere special

    if(lettres[index] == NULL) // si le pointeur vers la lettre voulue n'existe pas, on le créé
    {
        lettres[index] = new ArbreLettres(n+1);
    }

    lettres[index]->ajouterMot(formeFlechie,formeDeBase,infos); // on passe au niveau suivant
}

QString ArbreLettres::motAuHazard()
{
    int nb_noeudsSuivants =0, index,i,j,tirage;

    for(i = 0 ; i < 27 ; i++) // recupere le nombre de noeuds suivants valables
    {
        if( lettres[i] != NULL)
            nb_noeudsSuivants++;
    }

    if(nb_noeudsSuivants == 0) // s'il n'y a aucun noeud possible on renvoi le mot où l'on se trouve
        return famille->formeDeBase();

    if(famille != 0 && rand() % (nb_noeudsSuivants +1) == 0) // si on le noeud où l'on est represente un mot alors on a une chance sur (nb_noeudsSuivants +1) de l'envoyer
        return famille->formeDeBase();

    //sinon on genere un index aleatoirement
    tirage = rand() % nb_noeudsSuivants;
    i=0;
    j=0;

    while(j<=tirage)
    {
        if(lettres[i] != NULL)
        {
            j++;
            index=i;
        }
        i++;
    }

    return lettres[index]->motAuHazard();
}
