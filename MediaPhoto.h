#ifndef MEDIA_PHOTO_H
#define MEDIA_PHOTO_H

#include "Media.h"
using namespace std;

class MediaPhoto : public Media {
private:
    string resolution; 
    string focus;      

public:
    MediaPhoto(const string& titre, const string& cheminFichier, int id, const string& resolution, const string& focus);
    void afficherDetails() const; 
};

#endif 
