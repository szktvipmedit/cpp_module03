#include "ClapTrap.hpp"

#define SEPARATOR std::cout << "\033[33m" <<"----------------------------------------------"<< "\033[0m" << std::endl;

void test_item(const std::string item){
    if(item == "")
        return ;
    SEPARATOR
    std::cout << "|  " <<item << std::endl;
    SEPARATOR
}

int main(){
    test_item("Default constructor");
    ClapTrap noName;
    noName.statusConfirm();

    test_item("Create Instance");
    ClapTrap claptrap1 = ClapTrap("No.1");
    ClapTrap claptrap2 = ClapTrap("No.2");
    
    test_item("attack");
    claptrap1.attack("No.2");
    claptrap2.takeDamage(ATTACK_DAMAGE);

    test_item("confirm status No.1");
    claptrap1.statusConfirm();
    test_item("confirm status No.2");
    claptrap2.statusConfirm();
    
    test_item("repaire No.2");
    claptrap2.beRepaired(0);
    test_item("confirm status No.2");
    claptrap2.statusConfirm();

    test_item("Attack without energy points");
    for(int i=0;i<10;i++){
        claptrap1.attack("No.2");
    }
    test_item("confirm status No.1");
    claptrap1.statusConfirm();

    test_item("repair without energy points");
    claptrap1.beRepaired(ATTACK_DAMAGE);
    // test_item("Attack without hit points");
    // for(int i;i<10;i++){
    //     claptrap1.attack("No.2");
    // } 

    test_item("test operator=");
    ClapTrap cp_claptrap1 = claptrap1;
    test_item("confirm status No.1");
    cp_claptrap1.statusConfirm();

    test_item("");
    test_item("");
    
}