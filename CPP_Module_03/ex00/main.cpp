#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Mete");
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3 = clapTrap;

    clapTrap.attack("enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.setName("ClapTrap2");
    std::cout << clapTrap.getName() << std::endl;
    std::cout << clapTrap.getHitPoints() << std::endl;
    std::cout << clapTrap.getEnergyPoints() << std::endl;
    std::cout << clapTrap.getAttackDamage() << std::endl;
    return (0);
}