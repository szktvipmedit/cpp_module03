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
        // ~ClapTrap();
        virtual ~ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
    
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void statusConfirm();

    //scavtrapをオーバーライドで作成するとき(public virtualを避けるために派生クラスで変えたい場所を別の関数に分けてそれを仮想関数として扱う)
    // protected:
    //     virtual void attack_message(const std::string& target);

    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

#endif