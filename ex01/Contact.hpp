#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string secret;
public:
    // Contact ();
    // ~Contact ();
    void    setFirstname(std::string value);
    void    setLastname(std::string value);
    void    setNickname(std::string value);
    void    setPhonenumber(std::string value);
    void    setSecret(std::string value);
    std::string getFirstname(); //&? const?
    std::string getLastname();
    std::string getNickname();
    std::string getPhonenumber();
    std::string getSeret();
    void	printallinfo(int i);
};



#endif