/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** main
*/

#include "my.h"

void my_runner(window_t *win)
{
	if (win->data->dead)
		set_frame_blood(win);
	else {
		if ((win->data->dead = check_trap(win)))
			set_death(win);
		parallax(win, win->plx);
		win->data->hit = check_hit(win);
		if (!win->data->jump)
			set_gravity(win);
		if (!win->data->gravity && !win->data->hit && !win->data->jump)
			set_frame(win);
		if (!win->data->gravity)
			event_jump(win);
		set_score(win->menu, ++win->data->score);
		check_win(win);
	}
}

void game_event(window_t *win)
{
	if (win->event.type == sfEvtClosed)
		sfRenderWindow_close(win->window);
	event_button(win);
}

void game_loop(window_t *win)
{
	set_music(win);
	sfSound_play(win->menu->sound);
	platform_maker(win, win->map);
	trap_maker(win, win->map);
	win->data->score = 0;
	win->clock = sfClock_create();
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event))
			game_event(win);
		if (!win->data->start)
			render_menu(win, win->plx, win->map);
		else {
			my_runner(win);
			render_game(win, win->plx, win->map);
		}
	}
	destroy_menu(win);
	destroy_win(win);
    free_all(win);
}

int main(int ac, char **av)
{
	window_t *win;

	if (usage(av, ac))
		return (0);
	if (error(av, ac))
		return (84);
	win = malloc(sizeof(*win));
	win = set_window(win, av[1]);
	game_loop(win);
	free(win);
	return (0);
}
