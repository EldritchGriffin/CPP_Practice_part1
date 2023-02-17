#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}
void Contact::set_lastname(std::string lastname)
{
    this->lastname = lastname;
}
void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
void Contact::print_details()
{
    std::cout << "firstname : " << this->firstname << std::endl;
    std::cout << "lastname : " << this->lastname << std::endl;
    std::cout << "nickname : " << this->nickname << std::endl;
    std::cout << "phone_number : " << this->phone_number << std::endl;
    std::cout << "darkest_secret : " << this->darkest_secret << std::endl;
}
void Contact::empty_attr()
{
    this->firstname = "";
    this->lastname = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}

std::string Contact::get_firstname()
{
    return (this->firstname);
}
std::string Contact::get_lastname()
{
    return (this->lastname);
}
std::string Contact::get_nickname()
{
    return (this->nickname);
}
std::string Contact::get_phone_number()
{
    return (this->phone_number);
}
std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}