/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:27:20 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 13:07:54 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{	
	public:
		//Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & other);
		PresidentialPardonForm(std::string target);
		
		//Overloaded Operators
		PresidentialPardonForm & operator = (const PresidentialPardonForm & other);
		
		//Destructor
		~PresidentialPardonForm();

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
