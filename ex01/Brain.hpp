#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

	void setIdeas(const std::string *ideas);
	void setIdea(int index, std::string idea);
    const std::string *getIdeas(void);
	const std::string getIdea(int i) const;
};

#endif