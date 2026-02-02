#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>

class Contact
{
  public:
    
    Contact(void);
    ~Contact(void);
	
	//Setters
	void setContact(const std::string &fn,
					const std::string &ln, const std::string &nn,
					const std::string &pn, const std::string&ds,
					int idx)
	{
		firstName = fn;
		lastName = ln;
		nickName = nn;
		phoneNumber = pn;
		darkestSecret = ds;
		contactIndex = idx;
	}
	//Getters
	std::string getFirstName()const{return firstName;}
	std::string getLastName()const{return lastName;}
	std::string getNickName()const{return nickName;}
	std::string getPhoneNumber()const{return phoneNumber;}
	std::string getDarkestSecret()const{return darkestSecret;}
	int	getContactIndex() const{return contactIndex; }	

  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int	contactIndex;
};

#endif
