#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		const	std::string &getType();
		void	setType(std::string new_type);

	private:
		std::string	m_type;
};

#endif