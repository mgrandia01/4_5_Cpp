/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 14:23:45 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/11 14:24:00 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "===== TEST 1: Empty Array =====" << std::endl;
	Array<int> a;

	std::cout << "size: " << a.size() << std::endl;

	try
	{
		std::cout << a[0] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception OK (empty array access)" << std::endl;
	}

	std::cout << "\n===== TEST 2: Array with size =====" << std::endl;
	Array<int> b(5);

	std::cout << "size: " << b.size() << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 10;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "\n===== TEST 3: Copy constructor (deep copy) =====" << std::endl;
	Array<int> c(b);

	c[0] = 999;

	std::cout << "Original b[0]: " << b[0] << std::endl;
	std::cout << "Copy c[0]: " << c[0] << std::endl;

	std::cout << "\n===== TEST 4: Assignment operator =====" << std::endl;
	Array<int> d;
	d = b;

	d[1] = 888;

	std::cout << "Original b[1]: " << b[1] << std::endl;
	std::cout << "Assigned d[1]: " << d[1] << std::endl;

	std::cout << "\n===== TEST 5: Out of bounds =====" << std::endl;

	try
	{
		b[100] = 42;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception OK (out of bounds)" << std::endl;
	}

	std::cout << "\n===== TEST 6: Const correctness =====" << std::endl;
	const Array<int> e(3);

	try
	{
		std::cout << e[0] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception on const array" << std::endl;
	}

	return 0;
}
