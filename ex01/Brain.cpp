#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain has been created" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain has been created (copy constructor)" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Brain assignation operator called" << std::endl;
	*this->ideas = *rhs.ideas;
	return (*this);
}

const std::string *Brain::getIdeas(void)
{
	return (this->ideas);
}

const std::string Brain::getIdea(int idx) const
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "idx out of range" << std::endl;
		return ("");
	}
	return (this->ideas[idx]);
}

void Brain::setIdeas(const std::string *ideas)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i];
	}
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Invalid index" << std::endl;
	}
	this->ideas[index] = idea;
}
