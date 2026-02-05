/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout <<"Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout <<"Constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{

	std::cout <<"ClapTrap operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

//Destructor
ClapTrap::~ClapTrap()
{
	std::cout <<"Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack because it has no hit points left!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack because it has no energy points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks "<< target<<", causing "<< _attackDamage <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	if (amount >= (unsigned int)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints = _hitPoints-amount;
	std::cout <<"takeDamage called. " << _name << " loses " << amount << " hit points. " << _name << " have now " << _hitPoints << " hit points!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair because it has no hit points left!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair because it has no energy points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints = _hitPoints+amount;
	std::cout <<"beRepaired called. " << _name << " repaired " << amount << " points. " << _name << " have now " << _hitPoints << " hit points!" << std::endl;

}


/* ************************************************************************** */

//Getters

//Setters
