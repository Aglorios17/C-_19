#include "phonebook.h"
#include <stdbool.h>

Phonebook::Phonebook()
{
	this->amount = 0;
}

Phonebook::~Phonebook()
{
}

int main()
{
	std::string str;
	Phonebook phonebook;
	int i = 0;
	int a;
	bool bcl = true;
	while (bcl)
	{
		std::cout << ">>";
		std::cin >> str;
		if (str.compare("exit") == 0)
		{
			std::cout << "STOP PHONEBOOK\n";
			return (0);
		}
		else if (str.compare("add") == 0)
		{
		//	a = 0;
		//	while (true)
		//	{
				std::cout << "ok\n";
				std::cout << ">>";
				std::cin >> str;
		//	}
		}
		i++;

	}
}
