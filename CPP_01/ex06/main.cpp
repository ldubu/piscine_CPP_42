#include "Harl.hpp"

int	main(int ac, char** av)
{
	Harl	Karen;

	if (ac == 1)
		std::cout << "Missing parameter" << std::endl;

	else
		Karen.complain(av[1]);
	return (0);
}