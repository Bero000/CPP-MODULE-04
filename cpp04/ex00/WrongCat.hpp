#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& copy_value);
        WrongCat& operator= (const WrongCat& value);

        void setType(const std::string setV);
        const std::string& getType(void) const;

        void makeSound(void) const;

};

#endif