/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** drawing the game
*/

#include "my.h"

void render_game(window_t *win, parallax_t *plx, map_t *map)
{
	sfRenderWindow_drawSprite(win->window, plx->moon->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->sky->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treeone->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treetwo->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treethree->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->stone->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->floor->spr, NULL);
	for (int i = 0; i < win->map->blc; i++)
		sfRenderWindow_drawSprite(win->window, map->blk[i]->spr, NULL);
	for (int i = 0; i < win->map->trap; i++)
		sfRenderWindow_drawSprite(win->window, map->spk[i]->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->mario->spr, NULL);
	if (win->data->dead)
		sfRenderWindow_drawSprite(win->window, win->blood->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->life->spr, NULL);
	sfRenderWindow_drawText(win->window, win->menu->score, NULL);
	sfRenderWindow_drawText(win->window, win->menu->level, NULL);
	if (win->data->end || win->data->win)
		sfRenderWindow_drawText(win->window, win->menu->fin, NULL);
	sfRenderWindow_display(win->window);
}

void render_menu(window_t *win, parallax_t *plx, map_t *map)
{
	sfRenderWindow_drawSprite(win->window, plx->moon->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->sky->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treeone->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treetwo->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->treethree->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->stone->spr, NULL);
	sfRenderWindow_drawSprite(win->window, plx->floor->spr, NULL);
	for (int i = 0; i < win->map->blc; i++)
		sfRenderWindow_drawSprite(win->window, map->blk[i]->spr, NULL);
	for (int i = 0; i < win->map->trap; i++)
		sfRenderWindow_drawSprite(win->window, map->spk[i]->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->play->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->exit->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->life->spr, NULL);
	sfRenderWindow_drawSprite(win->window, win->mario->spr, NULL);
	sfRenderWindow_drawText(win->window, win->menu->score, NULL);
	sfRenderWindow_drawText(win->window, win->menu->level, NULL);
	if (win->data->end || win->data->win)
		sfRenderWindow_drawText(win->window, win->menu->fin, NULL);
	sfRenderWindow_display(win->window);
}
