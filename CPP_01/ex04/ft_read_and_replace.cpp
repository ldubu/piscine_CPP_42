#include <iostream>
#include <fstream>
#include <string>

void	ft_read_and_replace(std::ifstream& file_input, std::ofstream& file_output, char** av)
{
	std::string			string_1 = av[2];
	std::string			string_2 = av[3];
	std::string			line;
	long unsigned int	i;
	int					last_replace;
	
	(void) file_output;

	while (std::getline (file_input, line))
	{
		i = 0;
		last_replace = 0;
		while (i < line.length())
		{
			if (line[i] == string_1[0])
			{
				if (!line.compare(i, string_1.length(), string_1))
				{
					file_output << line.substr(last_replace, i - last_replace) << string_2;
					last_replace = i  + string_1.length();
					i += string_1.length();
				}
				else
					i++;
			}
			else
				i++;
		}
		file_output << line.substr(last_replace, i - last_replace - 1) << "\n";
	}

}