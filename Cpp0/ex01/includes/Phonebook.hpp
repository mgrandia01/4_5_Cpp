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
	void	printContactsTable(int totalContacts, int startIndex);
	void	printContactDetails(int totalContacts, int startIndex);

  private:
    Contact contacts[8];
    int numbercontacts;
    int nextIndex;
};

#endif
