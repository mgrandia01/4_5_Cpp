/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:27:20 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 13:07:54 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{	
	public:
		//Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		ShrubberyCreationForm(std::string target);
		
		//Overloaded Operators
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm & other);
		
		//Destructor
		~ShrubberyCreationForm();

		//Pubplic Methods
		
		//Exceptions
	
		//Getters
	
		//Setters

	protected:
		void executeAction() const;
	private:
		std::string _target;
};

#endif
