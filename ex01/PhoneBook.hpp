#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int counter;
    public:
        void add_contact();
        PhoneBook();
        
};

#endif