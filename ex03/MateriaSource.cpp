#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i] != NULL)
                delete this->inventory[i];
            this->inventory[i] = src.inventory[i] ? src.inventory[i]->clone() : NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return;
        }
    }
    std::cout << "Inventory is full, can't learn more materia." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}
