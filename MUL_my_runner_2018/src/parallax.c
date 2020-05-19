/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** parallax
*/

#include "my.h"

void parallax(window_t *win, parallax_t *plx)
{
	sfVector2f pos = {0,-275};

	plx->pos_base = sfSprite_getPosition(win->plx->floor->spr);
	plx->pos_one = sfSprite_getPosition(win->plx->treeone->spr);
	plx->pos_two = sfSprite_getPosition(win->plx->treetwo->spr);
	plx->pos_three = sfSprite_getPosition(win->plx->treethree->spr);
	if (plx->pos_base.x <= -1920) {
		sfSprite_setPosition(win->plx->floor->spr, pos);
		sfSprite_setPosition(win->plx->stone->spr, (sfVector2f){0,0});
	}
	if (plx->pos_one.x <= -1920)
		sfSprite_setPosition(win->plx->treeone->spr, (sfVector2f){0,0});
	if (plx->pos_two.x <= -1920)
		sfSprite_setPosition(win->plx->treetwo->spr, (sfVector2f){0,0});
	if (plx->pos_three.x <= -1920)
		sfSprite_setPosition(win->plx->treethree->spr, (sfVector2f){0,0});
	move_background(win);
}

void move_background(window_t *win)
{
	sfVector2f pos;

	pos = sfSprite_getPosition(win->mario->spr);
	sfSprite_move(win->plx->floor->spr, (sfVector2f){-3, 0});
	sfSprite_move(win->plx->stone->spr, (sfVector2f){-3, 0});
	sfSprite_move(win->plx->treethree->spr, (sfVector2f){-2, 0});
	sfSprite_move(win->plx->treetwo->spr, (sfVector2f){-1.5, 0});
	sfSprite_move(win->plx->treeone->spr, (sfVector2f){-1, 0});
	for (int i = 0; i < win->map->blc; i++) {
		sfSprite_move(win->map->blk[i]->spr, (sfVector2f){-3, 0});
	}
	for (int i = 0; i < win->map->trap; i++) {
		sfSprite_move(win->map->spk[i]->spr, (sfVector2f){-3, 0});
	}
	if (win->data->hit)
		sfSprite_move(win->mario->spr, (sfVector2f){-3, 0});
	else if (pos.x < 450)
		sfSprite_move(win->mario->spr, (sfVector2f){1.5, 0});
}

void set_frame(window_t *win)
{
	sfTime elapsed = sfClock_getElapsedTime(win->clock);
	int time = sfTime_asMilliseconds(elapsed);
	int left = 210;
	int width = 210;
	sfIntRect rect = (sfIntRect){0, 0, 210, 200};

	if (time > 75) {
		left *= win->data->frm;
		rect = (sfIntRect){left, 0, width, 200};
		sfSprite_setTextureRect(win->mario->spr, rect);
		if (win->data->frm == 11)
			win->data->frm = -1;
		win->data->frm++;
		sfClock_restart(win->clock);
	}
}

void move_jump(window_t *win)
{
	sfVector2f pos;

	pos = sfSprite_getPosition(win->mario->spr);
	if (pos.y <= win->ini.y - 150 && win->data->jump == 1)
		win->data->jump = 0;
}
