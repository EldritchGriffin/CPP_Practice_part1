#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_firstname(std::string firstname);
        void set_lastname(std::string firstname);
        void set_nickname(std::string firstname);
        void set_phone_number(std::string firstname);
        void set_darkest_secret(std::string firstname);
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
        void print_details();
        void empty_attr();
};

#endif