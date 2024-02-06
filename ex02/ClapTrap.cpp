#include "ClapTrap.hpp"

/*======================================================
                Orthodox Canonical Form
======================================================*/

ClapTrap::ClapTrap(): hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE){
    std::cout<<"ClapTrap's Default constructor called" <<std::endl;
}

ClapTrap::ClapTrap(std::string aName): name(aName), hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE){
    std::cout<<"ClapTrap's string argument constructor called" <<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<<"ClapTrap's destructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage){
    std::cout<<"ClapTrap's copy constructor called" <<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
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


void ClapTrap::attack(const std::string& target){
    if(hitPoints > 0 && energyPoints > 0){
        std::cout << "ClapTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
        energyPoints--;
    }else
        std::cout << "I can't take action because I don't have any points." << std::endl;
}

// scavtrapをオーバーライドで作成するとき(public virtualを避けるために派生クラスで変えたい場所を別の関数に分けてそれを仮想関数として扱う)
// void ClapTrap::attack(const std::string& target){
//     if(hitPoints > 0 && energyPoints > 0){
//         attack_message(target);
//         energyPoints--;
//     }else
//         std::cout << "I can't take action because I don't have any points." << std::endl;
// }
// void ClapTrap::attack_message(const std::string& target){
//     std::cout << "ClapTrap " << name << " attacks " <<target<< ", causing " << attackDamage <<" points of damage!" << std::endl;
// }


void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
    hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(hitPoints == HIT_POINTS){
        std::cout << name << "'s hitPoints are full" << std::endl;
        return;
    }
    if(hitPoints > 0 && energyPoints > 0){
        (unsigned int)(HIT_POINTS - hitPoints) < amount ? amount = (HIT_POINTS - hitPoints): 0;
        std::cout <<"ClapTrap " << name << " has repaired itself by " << amount << " points!" <<std::endl;
        energyPoints--;
        hitPoints += amount;
    }
    else
        std::cout << "I can't take action because I don't have any points." << std::endl;
}


/*======================================================
                test function
======================================================*/

void ClapTrap::statusConfirm(){
    std::cout << "name: " << name << std::endl;
    std::cout << "hitPoints: " << hitPoints << std::endl;
    std::cout << "energyPoints: " << energyPoints << std::endl;
    std::cout << "attackDamage: " << attackDamage << std::endl;
}

