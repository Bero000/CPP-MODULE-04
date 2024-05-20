#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string name);
        virtual ~Animal();
        Animal(const Animal& copy_value);
        Animal& operator= (const Animal& value);

        void setType(const std::string type);
        const std::string& getType(void) const;

        virtual void makeSound(void) const;
};

#endif