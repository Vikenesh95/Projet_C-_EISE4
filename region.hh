/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_REGION
#define DEF_REGION

#include <iostream>
#include <string>

/* Classe Région pour désigner le lieu de vote de l'electeur*/
class Region
{
public:

/* Contructeur initialisant les attributs */
    Region(std::string nom_region, int nb_habitants) :
        _nom_region(nom_region), _nb_habitants(nb_habitants) {}

private:

    std::string _nom_region;
    int _nb_habitants;
};

#endif
