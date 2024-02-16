#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("mete");
    a.attack("boo");
    a.takeDamage(5);
    a.attack("boo");
    a.beRepaired(1);
    a.guardGate();

}