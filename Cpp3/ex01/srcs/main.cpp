#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Marta");
	ClapTrap b("Berta");
	ClapTrap c("Nono");

	a.attack("Bob");
	b.attack("Alice");
	c.attack("Juan");


	a.takeDamage(2);
	b.takeDamage(3);
	c.takeDamage(11);

	a.beRepaired(2);
	b.beRepaired(20);
	c.beRepaired(5);



	return (0);
}
