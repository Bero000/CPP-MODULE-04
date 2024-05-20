#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "<< Animal default constructor called."<<std::endl;
}
Animal::Animal(std::string name)
{
    std::cout<< "<< Animal Constructor called."<< std::endl;
    this->_type = name;
}
Animal::~Animal()
{
    std::cout<< ">> Animal Destructor called."<<std::endl;
}
Animal::Animal(const Animal& copy_value)
{
    *this = copy_value;
}
Animal& Animal::operator= (const Animal& value)
{
    std::cout << "Copy assignment operator called."<< std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void Animal::setType(const std::string type) 
{
    this->_type = type;
}
const std::string& Animal::getType(void) const
{
    return this->_type;
}
