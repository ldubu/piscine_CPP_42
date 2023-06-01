#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>

# include "Contact.hpp"

class PhoneBook 
{
	public:
		PhoneBook();
		// ~PhoneBook();
		void	new_contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string phonenumber, std::string darkest_secret);
		void	display_phonebook(void);
		void	display_contact(int index);

	private:
		Contact	m_tableau[8];
		int		m_nbr_contact;
		int		m_older_contact;
};

#endif