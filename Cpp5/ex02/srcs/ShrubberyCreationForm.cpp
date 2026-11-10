/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/* ************************Constructors************************************** */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  AForm("ShrubberyCreationForm", 145, 137),_target(target)
{	
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

ShrubberyCreationForm &ShrubberyCreationForm:: operator = (const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

/* ************************Destructor***************************************** */

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */
void ShrubberyCreationForm::executeAction() const
{
	std::ofstream file((_target + "_shrubbery").c_str());

	if (!file)
	{
		std::cerr << "Error creating file" << std::endl;
		return;
	}

	file << "        ccee88oo\n";
	file << "     C8O8O8Q8PoOb o8oo\n";
	file << "   dOB69QO8PdUOpugoO9bD\n";
	file << "  CgggbU8OU qOp qOdoUOdcb\n";
	file << "      6OuU  /p u gcoUodpP\n";
	file << "        \\\\//  /douUP\n";
	file << "          \\\\////\n";
	file << "           |||/\\\n";
	file << "           |||\\/\n";
	file << "           |||||\n";
	file << "     .....//||||\\....\n";

	file.close();
	std::cout << "Shrubbery created for" << _target << std::endl;
}

/* ************************Exceptions***************************************** */

/* ************************Getters***************************************** */


