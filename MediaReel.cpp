#include "MediaReel.h"
#include <iostream>
using namespace std;

MediaReel::MediaReel(const string &titre, const string &cheminFichier, int id, double duree, const string &tags)
    : Media(titre, cheminFichier, id), duree(duree), tags(tags) {}

void MediaReel::afficherDetails() const
{
    Media::afficherDetails();
    cout << "Durée: " << duree << " minutes" << endl;
    cout << "Tags: " << tags << endl;
}
