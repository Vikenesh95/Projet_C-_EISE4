/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_CANDIDAT
#define DEF_CANDIDAT

#include <iostream>
#include <string>

#include "personne.hh"
#include "partie.hh"

#define POPULARITE_MAX 100

/* Classe Candidat héritant de Personne */
class Candidat: public Personne
{
public:
    /* Constructeur */
    Candidat() {}
    Candidat(Partie* partie) : _partie(partie) {}
    Candidat(std::string nom, std::string prenom, int age, Partie* partie)
    : Personne(nom, prenom, age), _partie(partie) {}
	/*Methode influencant la cote de popularite*/
    void setPopularite(int pop){_cote_popularite = pop;}

private:
    Partie *_partie;
    int _cote_popularite;
};

#endif
