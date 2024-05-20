#include "Dog.hpp"

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "<< Dog Default constructor called."<< std::endl;
    setType("Dog");
}
Dog::~Dog()
{
    std::cout << ">> Dog destructor called."<< std::endl;
}
Dog::Dog(const Dog& copy_value)
{
    *this = copy_value;
}
Dog& Dog::operator= (const Dog& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void Dog::setType(const std::string setV)
{
    this->_type = setV;
}
const std::string& Dog::getType(void) const
{
    return this->_type;
}


void Dog::makeSound(void) const
{
    std::cout<< "Hav Hav la."<< std::endl;
}