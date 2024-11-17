#include "PhoneBook.hpp"

static void input_str(std::string *input,std::string message)
{
    while (1)
    {
        std::cout << message;
        std::getline(std::cin,*input);
        if (!(*input).empty())
            break;
        else if (std::cin.eof())
            std::exit(0);
        std::cout << "Error: No input detected. Please try again." << std::endl;
    }
}

int main()
{
    PhoneBook phonebook;
    Contact tmp;
    std::string input;

    phonebook.setIndex(1);
    phonebook.setSize(0);
    while(1)
    {
        std::getline(std::cin,input);
        if(input == "EXIT")
            break;
        else if(input == "ADD")
        {
            input_str(&input,"first name: ");
            tmp.setFirstname(input);
            input_str(&input,"last name: ");
            tmp.setLastname(input);
            input_str(&input,"nickname: ");
            tmp.setNickname(input);
            input_str(&input,"phone number: ");
            tmp.setPhonenumber(input);
            input_str(&input,"darkest secret: ");
            tmp.setSecret(input);
            phonebook.setContact(tmp);
            std::cout << "Contact input successful!" << std::endl;
            if (phonebook.getIndex() == 8)
                phonebook.setIndex(1);
            else
                phonebook.setIndex(phonebook.getIndex() + 1);
            if(phonebook.getSize() != 8)
                phonebook.setSize(phonebook.getSize()+1);
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