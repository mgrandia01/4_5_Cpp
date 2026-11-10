/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:24:20 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 13:12:14 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>


/* ************************Constructors************************************** */

Span::Span(unsigned int N) : _N(N)
{	
	//std::cout << "Span Constructor called" << std::endl;
}

Span::Span(const Span & other) : _N(other._N), _numbers(other._numbers)
{
	//std::cout << "Span Copy constructor called" << std::endl;
}
/* ************************Overloaded Operators****************************** */

Span &Span:: operator = (const Span &other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_numbers = other._numbers;
	}
	return *this;
}
/* ************************Destructor***************************************** */

Span::~Span()
{
	//std::cout << "Span Destructor called" << std::endl;
}


/* ************************Pubic methods***************************************** */

void Span::addNumber(int n)
{
	if (_numbers.size() >= _N)
		throw std::exception();
	_numbers.push_back(n);

}

int Span::shortestSpan()
{

	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());

	int min = tmp[1]-tmp[0];

	for(size_t i = 1; i<tmp.size(); i++)
	{
		int diff = tmp[i]- tmp[i-1];
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());

	int max = tmp.back() - tmp.front();
	
	return max;
}
