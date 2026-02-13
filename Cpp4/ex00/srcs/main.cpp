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
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "===== HEAP OBJECTS TEST =====" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n===== STACK OBJECTS TEST =====" << std::endl;
	Dog dog;
	Cat cat;
	dog.makeSound();
	cat.makeSound();

	std::cout << "\n===== COPY CONSTRUCTOR TEST =====" << std::endl;
	Cat original;
	Cat copy(original);
	std::cout << "Original type: " << original.getType() << std::endl;
	std::cout << "Copy type: " << copy.getType() << std::endl;

	std::cout << "\n===== ASSIGNMENT OPERATOR TEST =====" << std::endl;
	Dog d1;
	Dog d2;
	d2 = d1;
	std::cout << "d1 type: " << d1.getType() << std::endl;
	std::cout << "d2 type: " << d2.getType() << std::endl;

	std::cout << "\n=====  WRONG TEST =====\n" << std::endl;

	std::cout << "===== HEAP OBJECTS TEST =====" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();

	std::cout << wrongi->getType() << std::endl;

	wrongi->makeSound();
	wrongmeta->makeSound();

	delete wrongmeta;
	delete wrongi;

	std::cout << "\n===== STACK OBJECTS TEST =====" << std::endl;
	WrongCat wrongcat;
	wrongcat.makeSound();

	return 0;
}

