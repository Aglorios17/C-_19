#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "This is ZombieEvent" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent is end" << std::endl;
}

void	ZombieEvent::setZombieType(std::string string)
{
	Type = string;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, Type);

	return (zombie);
}

void	ZombieEvent::randomChump(void)
{
	std::string names[] = {"Ronaldo", "Floki", "Ragnar", "Bjorn"};
    srand(time(0));
    Zombie randomChumped(names[rand() % 4], Type);
    randomChumped.announce();

}
