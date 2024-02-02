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

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout <<"ClapTrap " << name << " has repaired itself by " << amount << " points!" <<std::endl;
}