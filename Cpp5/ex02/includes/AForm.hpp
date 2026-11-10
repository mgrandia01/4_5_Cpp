/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 12:12:14 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{	
	public:
		//Constructors
		AForm();
		AForm(const AForm & other);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		
		//Overloaded Operators
		AForm & operator = (const AForm & other);
		
		//Destructor
		virtual ~AForm();

		//Pubplic Methods
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const;		
		//Exceptions
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

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

	protected:
		virtual void executeAction() const = 0;
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);
#endif
