/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <iostream>
#include <string>

/* Classe mère Personne contenant les informations d'identité */

class Personne
{
public:

    Personne() {}
    Personne(std::string nom, std::string prenom, int age) :
        _nom(nom), _prenom(prenom), _age(age) {}

    std::string get_nom(void) const {return _nom;}
    std::string get_prenom(void) const {return _prenom;}
    int get_age(void) const {return _age;}
    void afficher(void);

protected:
    std::string _nom;
    std::string _prenom;
    int _age;
};

#endif
