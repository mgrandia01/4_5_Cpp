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

#include "functions.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(0));
	std::cout << "--------IDENTIFY REAL TYPE TEST--------" << std::endl;

	for (int i=0; i<5; i++)
	{
		std::cout << "\n---Test " << i+1 << " ---" << std::endl;

		Base *obj = generate();

		std::cout << "[Pointer identify]" << std::endl;
		identify(obj);

		std::cout << "[Reference identify]" << std::endl;
		identify(*obj);

		delete obj;
	}

	std::cout << "\n--------------END--------------" << std::endl;
	return (0);
}

