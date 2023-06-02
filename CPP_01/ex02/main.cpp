#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "ADDRESSE :" << std::endl;
	std::cout << "String    - " << &str << std::endl;
	std::cout << "Pointeur  - " << ptr << std::endl;
	std::cout << "Reference - " << &ref << std::endl << std::endl;

	std::cout << "CONTENU :" << std::endl;
	std::cout << "String    - " << str << std::endl;
	std::cout << "Pointeur  - " << *ptr << std::endl;
	std::cout << "Reference - " << ref << std::endl << std::endl;

	return (0);
}