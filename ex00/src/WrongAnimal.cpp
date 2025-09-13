#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("Unknow WrongAnimal") {
    std::cout << "WrongAnimal Default constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "WrongAnimal Copy constructor called" << std::endl; 
    *this = other;
}

std::string WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Generic sound emitting..." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
 
WrongAnimal::~WrongAnimal(){
     std::cout << "WrongAnimal " <<  type << " has been destroyed!" << std::endl;  
 }

 