#ifndef __FRAGTRAP_HPP
# define __FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_HIT_POINTS 100
#define F_ENERGY_POINTS 100
#define F_ATTACK_DAMAGE 30

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name); 
        // ~FragTrap();
        virtual ~FragTrap();
        // virtual void attack_message(const std::string& target); //オーバーライドで作成する時(publicメンバ関数を仮想関数にするのは避けるべきなので、派生クラスで変更したい機能だけをvirtualにする)
        FragTrap& operator=(const FragTrap& other);

    public:
        void attack(const std::string& target); //隠蔽で作成するとき
        void highFivesGuys(void);
};

#endif