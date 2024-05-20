#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy_value);
        Dog& operator= (const Dog& value);

        void setType(const std::string setV);
        const std::string& getType(void) const;

        void makeSound(void) const;
        Brain *getBrainDog(void) const;
};

#endif