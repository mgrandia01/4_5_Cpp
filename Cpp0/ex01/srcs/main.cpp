/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:48:08 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/16 16:48:11 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

int main()
{

  std::cout << "Welcome to your Phonebook" << std::endl;
  sleep(2);
  std::system("clear");
  Phonebook phonebook;
  std::string command;

  while(1)
  {
  	std::cout << "What would you like to do? (ADD, SEARCH, EXIT): ";
	std::getline(std::cin, command);

	if (command == "ADD")
  		phonebook.addContact();
	else if (command == "SEARCH")
		phonebook.searchContacts();
	else if (command == "EXIT")
	{
  		std::cout << "Exit program." << std::endl;
		break;
	}
	else
		std::cout << "Invalid command. Try again." << std::endl;
  }
  return (0);
}
