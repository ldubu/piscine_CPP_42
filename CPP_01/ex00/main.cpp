#include "Zombie.hpp"

int main(void)
{
	Zombie *Etienne = newZombie("Etienne");

	Etienne->announce();
	delete Etienne;
	randomChump("Karl");
	return (0);
}