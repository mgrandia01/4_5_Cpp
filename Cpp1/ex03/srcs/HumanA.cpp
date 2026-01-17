/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:19:58 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:41:12 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon):_name(name),_weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl; 
}
