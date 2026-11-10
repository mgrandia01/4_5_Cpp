/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:27:20 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 13:07:54 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{	
	public:
		//Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & other);
		RobotomyRequestForm(std::string target);
		
		//Overloaded Operators
		RobotomyRequestForm & operator = (const RobotomyRequestForm & other);
		
		//Destructor
		~RobotomyRequestForm();

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
