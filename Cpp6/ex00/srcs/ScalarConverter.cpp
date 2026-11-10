/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <iomanip>
#include <limits>
#include <cstdlib>

/* ************************Constructors************************************** */

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter & other)
{
	(void)other;
	std::cout << "Copy constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */

ScalarConverter &ScalarConverter:: operator = (const ScalarConverter &other)
{
	(void)other;
	return *this;
}
/* ************************Destructor***************************************** */

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
}


/* *********************Helper functions**************************************** */

bool isPseudoLiteral(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf")
		return true;

	if (literal == "+inf" || literal == "-inf" || literal == "inf")
		return true;

	if (literal == "+inff" || literal == "-inff" || literal == "inff")
		return true;

	return false;
}

static void printPseudoLiteral(const std::string& literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (literal == "nan" || literal == "nanf")
	{
		std::cout<< "float: nanf"<< std::endl;
		std::cout<< "double: nan"<< std::endl;
	}
	else if (literal[0] == '-')
	{
		std::cout<< "float: -inf"<< std::endl;
		std::cout<< "double: -inf"<< std::endl;
	}
	else
	{
		std::cout<< "float: +inf"<< std::endl;
		std::cout<< "double: +inf"<< std::endl;
	}
}
/* *********************Prints**************************************** */

void printChar(double value)
{
	std::cout << "char: ";
	if (value < 0 || value > 127)
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(value)))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(value) << "'\n";
}

void printInt(double value)
{
	std::cout << "int: ";
	if (value > std::numeric_limits<int>::max()
		|| value < std::numeric_limits<int>::min())
	{
		std::cout << "impossible\n";
	}
	else
		std::cout << static_cast<int>(value) << "\n";
}

void printFloat(double value)
{
	std::cout << "float: "
		<<std::fixed << std::setprecision(1)
		<<static_cast<float>(value) << "f\n";
}

void printDouble(double value)
{
	std::cout << "double: "
		<< std::fixed << std::setprecision(1)
		<< value << "\n";
}

static bool isValidNumber(const std::string& s)
{
	int i = 0;
	bool dot = false;
	bool digit = false;

	if (s.empty())
		return false;
	if (s == "." || s == "-" || s == "+")
		return false;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (i < (int)s.size())
	{
		if (std::isdigit(s[i]))
			digit = true;
		else if (s[i] == '.' && !dot)
			dot = true;
		else if (s[i] == 'f' && i == (int)s.size() -1 && digit)
			return digit;
		else 
			return false;
		i ++;			
	}
	return digit;
}
/* *********************Public Methods**************************************** */

void ScalarConverter::convert(const std::string& literal)
{
	double value;

	if (isPseudoLiteral(literal))
	{
		printPseudoLiteral(literal);
		return ;
	}
	if (literal.length() == 1 && !std::isdigit(literal[0]))
	{
		value = static_cast<double>(literal[0]);
		printChar(value);
		printInt(value);
		printFloat(value);
		printDouble(value);
		return ;
	}

	if (!isValidNumber(literal))
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return ;
	}	
	
	value = atof(literal.c_str());//ASCII to float
	
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
	
}

/* ************************Exceptions***************************************** */

/* ************************Getters***************************************** */
