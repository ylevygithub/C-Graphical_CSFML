/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** bird functions
*/

#include "../include/my.h"

void set_bird_frame(t_window *win)
{
	sfTime elapsed = sfClock_getElapsedTime(win->clock_bird);
	int time = sfTime_asMilliseconds(elapsed);
	int left = 120;
	int width = 100;

	if (time > win->data->time_bird) {
		left *= win->data->lvl_bird;
		sfSprite_setTextureRect(win->all->fly,
					(sfIntRect){left, 0, width, 120});
		if (win->data->lvl_bird == 12)
			win->data->lvl_bird = -1;
		win->data->lvl_bird++;
		sfClock_restart(win->clock_bird);
	}
}

void bird_hit(t_window *win)
{
	int y = rand() % 650 + 1;

	sfSprite_setPosition(win->all->fly, (sfVector2f){0, y});
	win->data->size = 0;
	win->data->hit = 0;
	win->data->speed += 0.1;
	win->data->lvl++;
	win->data->ammo = 3;
}

void bird_esc(t_window *win)
{
	int y = rand() % 650 + 1;

	sfSprite_setPosition(win->all->fly, (sfVector2f){0, y});
	win->data->size = 0;
	win->data->life--;
	win->data->esc = 0;
	win->data->ammo = 3;
}
