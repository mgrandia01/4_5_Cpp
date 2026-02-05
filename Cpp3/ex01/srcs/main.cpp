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
	
	for (int i = 0; i < 51; i ++)
		a.attack("bob");
    return 0;
}
