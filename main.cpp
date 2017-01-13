/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "election.hh"
#include "partie.hh"
#include "electeur.hh"
#include "presse.hh"
#include "region.hh"
#include "Aleatoire.hh"

using namespace std;

int main(void)
{
    string reponse;
    int valeur;

    /* Aléatoire */
    std::srand(std::time(0)); // initialisation de rand

	/*Instanciation d'une élection */
    Election *election = new Election("Presidencielle");
   /*Instanciation d'un electeur */
	Electeur *vous = new Electeur();
	/*Instanciation d'une presse */
    Presse *presse = new Presse();
	
	/*Instanciation des parties */
    Partie *partie1 = new Partie("Les Républicains", "Plus fort ensemble", "Droite");
    Partie *partie2 = new Partie("PS", "Le changement c'est maintenant", "Gauche");
	
	/*Remplissage de la liste de candidats */
    vector<Candidat *> listeCandidat;
    listeCandidat.push_back(new Candidat("Fillon", "Francois",62, partie1));
    listeCandidat.push_back(new Candidat("Valls", "Manuel",54, partie2));
    listeCandidat.push_back(new Candidat("LePen", "Marine",48, partie1));

	/*Instanciation des regions*/
    map<string, Region *> listeRegion;
    map<string, Region *>::iterator region;
    listeRegion["IDF"] = new Region("IDF", 257);
    listeRegion["Aquitaine"]  = new Region("Aquitaine", 3564);
    listeRegion["Centre"] = new Region("Centre", 483);

	/*Ajouts des candidats et régions à l'election*/
    election->ajouter_regions(listeRegion);
    election->ajouter_candidats(listeCandidat);

	
    for(int i=0; i<Election::NBTour; i++)
    {
        cout << "Voici la liste des candidats pour cette election : " << endl;
        cout << endl;
        cout << "\t Tour " << i+1 << endl << endl;
        election->presenterCandidats();

        /* Information sur l'electeur */
        std::cout <<"Entrer votre nom: ";
        std::cin >> reponse;
        vous->setNom(reponse);
        std::cout <<"Entrer votre prenom: ";
        std::cin >> reponse;
        vous->setPrenom(reponse);
        std::cout <<"Entrer votre age: ";
        std::cin >> valeur;
        vous->setAge(valeur);
        std::cout <<"Entrer votre id: ";
        std::cin >> valeur;
        vous->setID(valeur);
		
		/* Structure de vérification de la région saisi */
		
        do
        {
            cout << "Quel est le nom de votre region de residence ? (IDF, Centre, Aquitaine) " << endl;
            cin >> reponse;
            // si end -> Objet 'region' introuvable dans la liste
        }
        while(listeRegion.find(reponse) == listeRegion.end());

        /* Lancement du vote de l'utilisateur */
        cout << "--- Vote ---" << endl;

		/* Structure de vérification du nom du candidat saisi */
        do
        {
            cout << "Pour qui voulez-vous votez? (Entrer le nom du candidat) " << endl;
            cin >> reponse;
        }
        while(not election->vote(reponse));

        cout << endl << "A voter!" << endl << endl;

    }
            /* Lancement du vote et résultats */
        presse->influencer(election);
        std::cout<<"Le candidat elu est : "<< endl;
        election->getElu().afficher();
        std::cout<< endl;
        election->getElu().diriger();

    return 0;
}



