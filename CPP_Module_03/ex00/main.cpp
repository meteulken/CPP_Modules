#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("mete");
    a.attack("boo");
    a.takeDamage(5);
    a.attack("boo");
    a.beRepaired(1);
}