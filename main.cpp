#include <iostream>
#include <memory>
#include <vector>
#include "Bibliotheque.h"
#include "MediaAudio.h"
#include "MediaPhoto.h"
#include "MediaVideo.h"
#include "MediaEbook.h"
#include "MediaReel.h"

using namespace std;

void afficherMenu() {
    cout << "Menu de la bibliothèque" << endl;
    cout << "1. Ajouter un média" << endl;
    cout << "2. Supprimer un média" << endl;
    cout << "3. Afficher tous les médias" << endl;
    cout << "4. Quitter" << endl;
}

int main() {
    Bibliotheque bibliotheque;
    int choix;
    
    do {
        afficherMenu();
        cout << "Veuillez choisir une option: ";
        cin >> choix;

        if (choix == 1) {
            int typeMedia;
            cout << "Quel type de média souhaitez-vous ajouter?" << endl;
            cout << "1. Audio" << endl;
            cout << "2. Photo" << endl;
            cout << "3. Vidéo" << endl;
            cout << "4. Ebook" << endl;
            cout << "5. Reel" << endl;
            cout << "Entrez le type de média: ";
            cin >> typeMedia;

            string titre, cheminFichier, type, focus, resolution, auteur, tags;
            int id, fps, nombrePages;
            double duree, longueur;

            cout << "Entrez le titre: ";
            cin >> titre;
            cout << "Entrez le chemin du fichier: ";
            cin >> cheminFichier;
            cout << "Entrez l'ID: ";
            cin >> id;

            switch (typeMedia) {
                case 1: 
                    cout << "Entrez la durée (en secondes): ";
                    cin >> duree;
                    cout << "Entrez le type (MP3, WAV, etc.): ";
                    cin >> type;
                    bibliotheque.ajouterMedia(make_unique<MediaAudio>(titre, cheminFichier, id, duree, type));
                    break;
                case 2: 
                    cout << "Entrez la résolution (par exemple 1920x1080): ";
                    cin >> resolution;
                    cout << "Entrez le focus (macro, grand-angle, etc.): ";
                    cin >> focus;
                    bibliotheque.ajouterMedia(make_unique<MediaPhoto>(titre, cheminFichier, id, resolution, focus));
                    break;
                case 3: 
                    cout << "Entrez la longueur (en secondes): ";
                    cin >> longueur;
                    cout << "Entrez le nombre de frames par seconde (fps): ";
                    cin >> fps;
                    bibliotheque.ajouterMedia(make_unique<MediaVideo>(titre, cheminFichier, id, longueur, fps));
                    break;
                case 4: 
                    cout << "Entrez l'auteur: ";
                    cin >> auteur;
                    cout << "Entrez le nombre de pages: ";
                    cin >> nombrePages;
                    bibliotheque.ajouterMedia(make_unique<MediaEbook>(titre, cheminFichier, id, auteur, nombrePages));
                    break;
                case 5: 
                    cout << "Entrez la durée (en secondes): ";
                    cin >> duree;
                    cout << "Entrez les tags (séparés par des virgules): ";
                    cin >> tags;
                    bibliotheque.ajouterMedia(make_unique<MediaReel>(titre, cheminFichier, id, duree, tags));
                    break;
                default:
                    cout << "Option invalide." << endl;
                    break;
            }
        } 
        else if (choix == 2) {
            int idMedia;
            cout << "Entrez l'ID du média à supprimer: ";
            cin >> idMedia;
            if (bibliotheque.supprimerMedia(idMedia)) {
                cout << "Média supprimé avec succès." << endl;
            } else {
                cout << "Média non trouvé." << endl;
            }
        } 
        else if (choix == 3) {
            bibliotheque.afficherBibliotheque();
        } 
        else if (choix == 4) {
            cout << "Quitter le programme..." << endl;
        } 
        else {
            cout << "Option invalide. Veuillez essayer à nouveau." << endl;
        }

    } while (choix != 4);

    return 0;
}
