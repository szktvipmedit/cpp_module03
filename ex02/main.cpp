#include "FragTrap.hpp"

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
    FragTrap noName;
    noName.statusConfirm();

    test_item("Create Instance");
    FragTrap fragtrap1 = FragTrap("No.1");
    FragTrap fragtrap2 = FragTrap("No.2");
    
    test_item("attack");
    fragtrap1.attack("No.2");
    fragtrap2.takeDamage(F_ATTACK_DAMAGE);

    test_item("status No.1");
    fragtrap1.statusConfirm();

    test_item("status No.2");
    fragtrap2.statusConfirm();
    
    test_item("repaire 20 No.2");
    fragtrap2.beRepaired(F_ATTACK_DAMAGE);
    test_item("status No.2");
    fragtrap2.statusConfirm();

    test_item("guardGate No.1");
    fragtrap1.highFivesGuys();


    test_item("Attack without energy points");
    for(int i=0;i<100;i++){
        fragtrap1.attack("No.2");
        fragtrap2.takeDamage(F_ATTACK_DAMAGE);
    }

    test_item("status No.1");
    fragtrap1.statusConfirm();
    test_item("status No.2");
    fragtrap2.statusConfirm();

    test_item("Attack without hit points");
    fragtrap2.attack("No.1");

    test_item("test operator=");
    FragTrap cp_fragtrap2 = fragtrap2;
    test_item("status No.2");
    cp_fragtrap2.statusConfirm();

    // FragTrap *st = new FragTrap("Taro");
    // st->attack("No.1");
    // st->ClapTrap::attack("No.1"); //オーバーロードした時にはインスタンスの変数の型に依存する
    // st->guardGate();
    // delete st;

    // //destructorにvirtualがないと派生クラスのdestructorが呼ばれないケース
    // std::cout << std::endl;
    // ClapTrap *ct = new FragTrap("Jiro");
    // delete ct;
}