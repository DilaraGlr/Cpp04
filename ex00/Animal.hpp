#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal 
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const std::string &name);
        Animal(const Animal &other);
        virtual ~Animal();
        Animal &operator=(const Animal &other);

        virtual void makeSound() const; // Virtual for polymorphism
        std::string getType() const;
};

#endif
