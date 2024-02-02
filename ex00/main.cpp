#include "ClapTrap.hpp"

int main(){
    ClapTrap claptrap1 = ClapTrap("No.1");
    ClapTrap claptrap2 = ClapTrap("No.2");
    ClapTrap claptrap3 = ClapTrap("No.3");
    std::cout << std::endl;
    
    claptrap1.attack("No.2");
    claptrap2.takeDamage(0);
    std::cout << std::endl;

    claptrap2.attack("No.1");
    claptrap1.takeDamage(0);
    std::cout << std::endl;
    
    claptrap3.attack("No.1");
    claptrap1.takeDamage(0);
    std::cout << std::endl;

    claptrap1.beRepaired(5);
    std::cout << std::endl;
}