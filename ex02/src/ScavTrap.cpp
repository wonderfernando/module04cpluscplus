#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl; 
}

ScavTrap::ScavTrap(std::string nm) {
    name = nm;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl; 
}

void ScavTrap::attack(const std::string &target)
{
    if (hit_points == 0)
    {
        std::cout << "ScavTrap " << name << " cant attack. Not enough hit points!" << std::endl;
        return;
    }
     if (energy_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't attack. Not enough energy points!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}

ScavTrap::ScavTrap(const ScavTrap &other){
    std::cout << "ScavTrap Copy constructor called" << std::endl; 
    *this = other;
}
 ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_damage = other.attack_damage;
    return *this;
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

 
ScavTrap::~ScavTrap(){
     std::cout << "ScavTrap " <<  name << " has been destroyed!" << std::endl;  
 }

 