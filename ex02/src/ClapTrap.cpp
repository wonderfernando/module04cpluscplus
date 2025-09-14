#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(std::string nm) : name(nm), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl; 
} 

void ClapTrap::attack(const std::string &target)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " cant attack. Not enough hit points!" << std::endl;
        return;
    }
     if (energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't attack. Not enough energy points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int damage_point = amount >= hit_points ? hit_points : amount;
    std::cout << "ClapTrap " << name << " takes " << damage_point << " points of damage!" << std::endl;
    hit_points-=damage_point;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't be repaired. Not enough hit points!" << std::endl;
        return;
    }
     if (energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't be repaired. Not enough energy points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
    hit_points+=amount;
} 

ClapTrap::ClapTrap(const ClapTrap &other){
    std::cout << "Copy constructor called" << std::endl; 
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    std::cout << "Copy assignment operator called" << std::endl;  
    if (this == &other)
        return *this;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_damage = other.attack_damage;
    return *this;
}
int ClapTrap::getHitPoints() const { return (this->hit_points); }
int ClapTrap::getEnergyPoints() const { return (this->energy_points); }
int ClapTrap::getAttackDamage() const { return (this->attack_damage); }

ClapTrap::~ClapTrap(){
     std::cout << "ClapTrap " <<  name << " has been destroyed!" << std::endl;  
 }

 