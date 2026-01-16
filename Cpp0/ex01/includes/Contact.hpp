/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:47:04 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/16 16:54:30 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
					int idx);
	//Getters
	std::string getFirstName()const;
	std::string getLastName()const;
	std::string getNickName()const;
	std::string getPhoneNumber()const;
	std::string getDarkestSecret()const;
	int	getContactIndex() const;	

  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int	contactIndex;
};

#endif
