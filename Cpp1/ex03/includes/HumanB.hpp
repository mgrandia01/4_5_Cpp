/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:19:18 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:26:31 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "../includes/Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string &name);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon &weapon);
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
