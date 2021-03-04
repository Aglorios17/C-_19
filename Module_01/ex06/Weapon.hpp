#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "iostream"
# include "sstream"

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string Type);
		const std::string&	getType(void);
		void				setType(const std::string &string);
};

#endif
