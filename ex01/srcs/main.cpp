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
  		std::cout << "Has escrit SEARCH" << std::endl;
	else if (command == "EXIT")
  		std::cout << "Has escrit EXIT" << std::endl;
	else
		std::cout << "Invalid command. Try again." << std::endl;
  }
  return (0);
}
