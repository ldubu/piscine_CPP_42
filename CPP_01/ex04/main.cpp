#include <iostream>
#include <fstream>
#include <string>

void	ft_read_and_replace(std::ifstream& f_input, std::ofstream& f_output, char** av);

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "./sed filename string_1 string_2" << std::endl;
	else
	{
		std::ifstream	file_input;
		std::ofstream	file_output;
		std::string		filename = av[1];
		std::string		filename_replace = filename + ".replace";

		file_input.open(filename.c_str());
		if (file_input.is_open())
		{
			file_output.open(filename_replace.c_str());
			if (file_output.is_open())
			{
				ft_read_and_replace(file_input, file_output, av);
				file_output.close();
			}
			else
				std::cout << filename << "failed to create." << std::endl;
			file_input.close();	
		}
		else
			std::cout << filename << "failed to open." << std::endl;
		return (0);
	}
		
}