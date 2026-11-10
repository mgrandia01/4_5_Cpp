/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 12:12:14 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{	
	public:
		//Constructors
		Intern();
		Intern(const Intern & other);
		
		//Overloaded Operators
		Intern & operator = (const Intern & other);
		
		//Destructor
		virtual ~Intern();

		//Pubplic Methods
		AForm* makeForm(std::string formName, std::string target);
		//Exceptions
		//Getters
		//Setters

	private:
		typedef AForm* (*FormCreator)(std::string target);

		static AForm* createShrubbery(std::string target);
		static AForm* createRobotomy(std::string target);
		static AForm* createPresidential(std::string target);
};
#endif
