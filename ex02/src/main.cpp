#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
   // Animal a;           // ❌ ERRO: classe abstrata
    Animal* d = new Dog();  // ✅ funciona
    Animal* c = new Cat();  // ✅ funciona

    d->makeSound();  // "Woof"
    c->makeSound();  // "Meow"

    delete d;
    delete c;
    return 0;
}
