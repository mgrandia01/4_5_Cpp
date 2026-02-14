/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		//Constructors
		Animal();
		Animal(const Animal & other);
		
		//Overloaded Operators
		Animal & operator = (const Animal & other);
		
		//Destructor
		virtual ~Animal();

		//Pubplic Methods
		virtual void makeSound() const;

		//Getters
		std::string getType() const;
		
		//Setters

	protected:
		std::string type;
};

#endif
