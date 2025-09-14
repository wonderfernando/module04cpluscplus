# ifndef WrongWrongAnimal_HPP
    # define WrongWrongAnimal_HPP
#include <iostream>
class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;

    protected:
       std::string type;
};

# endif 