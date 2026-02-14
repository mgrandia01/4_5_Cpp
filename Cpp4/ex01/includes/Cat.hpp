/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		//Constructors
		Cat();
		Cat(const Cat & other);
		
		//Overloaded Operators
		Cat & operator = (const Cat & other);
		
		//Destructor
		virtual ~Cat();

		//Pubplic Methods
		virtual void makeSound() const;
    Brain* getBrain() const;

		//Getters
		
		//Setters

private:
  Brain* brain;

};

#endif
