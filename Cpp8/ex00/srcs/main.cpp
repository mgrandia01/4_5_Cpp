/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 11:51:50 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	std::cout << "=== Testing easyfind ===" << std::endl;

	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::cout << "\n[Vector Test - Value Found]" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 20);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	std::cout << "\n[Vector Test - Value Not Found]" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 99);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	std::cout << "\n[List Test - Value Found]" << std::endl;
	try
	{
		std::list<int>::iterator it = easyfind(lst, 2);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	std::cout << "\n[List Test - Value Not Found]" << std::endl;
	try
	{
		std::list<int>::iterator it = easyfind(lst, 42);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	std::cout << "\n=== End of tests ===" << std::endl;

	return (0);
}
