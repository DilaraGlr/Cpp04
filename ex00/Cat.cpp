#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat " << type << " has been created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat " << type << " has been created" << std::endl;
   	*this = other;

}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat " << type << " has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}