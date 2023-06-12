#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string level_option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::* threats[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = -1;

	while (++i < 4)
	{
		if (level == level_option[i])
			break;
	}
	switch (i) {
		case 0 :
			Harl::debug();
		case 1 :
			Harl::info();
		case 2 :
			Harl::warning();
		case 3 :
			Harl::error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant stuff ]";
			std::cout << std::endl;
			break ;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}