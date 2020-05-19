/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** life, score, victory end of game and text
*/

#include "my.h"

void set_life(menu_t *menu, int life)
{
	if (life == 0)
		sfSprite_setTexture(menu->life->spr, menu->life_zero, sfTrue);
	else if (life == 1)
		sfSprite_setTexture(menu->life->spr, menu->life_one, sfTrue);
	else if (life == 2)
		sfSprite_setTexture(menu->life->spr, menu->life_two, sfTrue);
	else if (life == 3)
		sfSprite_setTexture(menu->life->spr, menu->life_three, sfTrue);	
}

sfText* score(sfFont *font)
{
	sfText* lvl;//on declare la variable lvl qui sera utiliser pour afficher du text

	lvl = sfText_create();// lvl = creation de text
	sfText_setString(lvl, "Score");//affichage de lvl qui contient la string "score"
	sfText_setFont(lvl, font);//definition de la police d un texte
	sfText_setCharacterSize(lvl, 75);//taille du character
	sfText_setPosition(lvl, (sfVector2f){30, 810});//position du text a l ecran
	sfText_setColor(lvl, (sfColor){42, 42, 42, 255});//couleur du text a l ecran
	return (lvl);//on retourne lvl qui contient toutes les infos que l on vient de definir.
}

sfText* fin(sfFont *font)
{
	sfText* lvl;//on declare la variable lvl qui sera utiliser pour afficher du text

	lvl = sfText_create();// lvl = creation de text
	sfText_setString(lvl, "Victory");//affichage de lvl qui contient la string "Victory" si le player a fini le jeu
	sfText_setFont(lvl, font);//definition de la police d un texte
	sfText_setCharacterSize(lvl, 200);//taille du character
	sfText_setPosition(lvl, (sfVector2f){590, 50});//position du text a l ecran
	sfText_setColor(lvl, (sfColor){178, 178, 178, 255});//couleur du text a l ecran
	return (lvl);//on retourne lvl qui contient toutes les infos que l on vient de definir.
}

sfText* level(sfFont *font)
{
	sfText* nbr;//on declare la variable nbr qui sera utiliser pour afficher du text

	nbr = sfText_create();// nbr = creation de text
	sfText_setString(nbr, "0");//affichage de nbr qui contient la string "0" le niveau du jeu
	sfText_setFont(nbr, font);//definition de la police d un texte
	sfText_setCharacterSize(nbr, 100);//taille du character
	sfText_setPosition(nbr, (sfVector2f){30, 880});//position du texte a l ecran
	sfText_setColor(nbr, (sfColor){42, 42, 42, 255});//couleur du text a l ecran
	return (nbr);//on retourne nbr qui contient toutes les infos que l on vient de definir.
}

void set_text(menu_t *menu)
{
	menu->font = sfFont_createFromFile("./font/mikado.OTF"); //on cree la police de notre preference pour mettre le score, level
	//et le score, depuis un fichier.
	menu->score = score(menu->font);//affichage du score
	menu->level = level(menu->font);//affichage du niveau
	menu->fin = fin(menu->font);//affichage de victoire a la fin du jeu
}
