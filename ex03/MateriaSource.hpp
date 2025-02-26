#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* inventory[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();

        MateriaSource & operator=(MateriaSource const & src);

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP
