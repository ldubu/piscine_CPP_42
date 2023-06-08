#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon){}

void HumanA::attack()
{
	std::string arme = m_weapon.getType();
	std::cout << m_name << " attacks with their " << arme << std::endl;
}

void HumanA::setWeapon(Weapon& new_weapon)
{
	m_weapon = new_weapon;
}