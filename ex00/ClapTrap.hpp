#ifndef __CLAPTRAP_HPP
# define __CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& other);
        void operator=(const ClapTrap& other);
    
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

};
#endif