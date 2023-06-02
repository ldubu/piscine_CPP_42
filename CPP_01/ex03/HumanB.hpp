#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name, std::string Weapon_type);
		void	attack();

	private:
		std::string m_name;
		Weapon		m_weapon;
};

#endif