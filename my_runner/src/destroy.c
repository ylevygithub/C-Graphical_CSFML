/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** destroy and free
*/

#include "my.h"

void free_map(map_t *map)
{
	for (int i = 0; i < 3; i++)
		free(map->map[i]);
	free(map->map);
	for (int i = 0; i < map->blc; i++)
		free(map->blk[i]);
	free(map->blk);
	for (int i = 0; i < map->trap; i++)
		free(map->spk[i]);
	free(map->spk);
	free(map);
}

void free_all(window_t *win)
{
	free(win->plx->stone);
	free(win->plx->floor);
	free(win->plx->treeone);
	free(win->plx->treetwo);
	free(win->plx->treethree);
	free(win->plx->moon);
	free(win->plx->sky);
	free(win->menu->play);
	free(win->menu->exit);
	free(win->menu->life);
	free(win->mario);
	free(win->blood);
	free(win->data);
	free(win->menu);
	free(win->plx);
	free_map(win->map);
}

void destroy_win(window_t *win)
{
	sfTexture_destroy(win->plx->stone->tex);
	sfSprite_destroy(win->plx->stone->spr);
	sfTexture_destroy(win->plx->floor->tex);
	sfSprite_destroy(win->plx->floor->spr);
	sfTexture_destroy(win->plx->treeone->tex);
	sfSprite_destroy(win->plx->treeone->spr);
	sfTexture_destroy(win->plx->treetwo->tex);
	sfSprite_destroy(win->plx->treetwo->spr);
	sfTexture_destroy(win->plx->treethree->tex);
	sfSprite_destroy(win->plx->treethree->spr);
	sfTexture_destroy(win->plx->sky->tex);
	sfSprite_destroy(win->plx->sky->spr);
	sfTexture_destroy(win->plx->moon->tex);
	sfSprite_destroy(win->plx->moon->spr);
	sfRenderWindow_destroy(win->window);
}

void destroy_life(window_t *win)
{
	sfTexture_destroy(win->menu->life_two);
	sfTexture_destroy(win->menu->life_one);
	sfTexture_destroy(win->menu->life_zero);
	sfTexture_destroy(win->menu->life_three);
	sfTexture_destroy(win->menu->life->tex);
	sfSprite_destroy(win->menu->life->spr);
	sfFont_destroy(win->menu->font);
	sfText_destroy(win->menu->score);
	sfText_destroy(win->menu->level);
	sfText_destroy(win->menu->fin);
	sfSound_destroy(win->menu->sound);
	sfSoundBuffer_destroy(win->menu->sound_buffer);
}

void destroy_menu(window_t *win)
{
	sfClock_destroy(win->clock);
	for (int i = 0; i < win->map->blc; i++) {
		sfTexture_destroy(win->map->blk[i]->tex);
		sfSprite_destroy(win->map->blk[i]->spr);
	}
	for (int i = 0; i < win->map->trap; i++) {
		sfTexture_destroy(win->map->spk[i]->tex);
		sfSprite_destroy(win->map->spk[i]->spr);
	}
	sfTexture_destroy(win->menu->playp);
	sfTexture_destroy(win->menu->exitp);
	sfTexture_destroy(win->menu->play->tex);
	sfSprite_destroy(win->menu->play->spr);
	sfTexture_destroy(win->menu->exit->tex);
	sfSprite_destroy(win->menu->exit->spr);
	sfTexture_destroy(win->mario->tex);
	sfSprite_destroy(win->mario->spr);
	sfTexture_destroy(win->blood->tex);
	sfSprite_destroy(win->blood->spr);
	destroy_life(win);
}
