#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), Brain()
{
    new Brain();
    std::cout << "Dog " << type << " has been created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog " << type << " has been created" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Dog assignment operator called for " << type << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog " << type << " has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

