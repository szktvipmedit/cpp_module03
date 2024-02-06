#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    std::cout << "FragTrap: Default constructor called" << std::endl;
    hitPoints = F_HIT_POINTS;
    energyPoints = F_ENERGY_POINTS;
    attackDamage = F_ATTACK_DAMAGE;
}

FragTrap::FragTrap(std::string aName): ClapTrap(aName){
    std::cout << "FragTrap: string argument constructor called" << std::endl;
    hitPoints = F_HIT_POINTS;
    energyPoints = F_ENERGY_POINTS;
    attackDamage = F_ATTACK_DAMAGE;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    if(this == &other)
        return (*this);
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target){
    if(hitPoints > 0 && energyPoints > 0){
        std::cout << "FragTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
        energyPoints--;
    }else
        std::cout << "I can't take action because I don't have any points." << std::endl;
}

// //オーバーライドするとき(publicメンバ関数をvirtualにするのは避けるべきなので必要な部分のみをprotected指定子にしてvirtualにする)
// void FragTrap::attack_message(const std::string& target){
//     std::cout << "FragTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
// }

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap: Let's high five!" <<std::endl;
}
