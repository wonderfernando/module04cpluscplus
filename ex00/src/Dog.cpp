#include "Dog.hpp"


Dog::Dog() {
    type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl; 
}

Dog::Dog(const Dog &other){
    std::cout << "Dog Copy constructor called" << std::endl; 
    *this = other;
}

void Dog::makeSound() const
{
    std::cout << "Uau Uau..." << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    std::cout << "Dog Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
 
Dog::~Dog(){
     std::cout << "Dog " <<  type << " has been destroyed!" << std::endl;  
 }

 