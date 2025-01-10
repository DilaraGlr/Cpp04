#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat " << type << " has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat " << type << " has been created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongCat assignment operator called for " << type << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat " << type << " has been destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}