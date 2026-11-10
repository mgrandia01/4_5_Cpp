/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:14:39 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"


/* ************************Constructors************************************** */

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{	
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;

	std::cout << "Bureaucrat Constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

Bureaucrat &Bureaucrat:: operator = (const Bureaucrat &other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}

/* ************************Destructor***************************************** */

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

/* *********************Public Methods**************************************** */

void Bureaucrat::incrementGrade()
{
	if (_grade < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign "	
			<< form.getName() << " because " 
			<< e.what() << std::endl;
	}

}
	
/* ************************Exceptions***************************************** */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}	

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}	

/* ************************Getters***************************************** */

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}
