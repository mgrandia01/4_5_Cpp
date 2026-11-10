/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

/* ************************Constructors************************************** */

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm(other), _target(other._target)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm("PresidentialPardonForm", 25, 5),_target(target)
{	
	std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

PresidentialPardonForm &PresidentialPardonForm:: operator = (const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

/* ************************Destructor***************************************** */

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */
void PresidentialPardonForm::executeAction() const
{
	std::cout << _target << " has been perdoned by Zaphod Beeblebrox" << std::endl;
}

/* ************************Exceptions***************************************** */

/* ************************Getters***************************************** */


