#ifndef DEF_CITOYEN
#define DEF_CITOYEN

#include <iostream>
#include <string>

#include "personne.hh"
/* Classe fille Electeur héritant de Personne*/
class Electeur : public Personne
{
public:
    Electeur() {}
/*Getteurs et setteurs */
    void setNom(std::string nom) {_nom = nom;}
    void setPrenom(std::string prenom) {_prenom = prenom;}
    void setAge(int age) {_age = age;}
    void setID(int id) {_id_national = id;}

private:

    int _id_national;
};

#endif
