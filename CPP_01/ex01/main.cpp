#include "Zombie.hpp"

int main(void)
{
	int 		N = 5;
	std::string	name = "Etienne";

	Zombie *Army = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		Army[i].announce();

	delete [] Army;
	return (0);
}