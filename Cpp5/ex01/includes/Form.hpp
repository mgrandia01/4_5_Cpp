/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{	
	public:
		//Constructors
		Form();
		Form(const Form & other);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		
		//Overloaded Operators
		Form & operator = (const Form & other);
		
		//Destructor
		~Form();

		//Pubplic Methods
		void beSigned(const Bureaucrat &b);
		
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
		bool getSigned() const;
		int getGradeToSign() const;	
		int getGradeToExecute() const;	
		
		//Setters

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &form);
#endif
