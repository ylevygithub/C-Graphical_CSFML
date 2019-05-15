/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** set_sprite functions
*/

#include "../include/my.h"

void set_sprite(t_all *all)
{
	all->bird = sfTexture_createFromFile("img/duck.png", NULL);
	all->heart = sfTexture_createFromFile("img/heart5r.png", NULL);
	all->bullet = sfTexture_createFromFile("img/ammo3.png", NULL);
	all->fly = sfSprite_create();
	sfSprite_setTexture(all->fly, all->bird, sfTrue);
	all->txt_level = set_txt_level(all->font);
	all->nbr_level = set_nbr_level(all->font);
	all->life_bar = set_life_bar(all->heart);
	all->ammo_bar = set_ammo_bar(all->bullet);
}

void set_button(t_menu *menu)
{
	menu->play_btn = sfTexture_createFromFile("img/play.png", NULL);
	menu->play = sfSprite_create();
	sfSprite_setTexture(menu->play, menu->play_btn, sfTrue);
	sfSprite_setPosition(menu->play, (sfVector2f){600, 375});
	menu->exit_btn = sfTexture_createFromFile("img/exit.png", NULL);
	menu->exit = sfSprite_create();
	sfSprite_setTexture(menu->exit, menu->exit_btn, sfTrue);
	sfSprite_setPosition(menu->exit, (sfVector2f){900, 495});
}

void set_life(t_window *win, int life)
{
	sfTexture* font;

	if (life == 5)
		font = sfTexture_createFromFile("img/heart5r.png", NULL);
	else if (life == 4)
		font = sfTexture_createFromFile("img/heart4r.png", NULL);
	else if (life == 3)
		font = sfTexture_createFromFile("img/heart3r.png", NULL);
	else if (life == 2)
		font = sfTexture_createFromFile("img/heart2r.png", NULL);
	else if (life == 1)
		font = sfTexture_createFromFile("img/heart1r.png", NULL);
	else if (life == 0)
		font = sfTexture_createFromFile("img/heart0r.png", NULL);
	sfSprite_setTexture(win->all->life_bar, font, sfTrue);
}

void set_ammo(t_window *win, int ammo)
{
	sfTexture* texture;

	if (ammo == 3)
		texture = sfTexture_createFromFile("img/ammo3.png", NULL);
	else if (ammo == 2)
		texture = sfTexture_createFromFile("img/ammo2.png", NULL);
	else if (ammo == 1)
		texture = sfTexture_createFromFile("img/ammo1.png", NULL);
	else if (ammo == 0)
		texture = sfTexture_createFromFile("img/ammo0.png", NULL);
	sfSprite_setTexture(win->all->ammo_bar, texture, sfTrue);
}

void set_lvl(sfText* text, int lvl)
{
	char *str = NULL;

	str = int_to_char(lvl);
	sfText_setString(text, str);
	free(str);
}
