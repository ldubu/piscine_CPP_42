#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void	announce(void);
		void	change_name(std::string name);

	private:
		std::string	m_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif