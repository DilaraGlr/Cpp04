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

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Brain assignment operator called" << std::endl;
    return *this;
}

void Brain::setIdea(const std::string &idea, int index)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return ideas[index];
}
