#include "Cat.hpp"
#include <cstdio>


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat " << type << " has been created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat " << type << " has been copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assignment operator called for " << type << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat " << type << " has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}