/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
WrongCat::WrongCat(): WrongAnimal()
{
	type = "WrongCat";
	std::cout <<"[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{

	std::cout <<"[WrongCat] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
WrongCat::~WrongCat()
{
	std::cout <<"[WrongCat] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods
void WrongCat::makeSound() const
{
	std::cout << "Uaim Uaim! 🐈" << std::endl;
}
/* ************************************************************************** */

//Getters

//Setters
