#include "WrongCat.hpp"


WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &other){
    std::cout << "WrongCat Copy constructor called" << std::endl; 
    *this = other;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Miau Miau..." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    std::cout << "WrongCat Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
 
WrongCat::~WrongCat(){
     std::cout << "WrongCat " <<  type << " has been destroyed!" << std::endl;  
 }

 