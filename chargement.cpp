#include "chargement.h"

Chargement::Chargement(QWidget *parent) :
    QWidget(parent)
{
    //definition du titre de la fenetre
    this->setWindowTitle("Chargement en cours, veuillez patienter...");

    this->resize(400,100);

    barre = new QProgressBar(this);//initialisation de la barre de progression
    barre->setValue(0);
    label = new QLabel("Lecture du fichier DicoFR.txt ...",this);//init du label

    QVBoxLayout * layout = new QVBoxLayout(); // init du layout
    layout->addWidget(label);
    layout->addWidget(barre);

    //la fenetre utilise le layout
    this->setLayout(layout);

    // on affiche la fenetre une fois finie
    this->show();

    //on ouvre la fenetre principale pour réaliser le chargement
    this->ouvreFenetre();
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
