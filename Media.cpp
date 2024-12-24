#include "Media.h"
#include <iostream>
using namespace std;

Media::Media(const string& titre, const string& cheminFichier, int id)
    : titre(titre), cheminFichier(cheminFichier), id(id) {}

void Media::afficherDetails() const {
    cout << "Titre: " << titre << endl;
    cout << "Chemin du fichier: " << cheminFichier << endl;
    cout << "ID: " << id << endl;
}

int Media::getId() const {
    return id;
}
