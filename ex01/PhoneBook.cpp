#include "PhoneBook.hpp"

void    printContact(Contact contacts[])
{
    int i = 0;
    while (i < 8)
    {
        std::cout << "\nContact [" << i << "]" << std::endl;
        std::cout << "First name     : " << contacts[i].getFirstname() << std::endl;
        std::cout << "Last name      : " << contacts[i].getLastname() << std::endl;
        std::cout << "Phone number   : " << contacts[i].getPhonenumber() << std::endl;
        std::cout << "Nickname       : " << contacts[i].getNickname() << std::endl;
        std::cout << "Darkest secret : " << contacts[i].getDarkestsecret() << std::endl;
        i++;
    }
}

PhoneBook:: PhoneBook()
{
    counter = 0;
}


std::string get_contact_info(std::string msg)
{
    std::cout << msg;
    std::string str;
    std::getline(std::cin, str);
    return (str);
}

void PhoneBook::add_contact()
{
    Contact con;

    con.setFirstname(get_contact_info("first name :"));
    con.setLastname(get_contact_info("last name :"));
    con.setNickname(get_contact_info("nickname :"));
    con.setPhonenumber(get_contact_info("phone number :"));
    con.setDarkestsecret(get_contact_info("darkest secret :"));
    contacts[counter % 8] = con;
    printContact (contacts);
    counter++;
}
