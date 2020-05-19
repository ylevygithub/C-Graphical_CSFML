/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** structures
*/

#include "my.h"

game_object_t *set_sprite(game_object_t *obj, const char *nm, sfVector2f pos)
{
	obj->spr = sfSprite_create();//creation du sprite.
	obj->tex = sfTexture_createFromFile(nm, NULL);//creation de la texture depuis un file(filename, surface)
	sfSprite_setTexture(obj->spr, obj->tex, sfTrue);/*	sfSprite *spr et sfTexture *tex (spr, tex, vrai ou faux) 
	la texture doit elle etre reinitialisée a la taille de la nouvelle texture? oui.*/
	sfSprite_setPosition(obj->spr, pos); //definit la position d un sprite (sprite, position)
	return (obj); //on retourne obj qui contient le sprite, la texture et leur infos.
}

parallax_t *set_parallax(parallax_t *plx)
{
	sfVector2f pos_floor = {0, 75};//vecteur a 2composantes des float pour la position du sol (x, y).
	sfVector2f pos = {0,0}; //on declare une position 0.

	plx = malloc(sizeof(*plx)); //on malloc le parallax.
	plx->stone = malloc(sizeof(*plx->stone));//on malloc le sol enneigé
	plx->floor = malloc(sizeof(*plx->floor));//on malloc le sol
	plx->one = malloc(sizeof(*plx->one));//on malloc l'arbre1
	plx->two = malloc(sizeof(*plx->two));//on malloc l'arbre2
	plx->three = malloc(sizeof(*plx->three));//on malloc l'arbre3
	plx->moon = malloc(sizeof(*plx->moon));//on malloc la lune
	plx->sky = malloc(sizeof(*plx->sky));//on malloc le ciel etoilé
	plx->stone = set_sprite(plx->stone, "img/stone.png", pos);//on a mtnt toutes les infos sur stone
	plx->floor = set_sprite(plx->floor, "img/floor.png", pos_floor);//on a mtnt toutes les info sur floor
	plx->one = set_sprite(plx->one, "img/tree1.png", pos);//on a mtnt toutes les infos sur arbre1
	plx->two = set_sprite(plx->two, "img/tree2.png", pos);//on a mtnt toutes les infos sur arbre2
	plx->three = set_sprite(plx->three, "img/tree3.png", pos);//on a mtnt toutes les infos sur arbre3
	plx->moon = set_sprite(plx->moon, "img/moon.png", pos);//on a mtnt toutes les infos sur moon
	plx->sky = set_sprite(plx->sky, "img/sky.png", pos);//on a mtnt toutes les infos sur le sky
	return (plx);// toutes ces infos sont reliés et misent dans plx, on retourne donc plx qui contient tout le parallax
}

menu_t *set_menu(menu_t *menu)
{
	sfVector2f pos_play = {845, 375};//position de la texture play
	sfVector2f pos_exit = {863, 495};//position de la texture exit
	sfVector2f pos_life = {800, 855};//position de la texture life (3coeurs signifiant qu on a 3vies)

	menu = malloc(sizeof(*menu));//on malloc le menu
	menu->play = malloc(sizeof(*menu->play));//on malloc le bouton play
	menu->exit = malloc(sizeof(*menu->exit));//on malloc le bouton exit
	menu->life = malloc(sizeof(*menu->life));//on malloc les coeurs qui sont les 3 vies du player
	menu->play = set_sprite(menu->play, "img/play.png", pos_play);//on a mtnt toutes les infos sur play
	menu->exit = set_sprite(menu->exit, "img/exit.png", pos_exit);//on a mtnt toutes les infos sur exit
	menu->playp = sfTexture_createFromFile("img/playp.png", NULL);//creation de la texture (sfTexture *playp)
	//depuis un file("filename", surface)
	menu->exitp = sfTexture_createFromFile("img/exitp.png", NULL);//creation de la texture (sfTexture *exitp)
	//depuis un file("filename", surface)
	menu->life = set_sprite(menu->life, "img/life3.png", pos_life);//on a mtnt toutes les infos sur life
	menu->life_three = sfTexture_createFromFile("img/life3.png", NULL);//creation de la texture (sfTexture *life_three)
	//depuis un file(filename, surface)
	menu->life_two = sfTexture_createFromFile("img/life2.png", NULL);//creation de la texture (sfTexture *life_two)
	//depuis un file(filename, surface)
	menu->life_one = sfTexture_createFromFile("img/life1.png", NULL);//creation de la texture (sfTexture *life_one)
	//depuis un file(filename, surface)
	menu->life_zero = sfTexture_createFromFile("img/life0.png", NULL);//creation de la texture (sfTexture *life_zero)
	//depuis un file(filename, surface)
	set_text(menu);// affichage de text(score, niveau et victoire a la fin du jeu)
	sfSprite_setTexture(menu->play->spr, menu->playp, sfTrue);/*sfSprite *spr et sfTexture *playp (spr, playp, vrai ou faux) 
	la texture doit elle etre reinitialisée a la taille de la nouvelle texture? oui.*/
	return (menu);//toutes ces infos sont reliés et misent dans menu, on retourne donc menu.
}

data_t *set_data(data_t *data)
{
	data = malloc(sizeof(*data));//on malloc data
	data->start = 0;//int start = 0;
	data->end = 0;//int end = 0;
	data->lastp = 0;//int lastp = 0;
	data->laste = 0;//int laste = 0;
	data->btn = 0;//int btn = 0;
	data->frm = 0;//int frm = 0;
	data->jump = 0;//int jump = 0;
	data->jumper = 7;//float jp = 7;
	data->gravity = 0;//int gv = 0;
	data->hit = 0;//int hit = 0;
	data->life = 3;//int life = 3;
	data->dead = 0;//int dead = 0;
	data->win = 0;//int win = 0;
	data->size = 0;//int size = 0;
	return (data);//toutes ces infos sont reliés et misent dans data, on retourne donc data.
}

window_t *set_window(window_t *win, char *filename)
{
	sfIntRect temp = (sfIntRect){0, 0, 0, 0};//(left, top, width, height) manipulation de rectangle.
	sfVideoMode mode = {1920, 1080, 32};//video mode (width, height, bitsPerPixel).

	win->plx = set_parallax(win->plx);//on met en place le parallax avec la fonction set_parallax.
	win->menu = set_menu(win->menu);//on met en place le menu avec la fonction set_menu.
	win->data = set_data(win->data);//on met en place les data
	win->map = set_map(win->map, filename);//on met en place la map
	win->mario = malloc(sizeof(*win->mario));//on malloc mario
	win->blood = malloc(sizeof(*win->blood));//on malloc le blood
	win->window = sfRenderWindow_create(mode, "MY_RUNNER", sfResize | sfClose, NULL);//on cree la fenetre de jeu
	set_sprite(win->mario, "img/mario.png", (sfVector2f){-290,650});//on a mtnt ttes les infos sur mario
	set_sprite(win->blood, "img/blood.png", (sfVector2f){450,590});//on a mtnt ttes les infos sur blood
	sfSprite_setTextureRect(win->mario->spr, temp);//on definie la partie de la texture/sprite de mario a afficher
	sfSprite_setTextureRect(win->blood->spr, temp);//on definie la partie de la texture/sprite de blood a afficher
	return (win);
}
