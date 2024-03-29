#ifndef __CLAPTRAP_HPP
# define __CLAPTRAP_HPP

#include <iostream>

#define HIT_POINTS 10
#define ENERGY_POINTS 10
#define ATTACK_DAMAGE 0

class ClapTrap{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
    
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void statusConfirm();

    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};
#endif