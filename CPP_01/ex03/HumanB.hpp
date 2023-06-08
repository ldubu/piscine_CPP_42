#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon& weapon);
		void	attack();
		void	setWeapon(Weapon& new_weapon);

	private:
		std::string m_name;
		Weapon*		m_weapon;
};

#endif