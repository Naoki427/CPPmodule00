#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
private:
    Contact contacts[8];
    int     index;

public:
    // PhoneBook();
    // ~PhoneBook();
    void    setContact(Contact value);
    void    setIndex(int value);
    Contact getContact(int index);
    int     getIndex();
    void    display_phonebook();
};

#endif