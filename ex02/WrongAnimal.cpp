#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal " << type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &name) : type(name)
{
    std::cout << "WrongAnimal " << type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "WrongAnimal " << type << " has been created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal " << type << " has been destroyed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongAnimal assignment operator called for " << type << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}