/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


/* ************************Constructors************************************** */

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : AForm(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  AForm("RobotomyRequestForm", 72, 45),_target(target)
{	
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

RobotomyRequestForm &RobotomyRequestForm:: operator = (const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

/* ************************Destructor***************************************** */

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */
void RobotomyRequestForm::executeAction() const
{
	std::cout << " *Drilling nose !!!* " << std::endl;
	if(rand() % 2 == 0)
		std::cout << _target << "has been robotomized succesfully!" << std::endl;
	else
		std::cout << "Robotomy failed on" << _target << "!" << std::endl;
}

/* ************************Exceptions***************************************** */

/* ************************Getters***************************************** */


