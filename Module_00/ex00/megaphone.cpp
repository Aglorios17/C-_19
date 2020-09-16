#include <cctype>
#include <cstring>
#include <iostream>
#include <cstdio>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	char *str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i] != NULL)
		{
			str = argv[i];
			for (int a = 0; a < (int)strlen(argv[i]); a++)
			{
				str[j] = toupper(argv[i][j]);
				j++;
			}
			std::cout << str;
			j = 0;
			i++;
		}
		std::cout << "\n";

	}
	return (0);
}
