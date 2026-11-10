/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:57:42 by mgrandia          #+#    #+#             */
/*   Updated: 2026/08/28 11:50:17 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
int main(int argc, char* argv[])
{
	if (argc != 2)
		return 1;
	BitcoinExchange btc;

	btc.loadDatabase("data.csv");
	btc.processInput(argv[1]);
	return 0;
}
