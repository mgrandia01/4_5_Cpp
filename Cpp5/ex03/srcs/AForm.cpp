/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 12:26:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* ************************Constructors************************************** */

AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(1)
{
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const AForm & other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)

{
	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{	
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();

	std::cout << "AForm Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

AForm &AForm:: operator = (const AForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

//TODO continuar per aqui!
std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << "AForm: " <<  f.getName() 
		<< ", signed: " << f.getSigned() 
		<< ", grade to sign: " << f.getGradeToSign() 
		<< ", grade to execute:  " << f.getGradeToExecute();
	return out;
}

/* ************************Destructor***************************************** */

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */
void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();

	executeAction();
}

/* ************************Exceptions***************************************** */

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form not signed!";
}	


const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}	

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}	

/* ************************Getters***************************************** */

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

