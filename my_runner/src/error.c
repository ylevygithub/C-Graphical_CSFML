/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** error
*/

#include "my.h"


int error_file(char **av)
{
	int file = 0;

	file = open(av[1], O_RDONLY);
	if (file != -1) {
		close(file);
		return (0);
	} else {
		write(2, "The file doesn't exist\n", 23);
		return (1);
	}
}

int error_arg(int ac)
{
	if (ac != 2) {
		write(2, "Wrong format, please use : /my_runner [map]\n", 45);
		return (1);
	} else
		return (0);
}

int usage(char **av, int ac)
{
	char *str;

	if (ac != 2)
		return (0);
	str = av[1];
	if (str[0] == '-' && str[1] == 'h') {
		write(1, "USAGE\n\t./my_runner map.txt\n\n", 28);
		write(1, "OPTIONS\n", 8);
		write(1, "\t-i          launch the game in infinity mode.\n", 47);
		write(1, "\t-h          print the usage and quit.\n\n", 40);
		write(1, "USER INTERACTIONS\n", 18);
		write(1, "\tSPACE_KEY   jump.\n", 19);
		return (1);
	}
	else
		return (0);
}

int error(char **av, int ac)
{
	if (error_arg(ac))
		return (1);
	else if (error_file(av))
		return (1);
	else
		return (0);
}
