#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include "Media.h"
#include <vector>

class Bibliotheque {
private:
    vector<Media*> medias; 

public:
    void ajouterMedia(Media* media);    
    void supprimerMedia(int id);      
    void afficherBibliotheque() const; 
};

#endif 
