/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout <<"[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{

	std::cout <<"[WrongAnimal] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout <<"[WrongAnimal] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods
void WrongAnimal::makeSound() const
{
	std::cout << "*generic WRONGanimal sound*" << std::endl;
}
/* ************************************************************************** */

//Getters
std::string WrongAnimal::getType()const
{
	return this->type;
}

//Setters
