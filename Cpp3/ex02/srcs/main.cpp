/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 12:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "==============================" << std::endl;
	std::cout << " TEST 1: Constructors" << std::endl;
	std::cout << "==============================" << std::endl;

	ClapTrap a("Marta");
	ScavTrap b("Berta");
	FragTrap c("Mariona");

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 2: Attack" << std::endl;
	std::cout << "==============================" << std::endl;
	//no energy
	for (int i = 0; i < 11; i ++)
	{
		a.attack("Astrit");
	}

	std::cout << "==============================" << std::endl;
	for (int i = 0; i < 51; i ++)
	{
		b.attack("Ingrit");
	}

	std::cout << "==============================" << std::endl;
	for (int i = 0; i < 101; i ++)
	{
		c.attack("Tais");
	}

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 3: Take Damage" << std::endl;
	std::cout << "==============================" << std::endl;
	//no live
	a.takeDamage(20);
	b.takeDamage(200);
	c.takeDamage(20);

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 4: beRepaired" << std::endl;
	std::cout << "==============================" << std::endl;
	a.beRepaired(5);
	b.beRepaired(5);
	c.beRepaired(5);
	
	std::cout << "==============================" << std::endl;
	std::cout << " TEST 5: guardGate() & highFIveGuys" << std::endl;
	std::cout << "==============================" << std::endl;
	b.guardGate();
	c.highFivesGuys();
	return 0;
}
