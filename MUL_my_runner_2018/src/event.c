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
	if (sfKeyboard_isKeyPressed(sfKeyUp))
		win->data->btn = 0;
	else if (sfKeyboard_isKeyPressed(sfKeyDown))
		win->data->btn = 1;
	if (!win->data->btn) {
		sfSprite_setTexture(exit->spr, exit->tex, sfTrue);
		sfSprite_setTexture(play->spr, win->menu->playp, sfTrue);
	}
	else {
		sfSprite_setTexture(play->spr, play->tex, sfTrue);
		sfSprite_setTexture(exit->spr, win->menu->exitp, sfTrue);
	}
}

void event_button(window_t *win)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape) && win->data->start)
		win->data->start = 0;
	if (!win->data->start) {
		set_arrow(win, win->menu->play, win->menu->exit);
		if (sfKeyboard_isKeyPressed(sfKeyReturn) && !win->data->btn) {
			win->data->start = 1;
			win->data->end = 0;
			win->data->win = 0;
		}
		if (sfKeyboard_isKeyPressed(sfKeyReturn) && win->data->btn)
			sfRenderWindow_close(win->window);
	}
}

void event_jump(window_t *win)
{
	float jumper = win->data->jumper;
	int start = win->data->start;
	int jump = win->data->jump;

	if (sfKeyboard_isKeyPressed(sfKeySpace) && start && !jump) {
		win->ini = sfSprite_getPosition(win->mario->spr);
		if (win->ini.x > 10)
			win->data->jump = 1;
		jumper = 7;
	}
	if (win->data->jump == 1) {
		sfSprite_move(win->mario->spr, (sfVector2f){0, -jumper});
		jumper -= 0.16;
	}
	move_jump(win);
	win->data->jumper = jumper;
}