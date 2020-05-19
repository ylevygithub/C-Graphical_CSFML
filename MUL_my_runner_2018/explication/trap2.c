/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create, position and set the spikes(trap)
*/

#include "my.h"

void set_spike(map_t *map)
{
	sfVector2f pos = (sfVector2f){0,0};//declaration de pos a une position 0.

	for (int i = 0; i < map->trap; i++) {//pour int i valant 0, tant qu il est inferieur au nbr de trap, on incremente.
		map->spk[i] = malloc(sizeof(*map->spk[i]));//on malloc la taille d'une trap reel pour le jeu
		map->spk[i] = set_sprite(map->spk[i], "img/spike.png", pos);//on donne une image materialisant le bloc et on lui donne une position.
	}
}

void create_spike(map_t *map, int i, int y, int trap)
{
	sfVector2f pos;//on declare pos sans lui donner de valeur.

	pos.x = (y + 1) * 100;
	pos.y = (i + 1) * 100 + 385;
	sfSprite_setPosition(map->spk[trap]->spr, pos);//on assigne la position de la trap.
}

int pos_spike(map_t *map, int i, int y, int trap)
{
	if (map->map[i][y] == '2') {//si le buffer tombe sur un '2'
		create_spike(map, i, y, trap);//on cree une trap dans le jeu en lui assignant la meme position que celle dans map.txt
		trap++;//une trap en plus a mettre dans les donnees de la structure map.
	}
	return (trap);//mtnt qu on a les nouvelles infos sur trap on renvoie trap pour que la structure qui contient trap se mette a jour.
}

int check_trap(window_t *win)
{//on met la position du player et la positions des traps par rapport a la position du player
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
	if (!win->data->dead)//si on est pas dead
		set_spike(win->map);//on cree la trap en le materialisant par une image.
	for (int i = 0, trap = 0; i < 3; i++) {//pour i valant 0, tant que i < 3, on incremente i.
		for (int y = 0; map->map[i][y] != '\0'; y++) {//pour y valant 0, tant qu on est pas arriver a la fin du buffer, y++;
			trap = pos_spike(win->map, i, y, trap);//regarder les explication de la fonction au dessus.
		}
	}
}
