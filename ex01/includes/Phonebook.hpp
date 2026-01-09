#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <string>
#include "Contact.hpp"
class Phonebook
{
  public:
    
    Phonebook(void);
    ~Phonebook(void);
	
  	void	addContact();
	void	searchContacts();

  private:
    Contact contacts[8];
    int numbercontacts;
    int nextIndex;
};

#endif
