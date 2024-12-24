#include "MediaPhoto.h"
#include <iostream>
using namespace std;

MediaPhoto::MediaPhoto(const string &titre, const string &cheminFichier, int id, const string &resolution, const string &focus)
    : Media(titre, cheminFichier, id), resolution(resolution), focus(focus) {}

void MediaPhoto::afficherDetails() const
{
    Media::afficherDetails();
    cout << "Résolution: " << resolution << endl;
    cout << "Focus: " << focus << endl;
}
