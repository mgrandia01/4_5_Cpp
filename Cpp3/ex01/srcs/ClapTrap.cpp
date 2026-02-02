#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name): _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout <<"Constructor of " << _Name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoints <= 0 || _HitPoints <= 0)
		return ;
	_EnergyPoints--;
	std::cout << "ClapTrap " << _Name << " attacks "<< target<<", causing "<< _AttackDamage <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0)
		return ;
	_HitPoints = _HitPoints-amount;
	if (_HitPoints < 0)
		_HitPoints = 0;
	std::cout <<"takeDamage called. " << _Name << " lose " << amount << " hit points. " << _Name << " have now " << _HitPoints << " hit points!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints <= 0 || _HitPoints <= 0)
		return ;
	_EnergyPoints--;
	_HitPoints = _HitPoints+amount;
	std::cout <<"beRepaired called. " << _Name << " repaired " << amount << " points. " << _Name << " have naw " << _HitPoints << " hit points!" << std::endl;

}






