#include "Bibliotheque.h"
#include <iostream>

void Bibliotheque::ajouterMedia(unique_ptr<Media> media) {
    medias.push_back(move(media)); 
}

bool Bibliotheque::supprimerMedia(int id) {
    for (auto it = medias.begin(); it != medias.end(); ++it) {
        if ((*it)->getId() == id) {
            medias.erase(it); 
            return true; 
        }
    }
    return false; 
}

void Bibliotheque::afficherBibliotheque() const {
    if (medias.empty()) {
        cout << "La bibliothèque est vide." << endl;
        return;
    }

    cout << "\n=== Contenu de la bibliothèque ===" << endl;
    for (const auto& media : medias) {
        media->afficherDetails();
    }
}
