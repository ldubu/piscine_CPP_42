#include "Zombie.hpp"

Zombie::Zombie() : m_name("Karl"){}

Zombie::Zombie(std::string name) : m_name(name){}

Zombie::~Zombie() 
{
	std::cout << m_name << " died unexpectably." << std::endl;
}

void	Zombie::announce (void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::change_name(std::string name)
{
	m_name = name;
}