#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdio>

class Cat : public Animal, public Brain
{
    private:
        Brain *brain;
        
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();
        
        virtual void makeSound() const;
        Brain *getBrain() const;
};

#endif