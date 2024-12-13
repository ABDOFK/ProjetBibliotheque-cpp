#ifndef MEDIA_AUDIO_H
#define MEDIA_AUDIO_H

#include "Media.h"
using namespace std;

class MediaAudio : public Media {
private:
    double duree;      
    string type;   

public:
    MediaAudio(const string& titre, const string& cheminFichier, int id, double duree, const string& type);
    void afficherDetails() const; 
};

#endif 
