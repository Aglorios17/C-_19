#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream ss;
	ss << this;
	address = ss.str();
}

std::string Brain::identify(void)
{
    return (address);
}
