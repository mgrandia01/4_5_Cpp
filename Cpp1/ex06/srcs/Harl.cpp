/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:50:13 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/19 12:02:31 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::_debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::_info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::_warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::_error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now.\n";
}

int Harl::_getLevelIndex(const std::string &level)
{

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return i;
	}
	return -1;

}

void Harl::complain(std::string level)
{

	void (Harl::*functions[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int index = _getLevelIndex(level);
	if (index >= 0)
		(this->*functions[index])();
}

void Harl::filter(std::string level)
{
	int levelIndex = _getLevelIndex(level);

	switch(levelIndex)
	{
		case 0:
			complain("DEBUG");
			complain("INFO");
			complain("WARNING");
			complain("ERROR");
			break;
		case 1:
			complain("INFO");
			complain("WARNING");
			complain("ERROR");
			break;
		case 2:
			complain("WARNING");
			complain("ERROR");
			break;
		case 3:
			complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
