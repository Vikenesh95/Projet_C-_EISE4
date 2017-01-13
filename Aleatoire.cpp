/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#include "Aleatoire.hh"

/*Methode permettant de générer un nombre aléatoire entre 2 chiffres aux choix*/
int aleatoire(int a, int b)
{
    return std::rand()%(b-a)+a;
}


