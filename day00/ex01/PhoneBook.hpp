#include "Contact.hpp"
#include <iomanip>
#include <iostream>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
    private:
        Contact contacts[8];
        int     index;
    public:
        void    add_contact();
        void    init_index();
        void    print_contact(int i);
        void    print_table();
};

#endif