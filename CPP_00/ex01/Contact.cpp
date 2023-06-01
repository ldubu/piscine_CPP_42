#include "main.hpp"

Contact::Contact()
{
	m_first_name = "a";
	m_last_name = "b";
	m_nickname = "c";
	m_phone_number = "d";
	m_darkest_secret = "e";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string phonenumber, std::string darkest_secret)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_phone_number = phonenumber;
	m_darkest_secret = darkest_secret;
}

// Contact::~Contact(){}

static std::string	redux_str(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::display_resume()
{
	display_resume_line(redux_str(m_first_name));
	std::cout << "|";
	display_resume_line(redux_str(m_last_name));
	std::cout << "|";
	display_resume_line(redux_str(m_nickname));
}

void	Contact::display_contact()
{
	std::cout << m_first_name << std::endl;
	std::cout << m_last_name << std::endl;
	std::cout << m_nickname<< std::endl;
	std::cout << m_phone_number << std::endl;
	std::cout << m_darkest_secret << std::endl;
}