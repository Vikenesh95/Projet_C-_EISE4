/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_PRESSE
#define DEF_PRESSE

#include <iostream>
#include <string>
#include <vector>

#include "election.hh"
#include "Aleatoire.hh"

/*Classe Presse influençant le vote aleatoire*/
class Presse
{
public:
    Presse() : _nom_media("non définie") {}
    Presse(std::string nom_media) : _nom_media(nom_media) {}
    void influencer(Election *elect);

private:
    std::string _nom_media;
};

#endif
