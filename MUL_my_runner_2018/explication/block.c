/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** block and platform
*/

#include "my.h"

void create_sprite(map_t *map)
{
	sfVector2f pos = (sfVector2f){0,0};//declaration de pos a une position 0.

	for (int i = 0; i < map->blc; i++) {//pour int i valant 0, tant qu il est inferieur au nbr de bloc, on incremente.
		map->blk[i] = malloc(sizeof(*map->blk[i]));//on malloc la taille d'1 bloc reel pour le jeu
		map->blk[i] = set_sprite(map->blk[i], "img/block.png", pos);//on donne une image materialisant le bloc et on lui donne une position.
	}
}

void create_block(map_t *map, int i, int y, int blc)
{
	sfVector2f pos;//on declare pos sans lui donner de valeur.

	pos.x = (y + 1) * 100;
	pos.y = (i + 1) * 100 + 385;
	sfSprite_setPosition(map->blk[blc]->spr, pos);//on assigne la position du bloc.
}

int pos_sprite(map_t *map, int i, int y, int blc)
{
	sfVector2f pos;//on declare pos sans lui donner de valeur.

	if (map->map[i][y] == '1') {//si le buffer tombe sur un '1'
		create_block(map, i, y, blc);//on cree un bloc dans le jeu en lui assignant la meme position que celle dans map.txt
		blc++;//un bloc en plus a mettre dans les donnees de la structure map.
	}
	else if (map->map[i][y] == 'x') {//si le buffer tombe sur un 'x'
		pos.x = (y + 1) * 100;
		pos.y = (i + 1) * 100 + 385;
		map->flag = pos;//on assigne la position des drapeaux de fin de jeu a 'x' dans map.txt
	}
	return (blc);//mtnt qu on a les nouvelles infos sur blc on renvoie blc pour que la structure qui contient blc se mette a jour.
}

void platform_maker(window_t *win, map_t *map)
{
	int blc = 0;//variable boc initialiser a 0
	if (!win->data->dead)//si on est pas dead
		create_sprite(win->map);//on cree le block en le materialisant par une image.
	for (int i = 0; i < 3; i++) {//pour i valant 0, tant que i < 3, on incremente i.
		for (int y = 0; map->map[i][y] != '\0'; y++) {//pour y valant 0, tant qu on est pas arriver a la fin du buffer, y++;
			blc = pos_sprite(win->map, i, y, blc);//regarder les explication de la fonction au dessus.
		}
	}
}