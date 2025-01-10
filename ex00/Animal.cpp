#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal " << type << " has been created" << std::endl;
}

Animal::Animal(const std::string &name): type(name)
{
    std::cout << "Animal " << type << " has been created" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal " << type << " has been created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal " << type << " has been destroyed" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Animal assignment operator called for " << type << std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}