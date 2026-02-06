/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/06 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>

/* ************************************************************************** */
/*
// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("default_clap_trap")
{
	this->_name= "default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout <<"DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout <<"DiamondTrap Constructor of " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other.ClapTrap::_name), ScavTrap(), FragTrap(), _name(other._name)
{
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}


//Overloaded Operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{

	std::cout <<"DiamondTrap operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name + "_clap_trap";
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

//Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout <<"DiamondTrap Destructor called" << std::endl;
}


//public functions
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap  I'm " << _name << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

*/
/* ************************************************************************** */
//getters
//setters
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/06 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>

/* ************************************************************************** */

// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("default_clap_trap"), ScavTrap(), FragTrap(), _name("default")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout <<"DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(), FragTrap(), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout <<"DiamondTrap Constructor of " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other),  // base virtual
      ScavTrap(other),  // base normal
      FragTrap(other),  // base normal
      _name(other._name)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}


//Overloaded Operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout <<"DiamondTrap operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return (*this);
}

//Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout <<"DiamondTrap Destructor called" << std::endl;
}


//public functions
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap I'm " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}


/* ************************************************************************** */
//getters
//setters
