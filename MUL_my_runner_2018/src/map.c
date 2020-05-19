/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** map
*/

#include "my.h"

void get_nb(map_t *map, char *str)
{
	int blc = map->blc;
	int trap = map->trap;

	for (int i = 0; str[i] != '\n'; i++) {
		if (str[i] == '1')
			blc++;
		else if (str[i] == '2')
			trap++;
	}
	map->blc = blc;
	map->trap = trap;
}

void create_map(map_t *map, char *filename)
{
	FILE *fp;
	size_t len = 0;

	fp = fopen(filename, "r");
	for (int i = 0; i < 3; i++) {
		map->map[i] = NULL;
		getline(&map->map[i], &len, fp);
		get_nb(map, map->map[i]);
	}
	fclose(fp);
}

map_t *set_map(map_t *map, char *filename)
{
	map = malloc(sizeof(*map));
	map->map = malloc(sizeof(char *));
	map->blc = 0;
	map->trap = 0;
	create_map(map, filename);
	map->blk = malloc(sizeof(**map->blk) * map->blc);
	map->spk = malloc(sizeof(**map->spk) * map->trap);
	return (map);
}