/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		//Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal & other);
		
		//Overloaded Operators
		WrongAnimal & operator = (const WrongAnimal & other);
		
		//Destructor
		~WrongAnimal();

		//Pubplic Methods
		void makeSound() const;

		//Getters
		std::string getType() const;
		
		//Setters

	protected:
		std::string type;
};

#endif
