#include "Harl.hpp"


void    Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl <<"I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl <<" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl <<" I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERRROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::unsatisfied(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::complain(std::string  level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(i < 4)
    {
        if(level == levels[i])
            break;
        i++;
    }
    switch(i)
    {
        case 0:
            this->debug();
            std::cout << std::endl;
        case 1:
            this->info();
            std::cout << std::endl;
        case 2:
            this->warning();
            std::cout << std::endl;
        case 3:
            this->error();
            std::cout << std::endl;
            break;
        default:
            this->unsatisfied();
    }
    return ;
}