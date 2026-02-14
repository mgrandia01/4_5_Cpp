/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
Dog::Dog() : AAnimal()
{
	type = "Dog";
	std::cout <<"[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
Dog &Dog::operator=(const Dog &other)
{

	std::cout <<"[Dog] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
Dog::~Dog()
{
	std::cout <<"[Dog] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods

void Dog::makeSound() const
{
	std::cout << "Guau guau! 🐕" << std::endl;
}
/* ************************************************************************** */

//Getters

//Setters
