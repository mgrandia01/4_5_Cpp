/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
AAnimal::AAnimal(): type("AAnimal")
{
	std::cout <<"[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
AAnimal &AAnimal::operator=(const AAnimal &other)
{

	std::cout <<"[AAnimal] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
AAnimal::~AAnimal()
{
	std::cout <<"[AAnimal] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods

/* ************************************************************************** */

//Getters
std::string AAnimal::getType()const
{
	return this->type;
}

//Setters
