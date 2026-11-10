/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/03/13 10:40:50 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Test 1: Valid Bureaucrat and Form, successful signing" << std::endl;
	try
	{
		Bureaucrat b1("Bob", 10);
		Form f1("TaxForm", 40, 20);

		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;

		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 2: Bureaucrat with too high grade (invalid)" << std::endl;
	try
	{
		Bureaucrat b2("Ana", 0);
		Form f2("TaxForm", 40, 20);
		std::cout << b2 << std::endl;
		std::cout << f2 << std::endl;
		b2.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 3: Bureaucrat with too low grade (invalid)" << std::endl;
	try
	{
		Bureaucrat b3("Charlie", 151);
		Form f3("TaxForm", 40, 20);
		std::cout << b3 << std::endl;
		std::cout << f3 << std::endl;
		b3.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 4: Form with gradeToSign too high (invalid)" << std::endl;
	try
	{
		Bureaucrat b4("David", 10);
		Form f4("InvalidFormHigh", 0, 20);
		std::cout << b4 << std::endl;
		std::cout << f4 << std::endl;
		b4.signForm(f4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 5: Form with gradeToSign too low (invalid)" << std::endl;
	try
	{
		Bureaucrat b5("Eve", 10);
		Form f5("InvalidFormLow", 151, 20);
		std::cout << b5 << std::endl;
		std::cout << f5 << std::endl;
		b5.signForm(f5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 6: Bureaucrat with insufficient grade to sign" << std::endl;
	try
	{
		Bureaucrat b6("Frank", 50); 
		Form f6("ImportantForm", 40, 20);
		std::cout << b6 << std::endl;
		std::cout << f6 << std::endl;
		b6.signForm(f6); 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 7: Bureaucrat with exactly sufficient grade to sign" << std::endl;
	try
	{
		Bureaucrat b7("Grace", 40); // grade == gradeToSign
		Form f7("ExactForm", 40, 20);
		std::cout << b7 << std::endl;
		std::cout << f7 << std::endl;
		b7.signForm(f7);  // Should sign successfully
		std::cout << f7 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
