#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string idea[100];
        Brain();
        ~Brain();
        Brain(const Brain& copy_value);
        Brain& operator= (const Brain& value);

        void setIdea(const std::string setV);
};

#endif