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
  	brain = new Brain();
	std::cout <<"[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

//Overloaded Operator
Dog &Dog::operator=(const Dog &other)
{

	std::cout <<"[Dog] copy assigment operator called" << std::endl;
	if (this != &other)
	{
	    AAnimal::operator = (other);
	    *brain = *other.brain;
	}
	return (*this);
}

//Destructor
Dog::~Dog()
{
	delete brain;
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
Brain * Dog::getBrain() const
{
  return brain;
}

//Setters
