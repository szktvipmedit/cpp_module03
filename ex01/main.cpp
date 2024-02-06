#include "ScavTrap.hpp"

#define SEPARATOR std::cout << "\033[33m" <<"--------------------------------------------------------"<< "\033[0m" << std::endl;

void test_item(const std::string item){
    if(item == "")
        return ;
    SEPARATOR
    std::cout << "|  " <<item << std::endl;
    SEPARATOR
}

int main(){
    test_item("Default constructor");
    ScavTrap noName;
    noName.statusConfirm();

    test_item("Create Instance");
    ScavTrap scavtrap1 = ScavTrap("No.1");
    ScavTrap scavtrap2 = ScavTrap("No.2");
    
    test_item("attack");
    scavtrap1.attack("No.2");
    scavtrap2.takeDamage(S_ATTACK_DAMAGE);

    test_item("status No.1");
    scavtrap1.statusConfirm();

    test_item("status No.2");
    scavtrap2.statusConfirm();
    
    test_item("repaire 20 No.2");
    scavtrap2.beRepaired(S_ATTACK_DAMAGE);
    test_item("status No.2");
    scavtrap2.statusConfirm();

    test_item("guardGate No.1");
    scavtrap1.guardGate();


    test_item("Attack without energy points");
    for(int i=0;i<50;i++){
        scavtrap1.attack("No.2");
        scavtrap2.takeDamage(S_ATTACK_DAMAGE);
    }

    test_item("status No.1");
    scavtrap1.statusConfirm();
    test_item("status No.2");
    scavtrap2.statusConfirm();

    test_item("Attack without hit points");
    scavtrap2.attack("No.1");

    test_item("test operator=");
    ScavTrap cp_scavtrap2 = scavtrap2;
    test_item("status No.2");
    cp_scavtrap2.statusConfirm();

    // ScavTrap *st = new ScavTrap("Taro");
    // st->attack("No.1");
    // st->ClapTrap::attack("No.1"); //オーバーロードした時にはインスタンスの変数の型に依存する
    // st->guardGate();
    // delete st;

    // //destructorにvirtualがないと派生クラスのdestructorが呼ばれないケース
    // std::cout << std::endl;
    // ClapTrap *ct = new ScavTrap("Jiro");
    // delete ct;
}