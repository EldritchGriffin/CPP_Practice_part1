#include "PhoneBook.hpp"

bool    is_valid(std::string input)
{
    int i = 0;
    int num;
    while(input[i])
    {
        if(!std::isdigit(input[i]))
        {
            std::cout << "a contact's index can be digits only" << std::endl;
            return (false);
        }
        i++;
    }
    if(input.empty())
    {
        std::cout << "empty values are not allowed" << std::endl;
        return (false);
    }
    num = std::stoi(input);
    if(num < 0 || num > 7)
    {
        std::cout << "please choose a valid index" << std::endl;
        return (false);
    }
    return (true);
}



int main()
{
    PhoneBook phone;
    std::string input;
    phone.init_index();
    while(true)
    {
        std::cout << "ADD/SEARCH/EXIT" << std::endl;
        std::getline(std::cin, input, '\n');
        if(input == "ADD")
            phone.add_contact();
        else if(input == "SEARCH")
        {
            phone.print_table();
            std::cout << "Please choose a contact" << std::endl;
            std::getline(std::cin, input, '\n');
            if(is_valid(input))
                phone.print_contact(std::stoi(input));
        }
        else if(input == "EXIT")
        {
            std::cout << "The phonebook is quitting." << std::endl;
            return 0;
        }
        else
            std::cout << "please choose a valid command." << std::endl;
    }
    return 0;
}