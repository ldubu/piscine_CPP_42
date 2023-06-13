#include "main.hpp"

void	display_resume_line(std::string str)
{
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	std::cout << std::setiosflags (std::ios::right);
	std::cout << str;
}

static	std::string	ft_ask_info(std::string Message)
{
	std::string info;
	do
	{
		std::cout<<Message;
		std::getline(std::cin, info);
	} while (info.empty());
	return (info);
}

static	void	ft_add(PhoneBook *Repertoire)
{
	std::string prenom;
	std::string nom;
	std::string surnom;
	std::string numero;
	std::string secret;
	
	std::cout<<"Adding a new contact in your PhoneBook5 !"<<std::endl;
	prenom = ft_ask_info("First name: ");
	nom = ft_ask_info("Last name: ");
	surnom = ft_ask_info("Nickname: ");
	numero = ft_ask_info("Phone number: "); 
	secret = ft_ask_info("Darkest secret: "); 
	
	Repertoire->new_contact(prenom, nom, surnom, numero, secret);
}

static int	ft_found_index(std::string str)
{
	if (str.size() > 1)
		return (-1);
	else if (str[0] >= '0' && str[0] <= '7')
		return (str[0] - 48);
	else
		return (-1);
}

static void	ft_search(PhoneBook *Repertoire)
{
	std::string	index;

	Repertoire->display_phonebook();
	do
	{
		std::cout<<"Which contact do you want to display ? (Number between 0 and 7): ";
		std::getline(std::cin, index);
	} while (ft_found_index(index) == -1);
	Repertoire->display_contact(ft_found_index(index));
}

int	main (void)
{
	PhoneBook Repertoire;

	std::string usr_cmd;
	std::cout<<"Welcome in your PhoneBook5 !! I'm your assistant for navigating this complexe system."<<std::endl;
	std::cout<<"You can use three commands :"<<std::endl;
	std::cout<<"	ADD (to add a new contact to your PhoneBook5)"<<std::endl;
	std::cout<<"	SEARCH (to display a resume of your contact and display the one of your choice)"<<std::endl;
	std::cout<<"	EXIT (to exit your PhoneBook5, destroy it and destroy me) (in terrible computer pain) (please don't use it TwT)"<<std::endl;
	do
	{
		std::cout<<"Enter your command: ";
		std::getline(std::cin, usr_cmd);
		if (std::cin.eof())
			break;
		if (!usr_cmd.compare("ADD"))
			ft_add(&Repertoire);
		else if (!usr_cmd.compare("SEARCH"))
			ft_search(&Repertoire);
	} while (usr_cmd.compare("EXIT"));
	return (0);

}