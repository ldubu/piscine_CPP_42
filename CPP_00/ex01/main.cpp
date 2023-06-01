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
		std::cin>>info;
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
	
	std::cout<<"Ajout d'un nouveau contact dans votre PhoneBook5 !"<<std::endl;
	prenom = ft_ask_info("Prenom: ");
	nom = ft_ask_info("Nom de famille: ");
	surnom = ft_ask_info("Surnom: ");
	numero = ft_ask_info("Numero de telephone: "); 
	secret = ft_ask_info("Plus sombre secret: "); 
	
	Repertoire->new_contact(prenom, nom, surnom, numero, secret);
}

static void	ft_search(PhoneBook *Repertoire)
{
	int	index = -1;

	Repertoire->display_phonebook();
	do
	{
		std::cout<<"Quel contact souhaitez-vous affichez ? (Chiffre entre 0 et 7): ";
		std::cin>>index;
	} while (index < 0 && index > 7);
	Repertoire->display_contact(index);
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
		std::cin>>usr_cmd;
		if (!usr_cmd.compare("ADD"))
			ft_add(&Repertoire);
		else if (!usr_cmd.compare("SEARCH"))
			ft_search(&Repertoire);
	} while (usr_cmd.compare("EXIT"));
	return (0);

}