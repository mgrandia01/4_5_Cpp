/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "===== BRAIN TEST =====" << std::endl;

  Dog dog1;
  dog1.getBrain()->setIdea(0, "I'm happy");
  dog1.getBrain()->setIdea(1, "I'm borred");

  std::cout << "Dog1 idea 0 = " << dog1.getBrain()->getIdea(0) << std::endl;
  std::cout << "Dog1 idea 1 = " << dog1.getBrain()->getIdea(1) << std::endl;
	
	std::cout << "===== COPY TEST =====" << std::endl;
  Dog dog2(dog1);
  std::cout << "Dog2 idea 0 = " << dog2.getBrain()->getIdea(0) << std::endl;
  dog1.getBrain()->setIdea(0, "I have a new Idea!");
  std::cout << "\n Dog2 modifier \n << std::endl";
  std::cout << "Dog2 idea 0 = " << dog2.getBrain()->getIdea(0) << std::endl;
  return 0;
}

