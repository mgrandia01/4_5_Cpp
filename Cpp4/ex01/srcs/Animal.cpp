/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
Animal::Animal(): type("Animal")
{
	std::cout <<"[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
Animal &Animal::operator=(const Animal &other)
{

	std::cout <<"[Animal] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
Animal::~Animal()
{
	std::cout <<"[Animal] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods
void Animal::makeSound() const
{
	std::cout << " *generic animal sound*" << std::endl;
}
/* ************************************************************************** */

//Getters
std::string Animal::getType()const
{
	return this->type;
}

//Setters
