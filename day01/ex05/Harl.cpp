#include "Harl.hpp"


void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string  level)
{
    int i = 0;
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void    (Harl::*complainptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while(i < 4)
    {
        if(level == levels[i])
            break;
        i++;
    }
    if(i == 4)
    {
        std::cout << "harl can't complain about " << level << std::endl;
        return ;
    }
    (this->*complainptr[i])();
}