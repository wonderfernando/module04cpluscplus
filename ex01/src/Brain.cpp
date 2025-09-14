#include "Brain.hpp"


Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl; 
}

Brain::Brain(const Brain &other){
    std::cout << "Brain Copy constructor called" << std::endl; 
    *this = other;
}

Brain &Brain::operator=(const Brain &other){
    std::cout << "Brain Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
   for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return *this;
}
 
Brain::~Brain(){
     std::cout << "Brain has been destroyed!" << std::endl;  
 }

 