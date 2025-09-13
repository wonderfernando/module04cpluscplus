# ifndef Animal_HPP
    # define Animal_HPP
#include <iostream>
class Animal {
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;

    protected:
       std::string type;
};

# endif 