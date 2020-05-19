/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** power of the trap
*/

#include "my.h"

void play_again(window_t *win)
{
	win->data->jump = 0;
	sfSprite_setPosition(win->mario->spr, (sfVector2f){-170,440});
	platform_maker(win, win->map);
	trap_maker(win, win->map);
	win->data->dead = 0;
	win->data->size = 0;
}

void game_stop(window_t *win)
{
	win->data->end = 1;
	win->data->start = 0;
	win->data->life = 3;
	win->data->score = 0;
	win->data->jump = 0;
	sfSprite_setPosition(win->mario->spr, (sfVector2f){-170,440});
	platform_maker(win, win->map);
	trap_maker(win, win->map);
	win->data->dead = 0;
	win->data->size = 0;
}

void set_frame_blood(window_t *win)
{
	sfTime elapsed = sfClock_getElapsedTime(win->clock);
	int time = sfTime_asMilliseconds(elapsed);
	int left = 200;
	int width = 200;
	sfIntRect rect = (sfIntRect){0, 0, 200, 200};
	int frame = win->data->frm;

	if (time > 100) {
		left *= frame;
		rect = (sfIntRect){left, 0, width, 200};
		sfSprite_setTextureRect(win->blood->spr, rect);
		if (frame == 5 && !win->data->end)
		        play_again(win);
		else if (frame == 5)
			game_stop(win);
		win->data->frm = ++frame;
		sfClock_restart(win->clock);
	}
}

void set_death(window_t *win)
{
	sfVector2f pos;

	win->data->size = 0;
	win->data->frm = 0;
	win->data->score = 0;
	pos = sfSprite_getPosition(win->mario->spr);
	sfSprite_setPosition(win->blood->spr, pos);
	if (win->data->life > 1)
		win->data->life--;
	else {
		sfText_setPosition(win->menu->fin, (sfVector2f){500, 50});
		sfText_setString(win->menu->fin, "Game Over");
		win->data->life--;
		win->data->end = 1;
	}
	set_life(win->menu, win->data->life);
}

