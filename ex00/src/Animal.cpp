#include "Animal.hpp"


Animal::Animal() : type("Unknow Animal") {
    std::cout << "Animal Default constructor called" << std::endl; 
}

Animal::Animal(const Animal &other){
    std::cout << "Animal Copy constructor called" << std::endl; 
    *this = other;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Generic sound emitting..." << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    std::cout << "Animal Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
 
Animal::~Animal(){
     std::cout << "Animal " <<  type << " has been destroyed!" << std::endl;  
 }

 