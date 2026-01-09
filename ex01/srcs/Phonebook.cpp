#include <iostream>
#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void) : numbercontacts(0), nextIndex(0)
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

std::string formatColumn(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0,9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

void Phonebook::addContact()
{
	std::string firstName = getInput("First Name: ");
	std::string lastName = getInput("Last Name: ");
	std::string nickName = getInput("Nick Name: ");
	std::string phoneNumber = getInput("Phone Number: ");
	std::string darkestSecret = getInput("Darkest Secret: ");
	
	contacts[numbercontacts].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret, nextIndex);
	nextIndex++;
	numbercontacts = (numbercontacts + 1) % 8;
	std::cout << "Contact added succesfully!" <<std::endl;
}

void	Phonebook::searchContacts()
{
	int	totalContacts;
	int	startIndex;

	if (nextIndex < 8)
	{
		totalContacts = nextIndex;
		startIndex = 0;
	}
	else
	{
		totalContacts = 8;
		startIndex = numbercontacts;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < totalContacts; i++)
	{
		int	idx = (startIndex + i) % 8;
		std::cout << "         "<< i << "|"
			<< formatColumn(contacts[idx].getFirstName()) << "|"
			<< formatColumn(contacts[idx].getLastName()) << "|"
			<< formatColumn(contacts[idx].getNickName()) << "|" << std::endl;
	}
}
