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
#include <iostream>

int main()
{
    std::cout << "==============================" << std::endl;
    std::cout << " TEST 1: Constructors" << std::endl;
    std::cout << "==============================" << std::endl;

    ClapTrap a("Maria");
    ClapTrap b("James");
    ClapTrap c; // default constructor

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 2: Copy constructor" << std::endl;
    std::cout << "==============================" << std::endl;

    ClapTrap copyA(a);

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 3: Assignment operator" << std::endl;
    std::cout << "==============================" << std::endl;

    c  = b;

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 4: Attacks (energy usage)" << std::endl;
    std::cout << "==============================" << std::endl;

    a.attack("Bob");
    b.attack("Bob");
    c.attack("Bob");

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 5: Damage" << std::endl;
    std::cout << "==============================" << std::endl;

    b.takeDamage(3);
    b.takeDamage(4);
    b.takeDamage(20); // should kill it

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 6: Repair" << std::endl;
    std::cout << "==============================" << std::endl;

    a.beRepaired(5);

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 7: Actions when dead" << std::endl;
    std::cout << "==============================" << std::endl;

    b.attack("Someone");
    b.beRepaired(10);
    b.takeDamage(1);

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 8: Drain energy completely" << std::endl;
    std::cout << "==============================" << std::endl;

    ClapTrap d("EnergyTester");

    for (int i = 0; i < 12; i++)
        d.attack("Dummy");

    std::cout << "\n==============================" << std::endl;
    std::cout << " TEST 9: Repair with no energy" << std::endl;
    std::cout << "==============================" << std::endl;

    d.beRepaired(5);

    std::cout << "\n==============================" << std::endl;
    std::cout << " END OF TESTS" << std::endl;
    std::cout << "==============================" << std::endl;

    return 0;
}
