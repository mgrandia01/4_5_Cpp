/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

/* ************************Constructors************************************** */

Intern::Intern() 
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern & other)
{
	(void)other;
	std::cout << "Intern Copy constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

Intern &Intern:: operator = (const Intern &other)
{
	(void)other;
	return *this;
}

/* ************************Destructor***************************************** */

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

/* *********************Private Methods**************************************** */

AForm* Intern::createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}


AForm* Intern::createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

/* *********************Public Methods**************************************** */
AForm* Intern::makeForm(std::string formName, std::string target)
{
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	FormCreator creators[3] = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidential
	};

	for (int i=0; i<3; i++)
	{
		if(forms[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);
		}
	}
	std::cout << "Intern cannot create" << formName << std::endl;
	return NULL;
}
/* ************************Exceptions***************************************** */

/* ************************Getters***************************************** */
