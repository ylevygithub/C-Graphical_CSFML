/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create, position and set the spikes(trap)
*/

#include "my.h"

void set_spike(map_t *map)
{
	sfVector2f pos = (sfVector2f){0,0};

	for (int i = 0; i < map->trap; i++) {
		map->spk[i] = malloc(sizeof(*map->spk[i]));
		map->spk[i] = set_sprite(map->spk[i], "img/spike.png", pos);
	}
}

void create_spike(map_t *map, int i, int y, int trap)
{
	sfVector2f pos;

	pos.x = (y + 1) * 100;
	pos.y = (i + 1) * 100 + 385;
	sfSprite_setPosition(map->spk[trap]->spr, pos);
}

int pos_spike(map_t *map, int i, int y, int trap)
{
	if (map->map[i][y] == '2') {
		create_spike(map, i, y, trap);
		trap++;
	}
	return (trap);
}

int check_trap(window_t *win)
{
	sfVector2f mro;
	sfVector2f pos;
	int hit = 0;

	mro = sfSprite_getPosition(win->mario->spr);
	if (mro.x < -300)
		return (1);
	for (int i = 0; i < win->map->trap; i++) {
		hit = 0;
		pos = sfSprite_getPosition(win->map->spk[i]->spr);
		if (pos.x > mro.x && pos.x < mro.x + 150)
			hit++;
		if (pos.y + 25 > mro.y && pos.y < mro.y + 200)
			hit++;
		if (hit == 2)
			return (1);
	}
	return (0);
}

void trap_maker(window_t *win, map_t *map)
{
	if (!win->data->dead)
		set_spike(win->map);
	for (int i = 0, trap = 0; i < 3; i++) {
		for (int y = 0; map->map[i][y] != '\0'; y++) {
			trap = pos_spike(win->map, i, y, trap);
		}
	}
}
