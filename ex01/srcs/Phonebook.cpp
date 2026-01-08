#include <iostream>
#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void)
{
  std::cout << "Constructor called" << std::endl;
  return ;
}

Phonebook::~Phonebook(void)
{
  std::cout << "Destructor called" << std::endl;
  return ;
}
