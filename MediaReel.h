#ifndef MEDIA_REEL_H
#define MEDIA_REEL_H

#include "Media.h"
using namespace std;

class MediaReel : public Media
{
private:
    double duree; 
    string tags;  

public:
    MediaReel(const string &titre, const string &cheminFichier, int id, double duree, const string &tags);
    void afficherDetails() const; 
};

#endif 
