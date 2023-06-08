#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
		void	setWeapon(Weapon& new_weapon);

	private:
		std::string m_name;
		Weapon&		m_weapon;
};

#endif
