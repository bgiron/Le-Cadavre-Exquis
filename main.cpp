#include <QApplication>
#include "chargement.h"

int main (int argc, char* argv[])
{
    QApplication app(argc,argv);

    Chargement* f = new Chargement();

    return app.exec();
}
