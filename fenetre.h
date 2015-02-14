#ifndef FENETRE_H
#define FENETRE_H

#include <QWidget>
#include "arbrelettres.h"
#include "fichiers.h"
#include <QLineEdit>
#include <QGridLayout>
#include <QTableView>
#include <QStandardItemModel>
#include <QPushButton>
#include <time.h>
#include <cstdlib>

class fenetre : public QWidget
{
    Q_OBJECT
public:
    explicit fenetre(QWidget* chargement, QWidget *parent = 0);

protected:
    ArbreLettres* verbes;
    ArbreLettres* noms;
    ArbreLettres* adjectifs;
    ArbreLettres* adverbes;
    QPushButton* genereVer;
    QPushButton* genereNom;
    QPushButton* genereAdj;
    QPushButton* genereAdv;
    QPushButton* generePhrase;
    QLineEdit* mot_affiche;
    QList<QString> phrases;

    bool chargeDico(const std::string & emplacementDico);
    bool chargePhrases(const std::string & emplacementPhrases);

signals:
    void initCharge(int t);
    void charge(int c);

public slots:
    void afficheNom();
    void afficheVer();
    void afficheAdj();
    void afficheAdv();
    void affichePhrase();

};

#endif // FENETRE_H
