#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "<< WrongCat Default constructor called."<< std::endl;
    setType("WrongCat");
    this->brain = new Brain();
}
WrongCat::~WrongCat()
{
    std::cout << ">> WrongCat destructor called."<< std::endl;
    delete this->brain;
}
WrongCat::WrongCat(const WrongCat& copy_value)
{
    std::cout << "<< WrongCat Copy constructor called."<< std::endl;
    setType("Cat");
    this->brain = new Brain();
    *this = copy_value;
}
WrongCat& WrongCat::operator= (const WrongCat& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
        *this->brain = *value.brain;
    }
    return *this;
}

void WrongCat::setType(const std::string setV)
{
    this->_type = setV;
}
const std::string& WrongCat::getType(void) const
{
    return this->_type;
}

void WrongCat::makeSound(void) const
{
    std::cout<< "Wrong Miyav la."<< std::endl;
}

Brain *WrongCat::getBrainWrongCat(void) const
{
    return this->brain;
}