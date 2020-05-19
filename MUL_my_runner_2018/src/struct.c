/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** structures
*/

#include "my.h"

window_t *set_window(window_t *win, char *filename)
{
	sfIntRect temp = (sfIntRect){0, 0, 0, 0};
	sfVideoMode mode = {1920, 1080, 32};

	win->plx = set_parallax(win->plx);
	win->menu = set_menu(win->menu);
	win->data = set_data(win->data);
	win->map = set_map(win->map, filename);
	win->mario = malloc(sizeof(*win->mario));
	win->blood = malloc(sizeof(*win->blood));
	win->window = sfRenderWindow_create(mode, "MY_RUNNER", sfResize | sfClose, NULL);
	set_sprite(win->mario, "img/mario.png", (sfVector2f){-290,650});
	set_sprite(win->blood, "img/blood.png", (sfVector2f){450,590});
	sfSprite_setTextureRect(win->mario->spr, temp);
	sfSprite_setTextureRect(win->blood->spr, temp);
	return (win);
}

game_object_t *set_sprite(game_object_t *obj, const char *nm, sfVector2f pos)
{
	obj->spr = sfSprite_create();
	obj->tex = sfTexture_createFromFile(nm, NULL);
	sfSprite_setTexture(obj->spr, obj->tex, sfTrue);
	sfSprite_setPosition(obj->spr, pos);
	return (obj);
}

parallax_t *set_parallax(parallax_t *plx)
{
	sfVector2f pos_floor = {0, 75};
	sfVector2f pos = {0,0};

	plx = malloc(sizeof(*plx));
	plx->stone = malloc(sizeof(*plx->stone));
	plx->floor = malloc(sizeof(*plx->floor));
	plx->treeone = malloc(sizeof(*plx->treeone));
	plx->treetwo = malloc(sizeof(*plx->treetwo));
	plx->treethree = malloc(sizeof(*plx->treethree));
	plx->moon = malloc(sizeof(*plx->moon));
	plx->sky = malloc(sizeof(*plx->sky));
	plx->stone = set_sprite(plx->stone, "img/stone.png", pos);
	plx->floor = set_sprite(plx->floor, "img/floor.png", pos_floor);
	plx->treeone = set_sprite(plx->treeone, "img/tree1.png", pos);
	plx->treetwo = set_sprite(plx->treetwo, "img/tree2.png", pos);
	plx->treethree = set_sprite(plx->treethree, "img/tree3.png", pos);
	plx->moon = set_sprite(plx->moon, "img/moon.png", pos);
	plx->sky = set_sprite(plx->sky, "img/sky.png", pos);
	return (plx);
}

menu_t *set_menu(menu_t *menu)
{
	sfVector2f pos_play = {845, 375};
	sfVector2f pos_exit = {863, 495};
	sfVector2f pos_life = {800, 855};

	menu = malloc(sizeof(*menu));
	menu->play = malloc(sizeof(*menu->play));
	menu->exit = malloc(sizeof(*menu->exit));
	menu->life = malloc(sizeof(*menu->life));
	menu->play = set_sprite(menu->play, "img/play.png", pos_play);
	menu->exit = set_sprite(menu->exit, "img/exit.png", pos_exit);
	menu->playp = sfTexture_createFromFile("img/playp.png", NULL);
	menu->exitp = sfTexture_createFromFile("img/exitp.png", NULL);
	menu->life = set_sprite(menu->life, "img/life3.png", pos_life);
	menu->life_three = sfTexture_createFromFile("img/life3.png", NULL);
	menu->life_two = sfTexture_createFromFile("img/life2.png", NULL);
	menu->life_one = sfTexture_createFromFile("img/life1.png", NULL);
	menu->life_zero = sfTexture_createFromFile("img/life0.png", NULL);
	set_text(menu);
	sfSprite_setTexture(menu->play->spr, menu->playp, sfTrue);
	return (menu);
}

data_t *set_data(data_t *data)
{
	data = malloc(sizeof(*data));
	data->start = 0;
	data->end = 0;
	data->lastp = 0;
	data->laste = 0;
	data->btn = 0;
	data->frm = 0;
	data->jump = 0;
	data->jumper = 7;
	data->gravity = 0;
	data->hit = 0;
	data->life = 3;
	data->dead = 0;
	data->win = 0;
	data->size = 0;
	return (data);
}