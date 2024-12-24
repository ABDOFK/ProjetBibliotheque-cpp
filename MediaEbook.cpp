#include "MediaEbook.h"
#include <iostream>
using namespace std;

MediaEbook::MediaEbook(const string &titre, const string &cheminFichier, int id, const string &auteur, int nombrePages)
    : Media(titre, cheminFichier, id), auteur(auteur), nombrePages(nombrePages) {}

void MediaEbook::afficherDetails() const
{
    Media::afficherDetails();
    cout << "Auteur: " << auteur << endl;
    cout << "Nombre de pages: " << nombrePages << endl;
}
