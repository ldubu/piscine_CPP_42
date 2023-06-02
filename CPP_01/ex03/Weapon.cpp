#include "Weapon.hpp"

Weapon::Weapon() : m_type("stick"){}

Weapon::Weapon(std::string type) : m_type(type){}

const std::string&	Weapon::getType()
{
	return (&m_type);
}

void	Weapon::setType(std::string new_type)
{
	m_type = new_type;
}