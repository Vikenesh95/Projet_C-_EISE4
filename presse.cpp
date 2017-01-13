/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#include "presse.hh"

/*Methode qui affecte à la cote de popularite des candidats une variable aleatoire*/

void Presse::influencer(Election *elect)
{
    std::vector<Candidat *> liste = elect->getCandidat();
    std::vector<Candidat *>::iterator it;
/* Parcourt de la liste et modification du champ cote_de_popularite */
    for(it=liste.begin(); it != liste.end(); it++)
    {
        (*it)->setPopularite(aleatoire(0, POPULARITE_MAX));
    }
}
