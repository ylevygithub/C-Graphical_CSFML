/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** map
*/

#include "my.h"

void get_nb(map_t *map, char *str)
{
	int blc = map->blc;//on va remplir les donnees du jeu, combien y aura t il de blocs.
	int trap = map->trap;//on va remplir les donnees du jeu, combien y aura t il de trap.

	for (int i = 0; str[i] != '\n'; i++) {//pour int i valant 0, tant qu il n est pas arrivé en fin de ligne, on l incremente.
		if (str[i] == '1')//si il y a un 1 dans map.txt, il y a un bloc de plus.
			blc++;
		else if (str[i] == '2')//si il y a un 2 dans map.txt, il y a une trap de plus.
			trap++;
	}
	map->blc = blc;//on met les nouvelles donnees dans blc.
	map->trap = trap;//on met les nouvelles donnees dans trap.
}

void create_map(map_t *map, char *filename)
{
	FILE *fp;
	size_t len = 0;

	fp = fopen(filename, "r");//the argument mode points to "r" to open text file for reading.
	for (int i = 0; i < 3; i++) {//pour int i valant 0, tant qu'il est inferieure a 3, on l'incremente
		map->map[i] = NULL;//on va en fin de ligne
		getline(&map->map[i], &len, fp);//on check ligne par ligne s il ya des 1,2 et 3 dans map.txt
		get_nb(map, map->map[i]);//attraper les nombres se trouvant dans map.txt pour envoyer les nouvelles donnees dans la structure.
	}
	fclose(fp);//on ferme fp.
}

map_t *set_map(map_t *map, char *filename)
{
	map = malloc(sizeof(*map));//on malloc la taille de la map
	map->map = malloc(sizeof(char *));//on malloc la taille de char **map se trouvant ds la struct map_t.
	map->blc = 0;//les blocs du jeu sont initialisés a 0;
	map->trap = 0;//les trap du jeu qui tuent le player sont initialisés a 0;
	create_map(map, filename);//on verifie ce qu il ya ds map.txt, on ouvre, on lit et on enregistre le contenue du fichier.
	map->blk = malloc(sizeof(**map->blk) * map->blc);//on malloc la taille adequate pour blk avec le nombre de blocs
	//enregistrés pour pouvoir par la suite materialiser les blocs dans le jeu.
	map->spk = malloc(sizeof(**map->spk) * map->trap);//on malloc la taille adequate pour spk avec le nombre de trap
	//enregistrés pour pouvoir par la suite materialiser les traps dans le jeu.
	return (map);//on retourne la struct map qui contient toutes les infos que l on vient de definir.
}
