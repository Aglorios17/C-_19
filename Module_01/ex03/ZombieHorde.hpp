#ifndef	ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int			N;
		Zombie		*zombie;
		std::string Type;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce(void);
};

#endif

