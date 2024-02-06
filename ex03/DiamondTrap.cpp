#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), ScavTrap(), FragTrap(){
    std::cout<<"DiamondTrap: Default constructor called" <<std::endl;
    FragTrap::hitPoints = D_HIT_POINTS;
    ScavTrap::energyPoints = D_ENERGY_POINTS;
    FragTrap::attackDamage = D_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(std::string aName): ClapTrap(aName+"_clap_name"), ScavTrap(aName), FragTrap(aName), name(aName){
    std::cout<<"DiamondTrap: Default constructor called" <<std::endl;
    name = aName;
    FragTrap::hitPoints = D_HIT_POINTS;
    ScavTrap::energyPoints = D_ENERGY_POINTS;
    FragTrap::attackDamage = D_ATTACK_DAMAGE;
}

DiamondTrap::~DiamondTrap(){
    std::cout<<"DiamondTrap: destructor called" <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other.ClapTrap::name), ScavTrap(other.name), FragTrap(other.name), name(other.name){
    std::cout<<"DiamondTrap: copy constructor called" <<std::endl;
    name = other.name;
    FragTrap::hitPoints = other.FragTrap::hitPoints;
    ScavTrap::energyPoints = other.ScavTrap::energyPoints;
    FragTrap::attackDamage = other.FragTrap::attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
    if(this == &other)
        return (*this);
    ClapTrap::name = other.ClapTrap::name;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return (*this);
}


void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}


void DiamondTrap::statusConfirm(){
    std::cout << "name: " << name << std::endl;
    std::cout << "hitPoints: " << hitPoints << std::endl;
    std::cout << "energyPoints: " << energyPoints << std::endl;
    std::cout << "attackDamage: " << attackDamage << std::endl;
}