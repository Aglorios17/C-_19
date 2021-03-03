#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <sstream>

class Brain
{
    private:
        std::string    address;

    public:
        void *identify(void);
};

#endif
