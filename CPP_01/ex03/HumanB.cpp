#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() : m_name("Sebastien"){}

HumanB::HumanB(std::string name) : m_name(name), m_weapon(NULL){}

HumanB::HumanB(std::string name, Weapon& weapon) : m_name(name)
{
	m_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	m_weapon = &new_weapon;
}