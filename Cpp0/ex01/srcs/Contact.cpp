/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:47:56 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/16 16:54:55 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Contact.hpp"

Contact::Contact(void)
{
  return ;
}

Contact::~Contact(void)
{
  return ;
}

void Contact::setContact(const std::string &fn,
                         const std::string &ln,
                         const std::string &nn,
                         const std::string &pn,
                         const std::string &ds,
                         int idx)
{
    firstName = fn;
    lastName = ln;
    nickName = nn;
    phoneNumber = pn;
    darkestSecret = ds;
    contactIndex = idx;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}

int Contact::getContactIndex() const
{
    return contactIndex;
}

