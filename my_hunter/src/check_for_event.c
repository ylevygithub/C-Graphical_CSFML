/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** event functions
*/

#include "../include/my.h"

void check_hit(t_window *win, sfEvent evt)
{
	int hit = 0;
	int x = evt.mouseButton.x;
	int y = evt.mouseButton.y;
	sfVector2f pos = sfSprite_getPosition(win->all->fly);

	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		if (x >= pos.x && x <= pos.x + 150)
			hit++;
		if (y >= pos.y && y <= pos.y + 150)
			hit++;
	}
	if (hit == 2)
		win->data->hit = 1;
	else {
		win->data->hit = 0;
		win->data->ammo--;
	}
}

void check_play(t_window *win, sfEvent evt)
{
	int play = 0;
	int x = evt.mouseButton.x;
	int y = evt.mouseButton.y;
	sfVector2f pos = sfSprite_getPosition(win->menu->play);

	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		if (x >= pos.x && x <= pos.x + 230)
			play++;
		if (y >= pos.y && y <= pos.y + 100)
			play++;
	}
	if (play == 2) {
		win->data->start = 1;
		win->landscape = sfTexture_createFromFile("img/front.jpg", NULL);
		sfSprite_setTexture(win->background, win->landscape, sfTrue);
		initial_settings(win);
	} else
		win->data->start = 0;
}

int check_exit(t_window *win, sfEvent evt)
{
	int exit = 0;
	int x = evt.mouseButton.x;
	int y = evt.mouseButton.y;
	sfVector2f pos = sfSprite_getPosition(win->menu->exit);

	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		if (x >= pos.x && x <= pos.x + 230)
			exit++;
		if (y >= pos.y && y <= pos.y + 100)
			exit++;
	}
	if (exit == 2)
		return (1);
	else
		return (0);
}
