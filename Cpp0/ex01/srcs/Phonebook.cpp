/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:48:18 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/16 16:57:28 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
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
	while(true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin,input))
		{
			std::cout << "\nEOF detected. Exiting program. \n";
			exit(0);
		}
		if (input.empty())
		{
			std::cout << "This field cannot be empty. Try again." << std::endl;
			continue;
		}
		return input;
	}
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

void Phonebook::printContactsTable(int totalContacts, int startIndex)
{
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

// Convierte un string a int, devuelve true si pudo y pone el resultado en 'result'
bool stringToInt(const std::string &str, int &result)
{
    result = 0;

    if (str.empty())
        return false;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return false;

        result = result * 10 + (str[i] - '0');
    }

    return true;
}


void Phonebook::printContactDetails(int totalContacts, int startIndex)
{
	std::string input;
	int	choseIndex = -1;
	int idx;

	std::cout <<"Enter the index of the contect to view details: ";
	std::getline(std::cin, input);

	if (!stringToInt(input, choseIndex))
	{
		std::cout <<"Invalid input. Please enter a number." << std::endl;
		return ;
	}
	if (choseIndex < 0 || choseIndex >= totalContacts)
	{
		std::cout << "Index out of range" << std::endl;
		return;
	}
	idx = (startIndex + choseIndex) % 8;
	std::cout << "First Name: " << contacts[idx].getFirstName() <<std::endl;
	std::cout << "Last Name: " << contacts[idx].getLastName() <<std::endl;
	std::cout << "Nick Name: " << contacts[idx].getNickName() <<std::endl;
	std::cout << "Phone Number: " << contacts[idx].getPhoneNumber() <<std::endl;
	std::cout << "Darkest Secret: " << contacts[idx].getDarkestSecret() <<std::endl;
}

void	Phonebook::searchContacts()
{
	if (nextIndex == 0)
	{
		std::cout << "Sorry, your phonebook is currently empty." << std::endl;
		return;
	}
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
	printContactsTable(totalContacts, startIndex);
	printContactDetails(totalContacts, startIndex);
}
