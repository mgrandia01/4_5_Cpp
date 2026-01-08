#include <iostream>
#include "../includes/Contact.hpp"

Contact::Contact(void)
{
  std::cout << "Constructor called" << std::endl;
  return ;
}

Contact::~Contact(void)
{
  std::cout << "Destructor called" << std::endl;
  return ;
}
