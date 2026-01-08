#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>

class Contact
{
  public:
    
    Contact(void);
    ~Contact(void);
  
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

};

#endif
