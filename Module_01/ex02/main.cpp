#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombie;
  	ZombieEvent zombie_event;

    std::cout << std::endl;
    std::cout << "New simple Zombie :" << std::endl;
    zombie = new Zombie("Frank zombie", "runner");
    zombie->announce();
    delete zombie;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "ZombieEvent.newZombie() no type :" << std::endl;
    zombie = zombie_event.newZombie("Rober zombie");
    zombie->announce();
    delete zombie;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "ZombieEvent.newZombie() type :" << std::endl;
    zombie_event.setZombieType("crawling");
    zombie = zombie_event.newZombie("Marc zombie");
    zombie->announce();
    delete zombie;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "ZombieEvent.randomChump() :" << std::endl;
    zombie_event.setZombieType("Walker");
    zombie_event.randomChump();
    std::cout << std::endl;

    return (0);
}
