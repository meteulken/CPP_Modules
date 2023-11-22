#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j] != '\0')
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}