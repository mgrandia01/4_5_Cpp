/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 09:23:51 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{	
	public:
		//Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat(std::string name, int grade);
		
		//Overloaded Operators
		Bureaucrat & operator = (const Bureaucrat & other);
		
		//Destructor
		~Bureaucrat();

		//Pubplic Methods
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &form);	
		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		//Getters
		std::string getName() const;
		int getGrade() const;	
		
		//Setters

	private:
		std::string const _name;
		int _grade; //(1-150)
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif
