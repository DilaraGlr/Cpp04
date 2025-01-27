#include "Character.hpp"

// Constructeur par défaut
Character::Character(std::string const & name) : name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

// Constructeur par copie
Character::Character(Character const & src)
{
    *this = src; // Utilise l'opérateur d'affectation
}

// Destructeur
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
    }
}

// Opérateur d'affectation
Character & Character::operator=(Character const & src)
{
    if (this != &src)
    {
        // Libérer l'inventaire actuel
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i] != NULL)
            {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
        }

        // Copier les données
        this->name = src.name;

        for (int i = 0; i < 4; i++)
        {
            if (src.inventory[i] != NULL)
            {
                this->inventory[i] = src.inventory[i]->clone(); // Clone pour une copie profonde
            }
            else
            {
                this->inventory[i] = NULL;
            }
        }
    }
    return *this;
}

// Obtenir le nom
std::string const & Character::getName() const
{
    return this->name;
}

// Équiper une Materia
void Character::equip(AMateria* m)
{
    if (m == NULL)
        return; // Ne rien faire si le pointeur est nul

    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return;
        }
    }
}

// Déséquiper une Materia
void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}


// Utiliser une Materia
void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
}

