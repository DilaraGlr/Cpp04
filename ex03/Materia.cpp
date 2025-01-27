#include "Materia.hpp"
#include "ICharacter.hpp" // Inclus pour utiliser ICharacter dans la méthode use

// Constructeur
Materia::Materia() : AMateria("Materia") {}

// Constructeur avec un type spécifique
Materia::Materia(std::string const & type) : AMateria(type) {}

// Constructeur de copie
Materia::Materia(Materia const & src) : AMateria(src.type) {}

// Destructeur
Materia::~Materia() {}

// Opérateur d'affectation
Materia & Materia::operator=(Materia const & src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

// Clone la materia (renvoie un pointeur vers un nouvel objet de même type)
AMateria* Materia::clone() const
{
    return new Materia(*this);
}

// Utilise la materia sur un personnage
void Materia::use(ICharacter& target)
{
    // Ici tu définis ce que la materia fait sur le personnage cible.
    std::cout << "Using " << this->type << " on " << target.getName() << std::endl;
}
