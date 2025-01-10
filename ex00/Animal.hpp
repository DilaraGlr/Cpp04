#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const std::string &name);
        Animal(const Animal &other);
        ~Animal();

        Animal &operator=(const Animal &other);

        virtual void makeSound() const;
        std::string getType() const { return type; };
};

#endif