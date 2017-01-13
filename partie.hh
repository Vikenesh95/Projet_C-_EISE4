/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_PARTIE
#define DEF_PARTIE

#include <iostream>
#include <string>
/* Classe Partie associé au candidat */
class Partie
{
public:
/* Contructeur initialisant les attributs */
    Partie(std::string nom_partie, std::string devise, std::string orientation) :
        _nom_partie(nom_partie), _devise(devise), _orientation(orientation) {}

private:

    std::string _nom_partie;
    std::string _devise;
    std::string _orientation;
};

#endif
