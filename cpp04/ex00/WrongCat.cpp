#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "<< WrongCat Default constructor called."<< std::endl;
    setType("WrongCat");
}
WrongCat::~WrongCat()
{
    std::cout << ">> WrongCat destructor called."<< std::endl;
}
WrongCat::WrongCat(const WrongCat& copy_value)
{
    *this = copy_value;
}
WrongCat& WrongCat::operator= (const WrongCat& value)
{
    std::cout<< "Copy assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
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