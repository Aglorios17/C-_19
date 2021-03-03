#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private:
		std::string Name;
		std::string Type;
	public:
		Zombie();
		Zombie(std::string Zname, std::string Ztype);
		~Zombie();
		void	announce(void);
};

#endif

