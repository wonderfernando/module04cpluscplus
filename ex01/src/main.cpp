#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
     const int N = 4;   // tamanho do array (2 Dogs e 2 Cats)
    Animal* animals[N];

    // Criar os animais
   for (int i = 0; i < N; i++) {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Sons ---" << std::endl;
    for (int i = 0; i < N; i++) {
        animals[i]->makeSound();
    }
 
    std::cout << "\n--- Deletando ---" << std::endl;
    for (int i = 0; i < N; i++) {
        delete animals[i];   
    }
 

    return 0;
}
