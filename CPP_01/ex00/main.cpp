#include "Zombie.hpp"

int main(void)
{
	Zombie *Etienne = newZombie("Etienne");

	std::cout << "Etienne was created in newZombie, he now announce himself \
in the main function of the programme" << std::endl;
	Etienne->announce();
	std::cout << "We don't need Etienne anymore so I will free it in \
the main function of the programme" << std::endl;
	delete Etienne;
	std::cout << "We will call randomChump which will create Karl and he will \
announce himself in the randomChump function" << std::endl;
	randomChump("Karl");
	std::cout << "At the end of the fonction, Karl died due to the fact he was \
allocated on the stack by randomChump" << std::endl;
	return (0);
}