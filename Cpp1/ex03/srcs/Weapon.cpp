/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:20:49 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:28:36 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type)
{
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

void Weapon::setType(const std::string &new_type)
{
    _type = new_type;
}

std::string Weapon::getType()const
{
	return _type;
}
