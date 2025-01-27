#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class Materia : public AMateria
{
    public:
        // Constructeurs
        Materia();
        Materia(std::string const & type);
        Materia(Materia const & src);

        // Destructeur
        virtual ~Materia();

        // Opérateur d'affectation
        Materia & operator=(Materia const & src);

        // Implémentation des méthodes pures d'AMateria
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif // MATERIA_HPP
