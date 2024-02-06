#ifndef __DIAMONDTRAP_HPP
# define __DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define D_HIT_POINTS 100
#define D_ENERGY_POINTS 50
#define D_ATTACK_DAMAGE 30
class DiamondTrap: public ScavTrap, public FragTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string name); 
        // ~DiamondTrap();
        virtual ~DiamondTrap();
        // virtual void attack_message(const std::string& target); //オーバーライドで作成する時(publicメンバ関数を仮想関数にするのは避けるべきなので、派生クラスで変更したい機能だけをvirtualにする)
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
    public:
        using ScavTrap::attack;
        void whoAmI();
        void statusConfirm();
    private:
        std::string name;
};

#endif