#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& copy_value);
        WrongAnimal& operator= (const WrongAnimal& value);

        void setType(const std::string type);
        const std::string& getType(void) const;

        void makeSound(void) const;
};

#endif