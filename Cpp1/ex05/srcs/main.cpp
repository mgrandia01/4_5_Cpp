#include <iostream>
#include "../includes/Harl.hpp"

int	main()
{
	Harl h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("NO_EXIT");

	return (0);	
}
