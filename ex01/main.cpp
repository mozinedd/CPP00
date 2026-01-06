# include "PhoneBook.hpp"




int main()
{
    PhoneBook test;
    int i = 0;
    while (i < 10)
    {
        test.add_contact();
        i++;
    }
}