/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

/* ************************Constructors************************************** */

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(1)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const Form & other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)

{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{	
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();

	std::cout << "Form Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

Form &Form:: operator = (const Form &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << "Form: " <<  f.getName() 
		<< ", signed: " << f.getSigned() 
		<< ", grade to sign: " << f.getGradeToSign() 
		<< ", grade to execute:  " << f.getGradeToExecute();
	return out;
}

/* ************************Destructor***************************************** */

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */
void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

/* ************************Exceptions***************************************** */

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}	

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}	

/* ************************Getters***************************************** */

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

