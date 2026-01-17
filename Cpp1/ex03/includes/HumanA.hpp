/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:19:06 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:25:57 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "../includes/Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		
		void	attack();
	private:
		std::string _name;
		Weapon &_weapon; //referencia a Weapon
};

#endif
