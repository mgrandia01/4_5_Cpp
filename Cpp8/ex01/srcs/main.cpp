/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 13:19:10 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	std::cout << "=== Testing Span ===" << std::endl;

	std::cout << "\n[Basic test]" << std::endl;
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: exception thrown" << std::endl;
	}

	std::cout << "\n[Error test - not enough numbers]" << std::endl;
	try
	{
		Span sp(3);
		sp.addNumber(10);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: not enough numbers" << std::endl;
	}

	std::cout << "\n[Error test - overflow]" << std::endl;
	try
	{
		Span sp(2);

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3); // should throw

		std::cout << "This line should not appear" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: span is full" << std::endl;
	}


	std::cout << "\n[Range iterator test]" << std::endl;
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 10; i++)
			v.push_back(i * 2);

		Span sp(10);
		sp.addNumber(v.begin(), v.end());

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught in range test" << std::endl;
	}
	
	std::cout << "\n[Stress test - 10000 numbers]" << std::endl;
	try
	{
		std::vector<int> big;
		for (int i = 0; i < 10000; i++)
			big.push_back(i);

		Span sp(10000);
		sp.addNumber(big.begin(), big.end());

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught in stress test" << std::endl;
	}
		std::cout << "\n=== End of tests ===" << std::endl;

	return 0;
}
/*
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}*/
