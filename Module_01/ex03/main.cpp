#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	Zombie *zombie;

    std::cout << std::endl;
    std::cout << "New simple Zombie :" << std::endl;
    zombie = new Zombie("Frank zombie", "runner");
	zombie->announce();
    delete zombie;
    std::cout << std::endl;
	
    std::cout << "New Horde :" << std::endl;
	ZombieHorde s1 = ZombieHorde(5);
	s1.announce();
    return (0);
}
