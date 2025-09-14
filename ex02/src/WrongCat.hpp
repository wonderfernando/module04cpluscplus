# ifndef WrongCat_HPP
    # define WrongCat_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
       ~WrongCat();
        void makeSound() const;

};

# endif 