#include <iostream>
#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void) : numbercontacts(0)
{
  return ;
}

Phonebook::~Phonebook(void)
{
  return ;
}

std::string getInput(const std::string &prompt)
{
	std::string input;
	do
	{
		std::cout << prompt;
		std::getline(std::cin,input);
		if(input.empty())
			std::cout << "This field cannot be empty. Try again." << std::endl;
	}while(input.empty());
	return input;
}

void Phonebook::addContact()
{
	std::string firstName = getInput("First Name: ");
	std::string lastName = getInput("Last Name: ");
	std::string nickName = getInput("Nick Name: ");
	std::string phoneNumber = getInput("Phone Number: ");
	std::string darkestSecret = getInput("Darkest Secret: ");
	
	contacts[numbercontacts].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	numbercontacts = (numbercontacts + 1) % 8;

	std::cout << "Contact added succesfully!" <<std::endl;
}
