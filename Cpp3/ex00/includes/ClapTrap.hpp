/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 12:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		//Constructors
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & other);
		
		//Overloaded Operators
		ClapTrap & operator = (const ClapTrap & other);
		
		//Destructor
		~ClapTrap();

		//Pubplic Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//Getters
		
		//Setters

	private:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};

#endif
