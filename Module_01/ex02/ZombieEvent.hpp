#ifndef	ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string Type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string string);
		Zombie *newZombie(std::string name);
		void	randomChump(void);
};

#endif
