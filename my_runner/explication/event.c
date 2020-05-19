/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** events
*/

#include "my.h"

void game_win(window_t *win)
{
    win->data->end = 1;
	win->data->win = 1;
	win->data->start = 0;
	win->data->life = 3;
	win->data->score = 0;
	win->data->jump = 0;
	sfSprite_setPosition(win->mario->spr, (sfVector2f){-170,440});
	platform_maker(win, win->map);
	trap_maker(win, win->map);
	win->data->dead = 0;
	win->data->size = 0;
	sfText_setString(win->menu->fin, "Victory");
	sfText_setPosition(win->menu->fin, (sfVector2f){590, 50});
}

void check_win(window_t *win)
{
	int flag = win->map->flag.x;

	if (win->data->size >= flag)
		game_win(win);
	win->data->size += 3;
}

void set_arrow(window_t *win, game_object_t *play, game_object_t *exit)
{
	if (sfKeyboard_isKeyPressed(sfKeyUp))//si on presse la touche up
		win->data->btn = 0;//le curseur monte d un etage
	else if (sfKeyboard_isKeyPressed(sfKeyDown))//si on presse sur la touche down
		win->data->btn = 1;//le curseur descend d un etage
	if (!win->data->btn) {
		sfSprite_setTexture(exit->spr, exit->tex, sfTrue);
		sfSprite_setTexture(play->spr, win->menu->playp, sfTrue);
	}
	else {
		sfSprite_setTexture(play->spr, play->tex, sfTrue);
		sfSprite_setTexture(exit->spr, win->menu->exitp, sfTrue);
	}
}//cette fonction sert a utiliser la touche up et down pour choisir exit ou play ds la fenetre du menu.

void event_button(window_t *win)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape) && win->data->start)
		win->data->start = 0;
	if (!win->data->start) {
		set_arrow(win, win->menu->play, win->menu->exit);//pour utiliser up et down pour choisir de play ou d exit le jeu.
		if (sfKeyboard_isKeyPressed(sfKeyReturn) && !win->data->btn) {//si on presse la touche entree
			win->data->start = 1;//on commence ou continue le jeu
			win->data->end = 0;//le jeu n est pas fini
			win->data->win = 0;//on a pas encore gagner
		}
		if (sfKeyboard_isKeyPressed(sfKeyReturn) && win->data->btn)//si on presse la touche entree pour exit
			sfRenderWindow_close(win->window);//la fenetre se ferme.
	}
}

void event_jump(window_t *win)//mise en place de l evenement jump
{
	float jumper = win->data->jumper;
	int start = win->data->start;
	int jump = win->data->jump;

	if (sfKeyboard_isKeyPressed(sfKeySpace) && start && !jump) {//lorsquon presse la touche space
		win->ini = sfSprite_getPosition(win->mario->spr);
		if (win->ini.x > 10)
			win->data->jump = 1;
		jumper = 7;
	}
	if (win->data->jump == 1) {//l effet de vole, le player move vers le haut puis vers le bas
		sfSprite_move(win->mario->spr, (sfVector2f){0, -jumper});
		jumper -= 0.16;
	}
	move_jump(win);
	win->data->jumper = jumper;
}