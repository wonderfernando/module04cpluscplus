#include "FragTrap.hpp"

int main() {
    FragTrap f("Fraga");

    std::cout << "=== Testando ataque ===" << std::endl;
    f.attack("Joao");

    std::cout << "=== Testando high five ===" << std::endl;
    f.highFivesGuys();

    std::cout << "=== Testando cópia ===" << std::endl;
    FragTrap copia(f);

    std::cout << "=== Testando atribuição ===" << std::endl;
    FragTrap outro;
    outro = f;
     return 0;
}
