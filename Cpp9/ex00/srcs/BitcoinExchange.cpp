/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 12:11:59 by mgrandia          #+#    #+#             */
/*   Updated: 2026/08/28 12:12:01 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cctype>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other): _database(other._database){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		_database = other._database;

	return *this;
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	std::string line;

	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);

		std::string date;
		std::string price;

		std::getline(ss, date, ',');
		std::getline(ss, price, ',');

		double exchangeRate = std::atof(price.c_str());

		_database[date] = exchangeRate;
	}
	file.close();
}


void BitcoinExchange::processInput(const std::string& filename)
{
	std::ifstream file(filename.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date;
		std::string value;

		if (!parseLine(line, date, value))
			continue;

		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}

		double amount;

		if (!parseValue(value, amount))
			continue;

		double rate = getExchangeRate(date);

		std::cout << date << " => "
				  << amount << " = "
				  << amount * rate
				  << std::endl;
	}
}


bool BitcoinExchange::parseLine(const std::string& line, std::string& date, std::string& value)
{
	std::size_t pos = line.find('|');

	if (pos == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}

	date = trim(line.substr(0, pos));
	value = trim(line.substr(pos + 1));

	if (date.empty() || value.empty())
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}

	return true;
}

bool BitcoinExchange::parseValue(const std::string& str, double& value)
{
	char* end;

	value = std::strtod(str.c_str(), &end);

	if (*end != '\0')
	{
		std::cerr << "Error: bad input => " << str << std::endl;
		return false;
	}

	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}

	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}

	return true;
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
	if (date.size() != 10)
		return false;

	if (date[4] != '-' || date[7] != '-')
		return false;

	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (date[i] < '0' || date[i] > '9')
			return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12)
		return false;

	if (day < 1 || day > 31)
		return false;

	if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& day > 30)
		return false;

	if (month == 2)
	{
		bool leapYear = (year % 4 == 0
			&& (year % 100 != 0 || year % 400 == 0));

		if (day > (leapYear ? 29 : 28))
			return false;
	}

	return true;
}

double BitcoinExchange::getExchangeRate(const std::string& date)
{
	std::map<std::string, double>::iterator it = _database.lower_bound(date);

	if (it != _database.end() && it->first == date)
		return it->second;

	if (it == _database.begin())
		return 0;

	--it;
	return it->second;
}

std::string BitcoinExchange::trim(const std::string& str)
{
	std::size_t start = 0;
	std::size_t end = str.size();

	while (start < end && std::isspace(str[start]))
		++start;

	while (end > start && std::isspace(str[end - 1]))
		--end;

	return str.substr(start, end - start);
}
