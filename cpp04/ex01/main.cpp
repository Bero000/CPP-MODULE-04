#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
   const Animal* j = new Dog();
   const Animal* i = new Cat();

   std::cout << j->getType() << std::endl;
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   std::cout << i->getType() << std::endl;
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   j->makeSound();
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   i->makeSound();
   std::cout <<""<< std::endl;


   Cat a;
   Dog b;
   WrongCat c;
   WrongAnimal *d = new WrongCat();
   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   for (int i = 0; i < 5; i++)
   {
       std::cout << "-- | Cat " << a.getBrainCat()->idea[5]<<std::endl;
       std::cout << "** |Dog " << b.getBrainDog()->idea[5]<<std::endl;
   }
   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   c.makeSound();
    std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   d->makeSound();
   std::cout <<""<< std::endl;
   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   for (int i = 0; i < 5; i++)
   {
       std::cout << "-- | WrongCat " << c.getBrainWrongCat()->idea[5]<<std::endl;
   }
   std::cout <<""<< std::endl;
   std::cout << "----------------------------------"<<std::endl;
   delete j;
   delete i;
   delete d;
   return 0;
}
