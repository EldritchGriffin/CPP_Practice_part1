#include "PhoneBook.hpp"
#include <iomanip>

void    PhoneBook::add_contact()
{
    std::string input;
    contacts[index % 8].empty_attr();
    std::cout << "enter your contact's firstname" << std::endl;
    std::getline(std::cin, input, '\n');
    contacts[index % 8].set_firstname(input); 
    std::cout << "enter your contact's lastname" << std::endl;
    std::getline(std::cin, input, '\n');
    contacts[index % 8].set_lastname(input); 
    std::cout << "enter your contact's nickname" << std::endl;
    std::getline(std::cin, input, '\n');
    contacts[index % 8].set_nickname(input); 
    std::cout << "enter your contact's phone_number" << std::endl;
    std::getline(std::cin, input, '\n');
    contacts[index % 8].set_phone_number(input); 
    std::cout << "enter your contact's darkest_secret" << std::endl;
    std::getline(std::cin, input, '\n');
    contacts[index % 8].set_darkest_secret(input);
    index++; 
}
void    PhoneBook::init_index()
{
    index = 0;
}
void    PhoneBook::print_contact(int    i)
{
    if(i >= std::min(index, 7))
    {
        std::cout << "No such index exists in your contact list" << std::endl;
        return ;
    }
    contacts[i].print_details();
}

std::string crop_str(std::string    input)
{
    std::string res;
    if(input.size() > 9)
    {
        res = input.substr(0, 9);
        res = res.append(".");
        return (res);
    }
    return (input);

}

void    PhoneBook::print_table()
{
    int i = 0;
    std::cout << "|";
    std::cout << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::setw(10) << "FirstName";
    std::cout << "|";
    std::cout << std::setw(10) << "LastName";
    std::cout << "|";
    std::cout << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
    while(i < std::min(index, 7))
    {
        std::cout << "|";
        std::cout << std::setw(10) << i;
        std::cout << "|";
        std::cout << std::setw(10) << crop_str(contacts[i].get_firstname());
        std::cout << "|";
        std::cout << std::setw(10) << crop_str(contacts[i].get_lastname());
        std::cout << "|";
        std::cout << std::setw(10) << crop_str(contacts[i].get_nickname());
        std::cout << "|";
        std::cout << std::endl;
        i++;
    }
}