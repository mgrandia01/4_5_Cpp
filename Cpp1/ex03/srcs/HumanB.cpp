/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:20:12 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:41:30 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/HumanB.hpp"

HumanB::HumanB(const std::string &name):_name(name)
{
}

HumanB::~HumanB(void)
{
}
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else

		std::cout << _name << " has no weapon to attack!" << std::endl;
}
