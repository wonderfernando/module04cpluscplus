#include "Dog.hpp"


Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl; 
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog Copy constructor called" << std::endl; 
    type = other.type;
    brain = new Brain(*other.brain);
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
    delete brain;
    brain = new Brain(*other.brain);
    return *this;
}
 
Dog::~Dog(){
    delete brain;
    std::cout << "Dog " <<  type << " has been destroyed!" << std::endl;  
 }

 