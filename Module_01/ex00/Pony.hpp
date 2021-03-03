#ifndef	PONY_H
# define PONY_H

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
	private:
		std::string Name;
		std::string Color;
		std::string Height;
	public:
		Pony(std::string Name, std::color Color, std::string Height);
		~Pony();
		void	show();
}

void	ponyOnTheStack();
void	pomyOnTheHeap();
