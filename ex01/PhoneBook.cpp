#include "PhoneBook.hpp"

void    PhoneBook::setContact(Contact value)
{
    this->contacts[this->index - 1] = value;
}
void    PhoneBook::setIndex(int value)
{
    this->index = value;
}
void    PhoneBook::setSize(int value)
{
    this->size = value;
}

Contact  PhoneBook::getContact(int index)
{
    return(this->contacts[index % 8]);
}
int     PhoneBook::getIndex()
{
    return (this->index);
}

int     PhoneBook::getSize()
{
    return (this->size);
}

void    put_attribute(std::string str)
{
    int i;

    i = 0;
    if (str.length() >= 10)
    {
        std::cout << str.substr(0,9);
        std::cout << ".";
    }
    else
    {
        while(i < 10 - str.length())
        {
            std::cout << " ";
            i++;
        }
        std::cout << str;
    }
}
void    PhoneBook::display_phonebook()
{
    int i;
    int size;

    i = 0;
    if(this->size > 8)
        size = 8;
    else
        size = this->size - 1;
	// std::cout <<  "+----------+----------+----------+----------+"<< std::endl;
	std::cout <<  "|     index|first name| last name|  nickname|"<< std::endl;
	// std::cout <<  "+----------+----------+----------+----------+"<< std::endl;
    while(i < size)
    {
        std::cout <<  "|         ";
        std::cout <<  i + 1;
        std::cout <<  "|";
        put_attribute(this->contacts[i].getFirstname());
        std::cout <<  "|";
        put_attribute(this->contacts[i].getLastname());
        std::cout <<  "|";
        put_attribute(this->contacts[i].getNickname());
        std::cout <<  "|" << std::endl;
        i++;
    }
}