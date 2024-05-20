#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& copy_value);
        Cat& operator= (const Cat& value);

        void setType(const std::string setV);
        const std::string& getType(void) const;

        void makeSound(void) const;
        Brain *getBrainCat(void) const;
};

#endif