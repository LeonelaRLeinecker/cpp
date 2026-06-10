#include <iostream>
#include <cctype>
#include <string>


int	main(int argc, char **argv)
{
	int 		i;
	int 		j;
	std::string 	aux;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				aux.push_back(toupper(argv[i][j]));
			}
		}
		std::cout << aux << std::endl;
	}
	return 0;
}

