#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "<< Brain Default constructor called."<< std::endl;
    setIdea("should be water!");
}
Brain::~Brain()
{
    std::cout<< ">> Brain Destructor called."<< std::endl;
}
Brain::Brain(const Brain& copy_value)
{
    std::cout<< "<< Brain Copy constructor called."<< std::endl;
    *this = copy_value;
}
Brain& Brain::operator= (const Brain& value)
{
    std::cout<< "Copy Assigment operator called."<< std::endl;
    if (this != &value)
    {
        for (unsigned int i = 0; i < value.idea->length(); i++)
            this->idea[i] = value.idea[i];
    }
    return *this;
}

void Brain::setIdea(const std::string setV)
{
    for (int i = 0; i < 100; i++)
        this->idea[i] = setV;
}