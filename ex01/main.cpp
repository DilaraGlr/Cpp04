#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
		animals[i]->getBrain()->setIdea(0, "ZZ");
		std::cout << "Idea: " << animals[i]->getBrain()->getIdeas()[0] << std::endl << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return (0);
}