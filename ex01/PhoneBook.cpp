#include "PhoneBook.hpp"

void    PhoneBook::setContact(Contact value)
{
    this->contacts[this->index % 8] = value;
}
void    PhoneBook::setIndex(int value)
{
    this->index = value;
}

Contact  PhoneBook::getContact(int index)
{
    return(this->contacts[index % 8]);
}
int     PhoneBook::getIndex()
{
    return (this->index);
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

    if (this->index > 7)
        i = 8;
    else
        i = this->index;
	// std::cout <<  "+----------+----------+----------+----------+"<< std::endl;
	std::cout <<  "|     index|first name| last name|  nickname|"<< std::endl;
	// std::cout <<  "+----------+----------+----------+----------+"<< std::endl;
    while(i > 0)
    {
        std::cout <<  "|         ";
        std::cout << this->index - i;
        std::cout <<  "|";
        put_attribute(this->contacts[(index - i) % 8].getFirstname());
        std::cout <<  "|";
        put_attribute(this->contacts[(index - i) % 8].getLastname());
        std::cout <<  "|";
        put_attribute(this->contacts[(index - i) % 8].getNickname());
        std::cout <<  "|" << std::endl;
        i--;
    }
}