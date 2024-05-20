#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "<< Dog Default constructor called."<< std::endl;
    setType("Dog");
    this->brain = new Brain();
}
Dog::~Dog()
{
    std::cout << ">> Dog destructor called."<< std::endl;
    delete this->brain;
}
Dog::Dog(const Dog& copy_value)
{
    std::cout << "<< Dog Copy constructor called."<< std::endl;
    setType("Dog");
    this->brain = new Brain(*copy_value.brain);
}
Dog& Dog::operator= (const Dog& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
        *this->brain = *value.brain;
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

Brain *Dog::getBrainDog(void) const
{
    return this->brain;
}