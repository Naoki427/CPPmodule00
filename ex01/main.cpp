#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    Contact tmp;
    std::string input;

    phonebook.setIndex(0);
    while(1)
    {
        std::cout << ">";
        std::getline(std::cin,input);
        if(input == "EXIT")
            break;
        else if(input == "ADD")
        {
            std::cout << "first name: ";
            std::getline(std::cin,input);
            tmp.setFirstname(input);
            std::cout << "last name: ";
            std::getline(std::cin,input);
            tmp.setLastname(input);
            std::cout << "nickname: ";
            std::getline(std::cin,input);
            tmp.setNickname(input);
            std::cout << "phone number: ";
            std::getline(std::cin,input);
            tmp.setPhonenumber(input);
            std::cout << "darkest secret: ";
            std::getline(std::cin,input);
            tmp.setSecret(input);
            phonebook.setContact(tmp);
            std::cout << "Contact input successful!" << std::endl;
            phonebook.setIndex(phonebook.getIndex() + 1);
        }
        else if (input == "SEARCH")
        {
            phonebook.display_phonebook();
        }
        else if (std::cin.eof())
            break;
    }
    return (0);
}