#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
private:
    Contact contacts[8];
    int     index;
    int     size;

public:
    // PhoneBook();
    // ~PhoneBook();
    void    setContact(Contact value);
    void    setIndex(int value);
    void    setSize(int value);
    Contact getContact(int index);
    int     getIndex();
    int     getSize();
    void    display_phonebook();
};

#endif