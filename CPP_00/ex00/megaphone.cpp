#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string	Scream;
	std::string	Temporaire;

	if (ac == 1)
		Scream = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			Temporaire = std::string(av[i]);
			for (int y = 0; y < int(Temporaire.size()); y++)
				Scream.append(1, std::toupper(Temporaire[y]));
			Scream.append(" ");
		}
	}
	std::cout<<Scream<<std::endl;
	return (0);
}