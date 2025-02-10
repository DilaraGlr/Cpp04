#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog " << type << " has been created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog " << type << " has been created" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}


Dog::~Dog()
{
    std::cout << "Dog " << type << " has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

