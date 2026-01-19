#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
class	Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
		void filter(std::string level);
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
		int	_getLevelIndex(const std::string &level);
};

#endif
