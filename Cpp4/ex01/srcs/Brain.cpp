/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

/* ************************************************************************** */

// Constructors
Brain::Brain() 
{
  std::cout <<"[Brain] Default constructor called" << std::endl;
  for (int i = 0; i<100; i++)
    ideas[i]="empty";
}

Brain::Brain(const Brain &other)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = other;
}

//Overloaded Operator
Brain &Brain::operator=(const Brain &other)
{

	std::cout <<"[Brain] copy assigment operator called" << std::endl;
	if (this != &other)
  {
    for(int i=0; i<100; i++)
      ideas[i] = other.ideas[i];

  }
	return (*this);
}

//Destructor
Brain::~Brain()
{
	std::cout <<"[Brain] Destructor called" << std::endl;
}

/* ************************************************************************** */

//Public Methods
/* ************************************************************************** */

//Getters
std::string Brain::getIdea(int index) const
{
  if (index >= 0 && index < 100)
    return ideas[index];
  return "";
}

//Setters
void Brain::setIdea(int index, const std::string &idea)
{
  if(index >= 0 && index < 100)
    this->ideas[index] = idea;
}




