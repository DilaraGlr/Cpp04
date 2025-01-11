#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[10];
    
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();

        animals[i]->makeSound();
    }

    std::cout << "\nDestroying animals...\n";

    for (int i = 0; i < 10; i++)
        delete animals[i];

    return 0;
}