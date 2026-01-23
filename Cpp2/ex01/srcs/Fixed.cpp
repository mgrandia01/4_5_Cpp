#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_num = n << _bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_num = roundf(f* (1 << _bits));
}



Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_num = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

float Fixed::toFloat(void) const
{
	return (float)_num / (1 << _bits);
}

int	Fixed::toInt(void) const
{
	return _num >> _bits;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_num = other._num;
	return *this;
}

std::ostream& operator << (std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_num = raw;	
}

