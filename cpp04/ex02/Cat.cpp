#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "<< Cat Default constructor called."<< std::endl;
    setType("Cat");
    this->brain = new Brain();
}
Cat::~Cat()
{
    std::cout << ">> Cat destructor called."<< std::endl;
    delete this->brain;
}
Cat::Cat(const Cat& copy_value)
{
    std::cout << "<< Cat Copy constructor called."<< std::endl;
    setType("Cat");
    this->brain = new Brain(*copy_value.brain);
}
Cat& Cat::operator=(const Cat& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
        *this->brain = *value.brain;
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

Brain* Cat::getBrainCat(void) const
{
    return this->brain;
}
