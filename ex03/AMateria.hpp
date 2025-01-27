#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

// Déclaration de ICharacter pour éviter l'inclusion circulaire
class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    // Constructeur et destructeur
    AMateria() : type("default") {}
    AMateria(std::string const & type) : type(type) {}
    virtual ~AMateria() {};

    // Méthodes purement abstraites
    virtual AMateria* clone() const = 0; // Cloner la Materia
    virtual void use(ICharacter& target) = 0; // Utiliser la Materia sur un personnage
    std::string const & getType() const { return this->type; }
};

#endif // AMATERIA_HPP
