#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
using namespace std;
#include "Media.h"
#include <vector>
#include <memory>
class Bibliotheque {
private:
     vector<unique_ptr<Media>> medias; 

public:
    void ajouterMedia(std::unique_ptr<Media> media);    
    bool supprimerMedia(int id);      
    void afficherBibliotheque() const; 
};

#endif 
