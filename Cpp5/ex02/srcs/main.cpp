/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 12:15:55 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	// ────────── 1️⃣ Crear Bureaucrats ──────────
	Bureaucrat alice("Alice", 1);
	Bureaucrat bob("Bob", 50);
	Bureaucrat charlie("Charlie", 150);

	std::cout << "--- Bureaucrats ---\n";
  	std::cout << alice << std::endl;
	std::cout << bob << std::endl;
	std::cout << charlie << std::endl << std::endl;

	// ────────── 2️⃣ PresidentialPardonForm ──────────
	std::cout << "=== Test: PresidentialPardonForm ===\n";
	PresidentialPardonForm presForm("Marvin");

	try
	{
		bob.executeForm(presForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		alice.signForm(presForm);
		alice.executeForm(presForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n";


	// ────────── RobotomyRequestForm ──────────
	std::cout << "=== Test: RobotomyRequestForm ===\n";
	RobotomyRequestForm roboForm("Bender");
	
	try
	{
	    bob.signForm(roboForm);
	}
	catch(const std::exception &e)
	{
	    std::cerr << e.what() << std::endl;
	}
	
	try
	{
	    bob.executeForm(roboForm);
	}
	catch(const std::exception &e)
	{
	    std::cerr << e.what() << std::endl;
	}
	
	try
	{
	    alice.executeForm(roboForm);
	}
	catch(const std::exception &e)
	{
	    std::cerr << e.what() << std::endl;
	}


	std::cout << "\n";
	// ────────── 4️⃣ ShrubberyCreationForm ──────────
	std::cout << "=== Test: ShrubberyCreationForm ===\n";
	ShrubberyCreationForm shrubForm("home");

	try
	{
		charlie.signForm(shrubForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		bob.signForm(shrubForm);
		bob.executeForm(shrubForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n==================== End of Tests ====================\n";
	return 0;

}
