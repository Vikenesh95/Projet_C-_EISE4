/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#include "election.hh"

/* Methode d'affichage des candidats */

void Election::presenterCandidats(void)
{
    std::vector<Candidat *>::iterator cand;

    for(cand = _list_cand.begin(); cand != _list_cand.end(); cand++)
    {
        std::cout << "----------------------------" << std::endl;
        (*cand)->afficher();
        std::cout << "----------------------------" << std::endl << std::endl;
    }
}

/* Methode de vote aléatoire */
bool Election::vote(std::string nomCandidat)
{
    std::vector<Candidat *>::iterator it;

    for(it = _list_cand.begin(); it != _list_cand.end(); it++)
    {
        if((*it)->get_nom() == nomCandidat)
        {
            // Le candidat élu est tiré au sort
            _elu = _list_cand[aleatoire(0, _list_cand.size())];
            return true;
        }
    }

    return false;
}




