/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** block and platform
*/

#include "my.h"

void create_sprite(map_t *map)
{
	sfVector2f pos = (sfVector2f){0,0};

	for (int i = 0; i < map->blc; i++) {
		map->blk[i] = malloc(sizeof(*map->blk[i]));
		map->blk[i] = set_sprite(map->blk[i], "img/block.png", pos);
	}
}

void create_block(map_t *map, int i, int y, int blc)
{
	sfVector2f pos;

	pos.x = (y + 1) * 100;
	pos.y = (i + 1) * 100 + 385;
	sfSprite_setPosition(map->blk[blc]->spr, pos);
}

int pos_sprite(map_t *map, int i, int y, int blc)
{
	sfVector2f pos;

	if (map->map[i][y] == '1') {
		create_block(map, i, y, blc);
		blc++;
	}
	else if (map->map[i][y] == 'x') {
		pos.x = (y + 1) * 100;
		pos.y = (i + 1) * 100 + 385;
		map->flag = pos;
	}
	return (blc);
}

void platform_maker(window_t *win, map_t *map)
{
	int blc = 0;
	if (!win->data->dead)
		create_sprite(win->map);
	for (int i = 0; i < 3; i++) {
		for (int y = 0; map->map[i][y] != '\0'; y++) {
			blc = pos_sprite(win->map, i, y, blc);
		}
	}
}