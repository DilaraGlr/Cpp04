#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat " << type << " has been created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat " << type << " has been created" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Cat assignment operator called for " << type << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat " << type << " has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}