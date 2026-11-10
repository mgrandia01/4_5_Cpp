/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// New valid Bureaucrat
		Bureaucrat b1("Marta", 42);
		std::cout << b1 << std::endl;

		// Increment grade
		b1.incrementGrade();
		std::cout << "After increment: " << b1 << std::endl;

		//Decrement
		b1.decrementGrade();
		std::cout << "After decrement: " << b1 << std::endl;

		// New Bureaucrat with grade to hight
		Bureaucrat b2("Bob",0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	//try maxim limits (grade = 150)
	try
	{
		Bureaucrat b3("Mariona",150);
		std::cout << b3 << std::endl;

		b3.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	//try minim limits (grade = 1)
	try
	{
		Bureaucrat b4("Cris",1);
		std::cout << b4 << std::endl;

		b4.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	Bureaucrat b1("Marta", 42);
	Bureaucrat b2("Bob",10);
  Bureaucrat copy(b1);
  std::cout << "Copy: " << copy << std::endl;

  b1 = b2;
  std::cout << "After assign: " << b1 << std::endl;
	return (0);
}

