#ifndef __SCAVTRAP_HPP
# define __SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define S_HIT_POINTS 100
#define S_ENERGY_POINTS 50
#define S_ATTACK_DAMAGE 20

class ScavTrap: public ClapTrap{
    public:
        ScavTrap(); 
        ScavTrap(std::string name); 
        // ~ScavTrap();
        virtual ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& other);

    public:
        void attack(const std::string& target); //隠蔽で作成するとき
        // virtual void attack_message(const std::string& target); //オーバーライドで作成する時(publicメンバ関数を仮想関数にするのは避けるべきなので、派生クラスで変更したい機能だけをvirtualにする)
        void guardGate();
};

#endif