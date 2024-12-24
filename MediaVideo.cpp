#include "MediaVideo.h"
#include <iostream>
using namespace std;


MediaVideo::MediaVideo(const string& titre, const string& cheminFichier, int id, double longueur, int fps)
    : Media(titre, cheminFichier, id), longueur(longueur), fps(fps) {}


void MediaVideo::afficherDetails() const {
    Media::afficherDetails(); 
    cout << "Longueur: " << longueur << " minutes" << endl;
    cout << "FPS: " << fps << " images par seconde" << endl;
}
