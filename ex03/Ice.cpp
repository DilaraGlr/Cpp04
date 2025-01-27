#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria(src) {}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & src)
{
    if (this != &src)
    {
        AMateria::operator=(src); // Appel à l'opérateur d'affectation de la classe de base
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

