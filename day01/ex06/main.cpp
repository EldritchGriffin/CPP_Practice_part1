#include "Harl.hpp"

int main(int ac, char   **av)
{
    Harl    harl;
    std::string level;
    if (ac == 2)
    {
        level = av[1];
        harl.complain(level);
    }
    else
        std::cout << "invalid program arguments" << std::endl;
    return 0;
}