#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800, 600); // Taille de la fenêtre ajustée
    w.show();
    return a.exec();
}
