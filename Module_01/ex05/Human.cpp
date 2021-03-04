#include "Human.hpp"

Human::Human(void)
{

}

Brain Human::getBrain(void)
{
    return (brain);
}

std::string Human::identify(void)
{
    return (brain.identify());
}
