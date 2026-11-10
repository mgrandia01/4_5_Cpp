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
#include <string>
#include "iter.hpp"

// Imprime un int
void printInt(int &x)
{
	std::cout << x << std::endl;
}

// Suma 1 a un int
void addOne(int &x)
{
	x += 1;
}

// Imprime string
void printString(const std::string &s)
{
	std::cout << s << std::endl;
}

int main()
{
	std::cout << "=== INT ARRAY ===" << std::endl;

	int arr[] = {1, 2, 3, 4, 5};

	iter(arr, 5, printInt);

	std::cout << "\n=== ADD ONE ===" << std::endl;

	iter(arr, 5, addOne);

	iter(arr, 5, printInt);

	std::cout << "\n=== STRING ARRAY ===" << std::endl;

	std::string s[] = {"hola", "mundo", "42"};

	iter(s, 3, printString);

	return 0;
}
