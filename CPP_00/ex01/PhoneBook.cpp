#include "main.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook() : m_tableau(), m_nbr_contact(0), m_older_contact(0){}

void	PhoneBook::new_contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string phonenumber, std::string darkest_secret)
		{
			int index;

			if (m_nbr_contact == 8)
			{
				index = m_older_contact;
				m_older_contact = (m_older_contact + 1) %  7;
			}
			else
			{
				index = m_nbr_contact;
				m_nbr_contact = m_nbr_contact + 1;
			}
			PhoneBook::m_tableau[index] = Contact(first_name, last_name, nickname, phonenumber, darkest_secret);
		}

void	PhoneBook::display_phonebook(void)
{
	std::string number[8] = {"0", "1", "2", "3", "4", "5", "6", "7"};
	for (int i = 0; i < PhoneBook::m_nbr_contact; i++)
	{
		display_resume_line("Contact " + number[i]);
		std::cout << "|";
		m_tableau[i].display_resume();
		std::cout << std::endl;
	}
}

void	PhoneBook::display_contact(int index)
{
	if (index >= m_nbr_contact)
		std::cout << "This contact didn't exist ! You're aren't very smart." << std::endl;
	else
		m_tableau[index].display_contact();
}