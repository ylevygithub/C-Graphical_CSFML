/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** score
*/

#include "my.h"

char *int_to_char(int nb)
{
	int i = nb;
	int size = 0;
	char *str = NULL;

	for (; i != 0; size++) i /= 10;
	str = malloc((size + 1) * sizeof(char));
	for (i = size - 1; i >= 0; i--, nb /= 10)
		str[i] = nb % 10 + '0';
	str[size] = '\0';
	return (str);
}

void set_score(menu_t *menu, int score)
{
	char *str = NULL;

	str = int_to_char(score);
	sfText_setString(menu->level, str);
	free(str);
}
