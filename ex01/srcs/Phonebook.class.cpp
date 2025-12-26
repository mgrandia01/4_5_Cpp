#include <iostream>
#include "Phonebook.class.hpp"

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
