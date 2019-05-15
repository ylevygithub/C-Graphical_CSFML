/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** sprite functions
*/

#include "../include/my.h"

sfText* set_txt_level(sfFont *font)
{
	sfText* lvl;

	lvl = sfText_create();
	sfText_setString(lvl, "lvl");
	sfText_setFont(lvl, font);
	sfText_setCharacterSize(lvl, 50);
	sfText_setPosition(lvl, (sfVector2f){30, 930});
	return (lvl);
}

sfText* set_nbr_level(sfFont *font)
{
	sfText* nbr;

	nbr = sfText_create();
	sfText_setString(nbr, "1");
	sfText_setFont(nbr, font);
	sfText_setCharacterSize(nbr, 100);
	sfText_setPosition(nbr, (sfVector2f){135, 880});
	return (nbr);
}

sfSprite* set_life_bar(sfTexture *heart)
{
	sfSprite* life_bar;

	life_bar = sfSprite_create();
	sfSprite_setTexture(life_bar, heart, sfTrue);
	sfSprite_setPosition(life_bar, (sfVector2f){805, 910});
	return (life_bar);
}

sfSprite* set_ammo_bar(sfTexture *ammo)
{
	sfSprite* ammo_bar;

	ammo_bar = sfSprite_create();
	sfSprite_setTexture(ammo_bar, ammo, sfTrue);
	sfSprite_setPosition(ammo_bar, (sfVector2f){1800, 850});
	return (ammo_bar);
}

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