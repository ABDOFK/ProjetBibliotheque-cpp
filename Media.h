#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media {
protected:
    string titre;
    string cheminFichier;
    int id;

public:
    Media(const string& titre, const string& cheminFichier, int id);
    virtual void afficherDetails() const; 
    int getId() const;  
};

#endif
