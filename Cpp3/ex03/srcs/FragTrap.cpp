/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <iostream>

/* ************************************************************************** */

// Constructors
FragTrap::FragTrap(): ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout <<"FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout <<"FragTrap Constructor of " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap Copy contructor called" << std::endl;
}

//Overloaded Operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{

	std::cout <<"FragTrap operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

//Destructor
FragTrap::~FragTrap()
{
	std::cout <<"FragTrap Destructor called" << std::endl;
}


//public functions
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says: high five guys!!" << std::endl;
}


/* ************************************************************************** */
//getters
//setters
