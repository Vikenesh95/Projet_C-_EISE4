/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_ELECTION
#define DEF_ELECTION

#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "candidat.hh"
#include "region.hh"
#include "elu.hh"
#include "Aleatoire.hh"

/* Classe Election contenant la liste de candidat et de régions*/
class Election
{
public:
    Election() : _poste_en_jeu("Test") {}
    Election(std::string poste_en_jeu) : _poste_en_jeu(poste_en_jeu) {}

    void ajouter_candidats(std::vector<Candidat *> listCand)
    {
        _list_cand = listCand;
    }
    void ajouter_regions(std::map<std::string, Region *> listRegion)
    {
        _list_region = listRegion;
    }

    std::vector<Candidat *> getCandidat(void) {return _list_cand;}

    void presenterCandidats(void);
    bool vote(std::string nomCandidat);
    Elu& getElu(void) {return _elu;}

    static const int NBTour = 2;

private:
    std::string _poste_en_jeu;
    std::vector<Candidat *> _list_cand;
    std::map<std::string, Region *> _list_region;
    Elu _elu;
};

#endif
