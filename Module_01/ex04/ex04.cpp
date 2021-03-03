#include <string>
#include <iostream>

int	main(void)
{
    std::string     str = "HI THIS IS BRAIN";

    std::string     *ptr = &str;
    std::string     &ref = str;

    std::cout << "Pointer    : " << *ptr << std::endl;
    std::cout << "Reference  : " << ref << std::endl;
	ref = "lol";
    std::cout << "pointer after change ref : " << ref << std::endl;
    std::cout << "Reference after change ref  : " << str << std::endl;
    return (0);
}

