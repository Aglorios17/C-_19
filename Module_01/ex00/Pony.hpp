#ifndef	PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
	private:
		std::string P_Name;
		std::string P_Color;
	public:
		Pony(std::string Name, std::string Color);
		~Pony();
		void	show(void);
};

void	ponyOnTheStack();
void	pomyOnTheHeap();

#endif
