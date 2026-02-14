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
Cat::Cat(): Animal()
{
	type = "Cat";
  brain = new Brain();
	std::cout <<"[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	brain = new Brain(*other.brain);
  std::cout << "[Cat] Copy constructor called" << std::endl;
}

//Overloaded Operator
Cat &Cat::operator=(const Cat &other)
{

	std::cout <<"[Cat] copy assigment operator called" << std::endl;
	if (this != &other)
  {
    Animal::operator=(other);
    *brain = *other.brain;
  }
	return (*this);
}

//Destructor
Cat::~Cat()
{
  delete brain;
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
Brain* Cat::getBrain() const
{
  return brain;
}
//Setters
