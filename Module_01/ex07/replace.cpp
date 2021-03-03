#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	check(char **argv)
{
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty string" << std::endl;
		return (1);
	}
	return (0);
}

int	replace(char **argv)
{
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream file(argv[1]);
	std::string text;
	std::ostringstream tmp;
	int i;

	std::string filename = (std::string)argv[1] + ".replace";
	std::ofstream newfile(filename);
	tmp << file.rdbuf();
	text = tmp.str();
	i = 0;
	while (i < text.size())
	{
		std::string tmp2 = text.substr(i);
		if (!(tmp2.find(s1)))
		{
			i += s1.size() - 1;
			newfile << s2;
		}
		else
			newfile << text[i];
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "How to use Replace : \n./replace \nfile \nword \n change by 'lol'" << std::endl;
	else
	{
		if (check(argv) == 1)
			return (0);
		else
			replace(argv);
		std::cout << "Correct entry" << std::endl;
	}
	return (0);
}
