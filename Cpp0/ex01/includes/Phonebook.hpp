/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:47:25 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/16 16:47:33 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
