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
#include <iostream>

int main()
{
	std::cout << "==============================" << std::endl;
	std::cout << " TEST 1: Constructors" << std::endl;
	std::cout << "==============================" << std::endl;

	ScavTrap a("Maria");
	ScavTrap b("James");
	ScavTrap c; // default constructor

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 2: Attack" << std::endl;
	std::cout << "==============================" << std::endl;
	//no energy
	for (int i = 0; i < 51; i ++)
		b.attack("bob");

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 3: Take Damage" << std::endl;
	std::cout << "==============================" << std::endl;
	//no live
	a.takeDamage(20);
	a.takeDamage(200);
	a.takeDamage(20);

	std::cout << "==============================" << std::endl;
	std::cout << " TEST 4: beRepaired" << std::endl;
	std::cout << "==============================" << std::endl;
	c.beRepaired(5);
	b.beRepaired(5);
	a.beRepaired(5);
	
	std::cout << "==============================" << std::endl;
	std::cout << " TEST 5: guardGate()" << std::endl;
	std::cout << "==============================" << std::endl;
	a.guardGate();
	return 0;
}
