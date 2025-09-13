#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
 

{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); 
    cat->makeSound();
    meta->makeSound();

    delete cat;
    delete dog;
    delete meta;
}

{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();
    const WrongCat* catSound= new WrongCat();
    meta->makeSound();
    cat->makeSound();
    catSound->makeSound(); 
    delete meta;
    delete cat;
    delete catSound;
}

return 0;

}
