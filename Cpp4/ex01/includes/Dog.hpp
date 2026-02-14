/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		//Constructors
		Dog();
		Dog(const Dog & other);
		
		//Overloaded Operators
		Dog & operator = (const Dog & other);
		
		//Destructor
		virtual ~Dog();

		//Pubplic Methods
		virtual void makeSound() const;
    Brain* getBrain() const;
		//Getters
		
		//Setters
    private:
      Brain* brain;
};

#endif
