#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string phonenumber, std::string darkest_secret);
		void	display_contact(void);
		void	display_resume(void);

	private:
		std::string	m_first_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_phone_number;
		std::string m_darkest_secret;
};

#endif