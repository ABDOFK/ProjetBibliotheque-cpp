#include "MediaAudio.h"
#include <iostream>
using namespace std;


MediaAudio::MediaAudio(const string& titre, const string& cheminFichier, int id, double duree, const string& type)
    : Media(titre, cheminFichier, id), duree(duree), type(type) {}

void MediaAudio::afficherDetails() const {
    Media::afficherDetails();
    cout << "Durée: " << duree << " minutes" << endl;
    cout << "Type: " << type << endl;
}
