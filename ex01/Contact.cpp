#include "Contact.hpp"

void    Contact::setFirstname(std::string value)
{
    this->first_name = value;
}

void    Contact::setLastname(std::string value)
{
    this->last_name = value;
}

void    Contact::setNickname(std::string value)
{
    this->nick_name = value;
}
void    Contact::setPhonenumber(std::string value)
{
    this->phone_number = value;
}

void    Contact::setSecret(std::string value)
{
    this->secret = value;
}

std::string Contact::getFirstname()
{
    return (this->first_name);
}

std::string Contact::getLastname()
{
    return (this->last_name);
}

std::string Contact::getNickname()
{
    return (this->nick_name);
}

std::string Contact::getPhonenumber()
{
    return (this->phone_number);
}

std::string Contact::getSeret()
{
    return (this->secret);
}