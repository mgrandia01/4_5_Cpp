#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed(const int n);//convierte el entero a punto fijo
		Fixed(const float f); //convierte el flotante a punto fijo

		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		
		Fixed& operator=(const Fixed& other);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
	private:
		int _num;
		static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& os,const Fixed& obj);
#endif
