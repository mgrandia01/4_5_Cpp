/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		//Constructors
		AAnimal();
		AAnimal(const AAnimal & other);
		
		//Overloaded Operators
		AAnimal & operator = (const AAnimal & other);
		
		//Destructor
		virtual ~AAnimal();

		//Pubplic Methods
		virtual void makeSound() const = 0;

		//Getters
		std::string getType() const;
		
		//Setters

	protected:
		std::string type;
};

#endif
