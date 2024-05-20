#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "<< WrongAnimal default constructor called."<<std::endl;
}
WrongAnimal::WrongAnimal(std::string name)
{
    std::cout<< "<< WrongAnimal Constructor called."<< std::endl;
    this->_type = name;
}
WrongAnimal::~WrongAnimal()
{
    std::cout<< ">> WrongAnimal Destructor called."<<std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy_value)
{
    *this = copy_value;
}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& value)
{
    std::cout << "Copy assignment operator called."<< std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void WrongAnimal::setType(const std::string type) 
{
    this->_type = type;
}
const std::string& WrongAnimal::getType(void) const
{
    return this->_type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "*-*-*-*-| WrongAnimal sounds |-*-*-*-*"<<std::endl;
}