/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** gravity checks
*/

#include "my.h"

int check_ceiling(window_t *win)
{
	sfVector2f mro;
	sfVector2f pos;
	int check = 0;

	mro = sfSprite_getPosition(win->mario->spr);
	for (int i = 0; i < win->map->blc; i++) {
		check = 0;
		pos = sfSprite_getPosition(win->map->blk[i]->spr);
		if (pos.y + 100 > mro.y && pos.y + 100 < mro.y + 100)
			check++;
		if (pos.x > mro.x && pos.x < mro.x + 210)
			check++;
		if (check == 2) {
			return (1);
		}
	}
	return (0);
}

int check_hit(window_t *win)
{
	sfVector2f mro;
	sfVector2f pos;
	int hit = 0;

	mro = sfSprite_getPosition(win->mario->spr);
	for (int i = 0; i < win->map->blc; i++) {
		hit = 0;
		pos = sfSprite_getPosition(win->map->blk[i]->spr);
		if (pos.x > mro.x && pos.x < mro.x + 210)
			hit++;
		if (pos.y > mro.y && pos.y < mro.y + 200)
			hit++;
		if (hit == 2 || check_ceiling(win) == 1) {
			return (1);
		}
	}
	win->data->hit = 0;
	return (0);
}

int check_block(window_t *win, sfVector2f mro)
{
	sfVector2f pos;
	int gv = 0;

	for (int i = 0; i < win->map->blc; i++) {
		pos = sfSprite_getPosition(win->map->blk[i]->spr);
		if (pos.x >= mro.x && pos.x <= mro.x + 200)
			gv++;
		if (pos.y >= mro.y + 195 && pos.y <= mro.y + 205)
			gv++;
		if (gv == 2)
			return (0);
		else
		        gv = 0;
	}
	return (1);
}

void set_gravity(window_t *win)
{
	int gv = win->data->gravity;
	static float sp = 0.5;
	sfVector2f mro;

	mro = sfSprite_getPosition(win->mario->spr);
	gv = check_block(win, mro);
	if (mro.y >= 590) {
		sp = 0;
		gv = 0;
	}
	if (mro.y >= 700)
		sfSprite_setPosition(win->mario->spr, (sfVector2f){-100,590});
	if (gv) {
		sfSprite_move(win->mario->spr, (sfVector2f){0, sp});
		sp += 0.05;
	}
	if (sp > 9.5)
		sp = 9;
	win->data->gravity = gv;
}
