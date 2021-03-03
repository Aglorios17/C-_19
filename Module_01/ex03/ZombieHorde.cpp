#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	zombie = new Zombie[n];
	N = n;
	std::cout << "ZOMBIEEEEEEE are coming" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombie;
	std::cout << "ZOMBIEEEEEEE are diead" << std::endl;
}

void	ZombieHorde::announce()
{
	int i = N;
	while (i--)
		zombie[i].announce();
}
