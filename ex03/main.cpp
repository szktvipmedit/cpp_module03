#include "DiamondTrap.hpp"

#define SEPARATOR std::cout << "\033[33m" <<"--------------------------------------------------------"<< "\033[0m" << std::endl;

void test_item(const std::string item){
    if(item == "")
        return ;
    SEPARATOR
    std::cout << "|  " <<item << std::endl;
    SEPARATOR
}

int main(){
    test_item("default constructor");
    DiamondTrap noName;
    noName.statusConfirm();
    noName.whoAmI();

    test_item("create instance");
    DiamondTrap no1 = DiamondTrap("No.1");
    DiamondTrap no2 = DiamondTrap("No.2");

    test_item("No.1 attack()");
    no1.attack("No.2");
    test_item("No.2 takeDamage()");
    no2.takeDamage (D_ATTACK_DAMAGE);

    test_item("status No.1 and No.2");
    no1.statusConfirm();
    no2.statusConfirm();

    test_item("No.2 beRepaired");
    no2.beRepaired (D_ATTACK_DAMAGE);
    test_item("status No.2");
    no2.statusConfirm();

    test_item("whoAmI()");
    no1.whoAmI();

    test_item("copy constructor");
    DiamondTrap cp_no1 = no1;
    no1.statusConfirm();
    cp_no1.statusConfirm();

    // FragTrap *ft = new FragTrap("Taro");
    // ft->attack("No.1");
    // ft->ClapTrap::attack("No.1"); //オーバーロードした時にはインスタンスの変数の型に依存する
    // ft->highFivesGuys();
    // delete ft;

    // //destructorにvirtualがないと派生クラスのdestructorが呼ばれないケース
    // std::cout << std::endl;
    // ClapTrap *ct = new FragTrap("Jiro");
    // delete ct;
}