/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:18:48 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 11:24:19 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(const std::string &type);
		Weapon();
		~Weapon();
		
		std::string	getType()const;
		void	setType(const std::string &new_type);
	private:
		std::string _type;
};

#endif
