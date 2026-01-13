#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::Zombie()
{
	//std::cout<< "Zombie object" << _name << "created" << std::endl;
}


Zombie::~Zombie()
{
	std::cout<< "Destructor called for" << _name << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
