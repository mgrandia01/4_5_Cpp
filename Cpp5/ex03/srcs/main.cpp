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

#include "Intern.hpp"
#include "AForm.hpp"

static void testValidForms()
{
	std::cout << "\n-------------VALID FORM-------------\n" << std::endl;
	
	Intern intern;

	AForm* f1 = intern.makeForm("shrubbery creation", "Marta");
	AForm* f2 = intern.makeForm("robotomy request", "Berta");
	AForm* f3 = intern.makeForm("presidential pardon", "Mariona");

	std::cout << "\n---Form pointers---" << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f1 << std::endl;
	std::cout << "f3: " << f1 << std::endl;
	
	delete f1;
	delete f2;
	delete f3;
}
	
	
static void testInvalidForm()
{
	std::cout << "\n------------INVALID FORM------------\n" << std::endl;
	
	Intern intern;

	AForm* f = intern.makeForm("miForm", "Someone");

	if (f==NULL)
		std::cout << "Form was not created" << std::endl;
	delete f;
}

int main()
{
	testValidForms();
	testInvalidForm();

	std::cout << "\n-----------------END-----------------\n" << std::endl;
	return 0;
}
