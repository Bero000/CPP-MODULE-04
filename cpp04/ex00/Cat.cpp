#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "<< Cat Default constructor called."<< std::endl;
    setType("Cat");
}
Cat::~Cat()
{
    std::cout << ">> Cat destructor called."<< std::endl;
}
Cat::Cat(const Cat& copy_value)
{
    *this = copy_value;
}
Cat& Cat::operator= (const Cat& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void Cat::setType(const std::string setV)
{
    this->_type = setV;
}
const std::string& Cat::getType(void) const
{
    return this->_type;
}


void Cat::makeSound(void) const
{
    std::cout<< "Miyav la."<< std::endl;
}