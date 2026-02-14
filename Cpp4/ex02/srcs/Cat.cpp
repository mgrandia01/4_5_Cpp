/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>


/* ************************************************************************** */

// Constructors
Cat::Cat(): AAnimal()
{
	type = "Cat";
	std::cout <<"[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal()
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
Cat &Cat::operator=(const Cat &other)
{

	std::cout <<"[Cat] copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//Destructor
Cat::~Cat()
{
	std::cout <<"[Cat] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods
void Cat::makeSound() const
{
	std::cout << "Miau miau! 🐈" << std::endl;
}
/* ************************************************************************** */

//Getters

//Setters
