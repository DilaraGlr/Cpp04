#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog " << type << " has been created" << std::endl;
		this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog " << type << " has been created" << std::endl;
		this->brain = new Brain();

}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = rhs.getType();
	this->brain->setIdeas(rhs.brain->getIdeas());
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

Brain *Dog::getBrain(void) const
{
	return this->brain;
}