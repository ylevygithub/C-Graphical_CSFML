/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** life, score, victory end of game and text
*/

#include "my.h"

sfText* score(sfFont *font)
{
	sfText* lvl;

	lvl = sfText_create();
	sfText_setString(lvl, "Score");
	sfText_setFont(lvl, font);
	sfText_setCharacterSize(lvl, 75);
	sfText_setPosition(lvl, (sfVector2f){30, 810});
	sfText_setColor(lvl, (sfColor){42, 42, 42, 255});
	return (lvl);
}

sfText* fin(sfFont *font)
{
	sfText* lvl;

	lvl = sfText_create();
	sfText_setString(lvl, "Victory");
	sfText_setFont(lvl, font);
	sfText_setCharacterSize(lvl, 200);
	sfText_setPosition(lvl, (sfVector2f){590, 50});
	sfText_setColor(lvl, (sfColor){178, 178, 178, 255});
	return (lvl);
}

sfText* level(sfFont *font)
{
	sfText* nbr;

	nbr = sfText_create();
	sfText_setString(nbr, "0");
	sfText_setFont(nbr, font);
	sfText_setCharacterSize(nbr, 100);
	sfText_setPosition(nbr, (sfVector2f){30, 880});
	sfText_setColor(nbr, (sfColor){42, 42, 42, 255});
	return (nbr);
}

void set_text(menu_t *menu)
{
	menu->font = sfFont_createFromFile("./font/mikado.OTF");
	menu->score = score(menu->font);
	menu->level = level(menu->font);
	menu->fin = fin(menu->font);
}

void set_life(menu_t *menu, int life)
{
	if (life == 0)
		sfSprite_setTexture(menu->life->spr, menu->life_zero, sfTrue);
	else if (life == 1)
		sfSprite_setTexture(menu->life->spr, menu->life_one, sfTrue);
	else if (life == 2)
		sfSprite_setTexture(menu->life->spr, menu->life_two, sfTrue);
	else if (life == 3)
		sfSprite_setTexture(menu->life->spr, menu->life_three, sfTrue);	
}