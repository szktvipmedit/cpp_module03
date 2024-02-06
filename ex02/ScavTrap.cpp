#include "ScavTrap.hpp"

/*======================================================
                Orthodox Canonical Form
======================================================*/

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout<<"ScavTrap's Default constructor called" <<std::endl;
    hitPoints = S_HIT_POINTS;
    energyPoints = S_ENERGY_POINTS;
    attackDamage = S_ATTACK_DAMAGE;
}

ScavTrap::ScavTrap(std::string aName): ClapTrap(aName){
    std::cout << "ScavTrap: string argument constructor called" << std::endl;
    hitPoints = S_HIT_POINTS;
    energyPoints = S_ENERGY_POINTS;
    attackDamage = S_ATTACK_DAMAGE;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if(this == &other)
        return (*this);
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return (*this);
}

/*======================================================
                    member functions
======================================================*/

void ScavTrap::attack(const std::string& target){
    if(hitPoints > 0 && energyPoints > 0){
        std::cout << "ScavTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
        energyPoints--;
    }else
        std::cout << "I can't take action because I don't have any points." << std::endl;
}

// //オーバーライドするとき(publicメンバ関数をvirtualにするのは避けるべきなので必要な部分のみをprotected指定子にしてvirtualにする)
// void ScavTrap::attack_message(const std::string& target){
//     std::cout << "ScavTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
// }

void ScavTrap::guardGate(){
    std::cout << "Notice: ScavTrap " << name << " is currently in gatekeeper mode" <<std::endl;
}


