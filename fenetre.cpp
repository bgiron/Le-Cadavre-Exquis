#include "fenetre.h"

fenetre::fenetre(QWidget* chargement,QWidget *parent) :
    QWidget(parent)
{
    //definition du titre de la fenetre
    this->setWindowTitle("Jeu du cadavre exquis");

    //on fait la liaison entre les deux fenetres
    connect(this,SIGNAL(charge(int)),chargement,SLOT(charge(int)));
    connect(this,SIGNAL(initCharge(int)),chargement,SLOT(init(int)));

    //initialisation des arbres qui contiennents les differents types de mot
    noms = new ArbreLettres(0);
    adjectifs = new ArbreLettres(0);
    adverbes = new ArbreLettres(0);
    verbes = new ArbreLettres(0);

    //on charge le dico
    this->chargeDico("DicoFR.txt");
    this->chargePhrases("StructuresPhrases.txt");

    // toutes les lectures sont finies on peut commencer a afficher la fenetre

    //on commence par initialiser le moteur aleatoire
    srand(time(NULL));

    //declaration et initialisation du layout de la fenetre
    QGridLayout* layout = new QGridLayout();

    //initialisation des elements de la fenetre
    genereVer = new QPushButton("Generer un verbe",this);
    genereAdj = new QPushButton("Generer un adjectif",this);
    genereAdv = new QPushButton("Generer un adverbe",this);
    genereNom = new QPushButton("Generer un nom",this);
    generePhrase = new QPushButton("Generer une phrase",this);
    mot_affiche = new QLineEdit("Bienvenue, utilisez les boutons pour generer des mots ou phrases aleatoires",this);

    //on interdit les modifications de l'affichage
    mot_affiche->setReadOnly(true);

    //on ajoute les widgets a leur place dans la fenetre
    layout->addWidget(genereVer,1,0,1,1);
    layout->addWidget(genereAdj,1,1,1,1);
    layout->addWidget(genereAdv,1,2,1,1);
    layout->addWidget(genereNom,1,3,1,1);
    layout->addWidget(mot_affiche,0,0,1,4);
    layout->addWidget(generePhrase,2,0,1,4);

    //utilise le layout
    this->setLayout(layout);

    // finalement fait les connexions slot-signaux
    connect(genereVer,SIGNAL(clicked()),this,SLOT(afficheVer()));
    connect(genereNom,SIGNAL(clicked()),this,SLOT(afficheNom()));
    connect(genereAdj,SIGNAL(clicked()),this,SLOT(afficheAdj()));
    connect(genereAdv,SIGNAL(clicked()),this,SLOT(afficheAdv()));
    connect(generePhrase,SIGNAL(clicked()),this,SLOT(affichePhrase()));
}

void fenetre::afficheAdj()
{
    mot_affiche->setText(adjectifs->motAuHazard());
}

void fenetre::afficheAdv()
{
    mot_affiche->setText(adverbes->motAuHazard());
}

void fenetre::afficheNom()
{
    mot_affiche->setText(noms->motAuHazard());
}

void fenetre::afficheVer()
{
    mot_affiche->setText(verbes->motAuHazard());
}

void fenetre::affichePhrase()
{
    //en premier on choisit une structure de phrase au hazard
    int structPhrase = rand() % phrases.size();

    //declaration du texte a afficher
    QString phrase;

    //on decompose la ligne en mots
    QStringList mots = phrases.at(structPhrase).split(QRegExp("\\s+"));

    //pour chaque mot dans la structure de phrase on en genere un de la famille correspondante
    for(int i = 0 ; i < mots.size() ; i++)
    {
        if(mots.at(i) == "nom")
        {
            phrase.append(noms->motAuHazard());
            phrase.append(" ");
        }
        else if(mots.at(i) == "adj")
        {
            phrase.append(adjectifs->motAuHazard());
            phrase.append(" ");
        }
        else if(mots.at(i) == "adv")
        {
            phrase.append(adverbes->motAuHazard());
            phrase.append(" ");
        }
        else if(mots.at(i) == "ver")
        {
            phrase.append(verbes->motAuHazard());
            phrase.append(" ");
        }
        else // si enfait on a écrit un mot obligatoire comme "qui" on l'ajoute a la phrase
        {
            phrase.append(mots.at(i));
            phrase.append(" ");
        }
    }

    //finalement on affiche la phrase obtenue
    mot_affiche->setText(phrase);
}

bool fenetre::chargeDico(const std::string & emplacementDico)
{
    std::ifstream Dico(emplacementDico.c_str());    //Déclaration d'un flux permettant d'écrire un fichier.

    if(Dico)    //On teste si tout est OK.
    {
        //declaration de variables qui gardent en memoire les differentes infos a recuperer
        std::string formeFlechie;
        std::string formeDeBase;
        std::string infos;

        //on recupere la taille du fichier
        Dico.seekg(0,std::ios::end);
        int taille = Dico.tellg();

        //on se replace au debut du fichier
        Dico.seekg(0,std::ios::beg);

        //et on initialise deja la barre de progression
        emit initCharge(taille);

        //declaration d'une variable qui va gerer le nombre de MAJ de la barre de progrssion a faire
        unsigned int cpt=0;
        unsigned int pas = taille / 100;

        while ((int)Dico.tellg() != -1 ) // on continue tant qu'on a pas atteint la fin du fichier
        {
            if(Dico.tellg() >= cpt + pas) // si ça fait 1% du dico qu'on a pas maj la barre de progression
            {
                //on affiche l'avancement du chargement
                emit charge(Dico.tellg());
                cpt += pas; // et on maj cpt
            }

            // on recupere les diferrentes infos
            Dico >> formeFlechie;
            Dico >> formeDeBase;

            if(formeDeBase.c_str()[3] == ':') // s'il n'y a pas de forme flechie alors la forme de base est remplacé par les infos, on le detecte grace au 4eme terme de la forme de base
            {
                //si en effet il n'y a pas de forme flechie il faut décaler chacun des mots
                infos = formeDeBase;
                formeDeBase = formeFlechie;
                formeFlechie = "";
            }
            else
            {
                //s'il y a une forme flechie alors aucun décalage a faire et on recupere les infos normalement
                Dico >> infos;
            }

            QString string_formeDeBase(formeDeBase.c_str());
            QString string_formeFlechie(formeFlechie.c_str());
            QString string_infos(infos.c_str());

            //ajoute le mot dans la section correspondante
            if(QString(infos.c_str()).left(3) == "Nom")
                    noms->ajouterMot(&string_formeFlechie,&string_formeDeBase,&string_infos);
            else if (QString(infos.c_str()).left(3) == "Adj")
                    adjectifs->ajouterMot(&string_formeFlechie,&string_formeDeBase,&string_infos);
            else if (QString(infos.c_str()).left(3) == "Adv")
                    adverbes->ajouterMot(&string_formeFlechie,&string_formeDeBase,&string_infos);
            else if (QString(infos.c_str()).left(3) == "Ver")
                    verbes->ajouterMot(&string_formeFlechie,&string_formeDeBase,&string_infos);

        }
    }
    else
        return false;

    return true;
}

bool fenetre::chargePhrases(const std::string & emplacementPhrases)
{
    std::ifstream Phrases(emplacementPhrases.c_str());    //Déclaration d'un flux permettant d'écrire un fichier.

    if(Phrases)    //On teste si tout est OK.
    {
        //on parcours le fichier ligne par ligne cette fois
        std::string ligne;

        while(getline(Phrases,ligne))
        {
            phrases.append(QString(ligne.c_str()));
        }
    }
    else
        return false;

    return true;
}
