#ifndef MEDIA_EBOOK_H
#define MEDIA_EBOOK_H

#include "Media.h"
using namespace std;

class MediaEbook : public Media {
private:
    string auteur;
    int nombrePages;

public:
    MediaEbook(const string& titre, const string& cheminFichier, int id, const string& auteur, int nombrePages);
    void afficherDetails() const; 
};

#endif 
