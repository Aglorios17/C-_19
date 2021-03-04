#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
    private:
        std::string    address;

    public:
        Brain(void);
        std::string identify(void);
};

#endif
