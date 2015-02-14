#ifndef CHARGEMENT_H
#define CHARGEMENT_H

#include <QWidget>
#include <QProgressBar>
#include <QLabel>
#include "fenetre.h"
#include <QVBoxLayout>

class Chargement : public QWidget
{
    Q_OBJECT
public:
    explicit Chargement(QWidget *parent = 0);
    void ouvreFenetre();

protected:
    QProgressBar* barre;//une petite barre de progression
    QLabel* label; // un petit mot pour l'utilisateur

signals:

public slots:
    void charge(int c);//maj la barre de progression
    void init(int t);//initialise la barre de progression

};

#endif // CHARGEMENT_H
