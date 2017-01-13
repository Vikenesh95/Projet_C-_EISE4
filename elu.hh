/* COUNDJIDAPADAME Vikenesh - PANCHALINGAM Niverthan - EISE4 - PROJET_C++ */

#ifndef ELU_H
#define ELU_H

#include <iostream>

#include "candidat.hh"

/* Classe abstraite Elu héritant de Candidat */
class Elu : public Candidat
{
public:
    Elu() {}
/* Fonction virtuel rendant la classe abstraite */
    virtual ~Elu() {}
    void diriger(void);
/*Redéfinition de l'opérateur = */
Elu& operator =( const Candidat* cand ) {
    _nom = cand->get_nom();
    _prenom = cand->get_prenom();
    _age = cand->get_age();
    return *this;
}
};

#endif // ELU_H
