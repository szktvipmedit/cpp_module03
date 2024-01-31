#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): name(_name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout<<"Default constructor called" <<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<<"destructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage){
    std::cout<<"copy constructor called" <<std::endl;
}

void ClapTrap::operator=(const ClapTrap& other){
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << td::endl;
}

void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);