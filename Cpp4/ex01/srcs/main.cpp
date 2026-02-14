#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "===== CREATING DOGS AND CATS =====" << std::endl;
	Dog dog1;
	Dog dog2;
	Cat cat1;
	Cat cat2;

	std::cout << "\n===== TESTING BRAINS =====" << std::endl;
	dog1.getBrain()->setIdea(0, "Dog1 wants to play");
	dog1.getBrain()->setIdea(1, "Dog1 is hungry");

	dog2.getBrain()->setIdea(0, "Dog2 wants a walk");

	cat1.getBrain()->setIdea(0, "Cat1 wants cuddles");
	cat2.getBrain()->setIdea(0, "Cat2 wants fish");

	std::cout << "Dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog1 idea 1: " << dog1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog2 idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat1 idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== DEEP COPY TEST =====" << std::endl;
	Dog dogCopy(dog1);
	dogCopy.getBrain()->setIdea(0, "DogCopy has a new idea");

	std::cout << "Original Dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "DogCopy idea 0: " << dogCopy.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== MAKE SOUND TEST =====" << std::endl;
	dog1.makeSound();
	dog2.makeSound();
	cat1.makeSound();
	cat2.makeSound();

	return 0;
}

