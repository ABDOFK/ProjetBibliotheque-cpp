#ifndef MEDIA_VIDEO_H
#define MEDIA_VIDEO_H

#include "Media.h"
using namespace std;
class MediaVideo : public Media {
private:
    double longueur; 
    int fps;         

public:
    MediaVideo(const string& titre, const string& cheminFichier, int id, double longueur, int fps);
    void afficherDetails() const; 
};

#endif
