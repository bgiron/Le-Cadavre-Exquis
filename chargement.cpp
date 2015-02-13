#include "chargement.h"

Chargement::Chargement(QWidget *parent) :
    QWidget(parent)
{

    barre = new QProgressBar(this);//initialisation de la barre de progression
    barre->setValue(0);
    label = new QLabel("Lecture du fichier DicoFR.txt ....",this);//init du label

    layout=new QVBoxLayout(); // init du layout
    layout->addWidget(label);
    layout->addWidget(barre);

    //la fenetre utilise le layout
    this->setLayout(layout);
}

void Chargement::charge(int c)
{
    barre->setValue(c);
}

void Chargement::init(int t)
{
    barre->setMaximum(t);
}

void Chargement::ouvreFenetre()
{
    fenetre* f = new fenetre(this);//declare notre fenetre principale
    f->show();//l'affiche
    this->close();//on ferme cette fenetre, elle n'est plus utile.
}
