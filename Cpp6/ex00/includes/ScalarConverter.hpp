/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <exception>

class ScalarConverter
{	
	public:
		//Pubplic Methods
		static void convert(const std::string& literal);	
		//Exceptions
	
		//Getters
		
		//Setters

	private:

		//Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter & other);
		
		//Overloaded Operators
		ScalarConverter & operator = (const ScalarConverter & other);
		
		//Destructor
		~ScalarConverter();
};
#endif
