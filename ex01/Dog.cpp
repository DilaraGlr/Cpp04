#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog " << type << " has been created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog " << type << " has been copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
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

Brain *Dog::getBrain() const
{
    return brain;
}
