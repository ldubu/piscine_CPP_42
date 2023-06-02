#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		HumanA(std::string name, std::string Weapon_type);
		void	attack();

	private:
		std::string m_name;
		Weapon		m_weapon;
};

#endif