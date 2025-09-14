#include "Cat.hpp"


Cat::Cat() {
    type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl; 
}

Cat::Cat(const Cat &other) : Animal(other){
    std::cout << "Cat Copy constructor called" << std::endl; 
    *this = other;
}

void Cat::makeSound() const
{
    std::cout << "Miau Miau..." << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    std::cout << "Cat Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
 
Cat::~Cat(){
     std::cout << "Cat " <<  type << " has been destroyed!" << std::endl;  
 }

 