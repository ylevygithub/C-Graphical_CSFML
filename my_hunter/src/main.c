/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** main
*/

#include "../include/my.h"

void game_over(t_window *win)
{
	win->landscape = sfTexture_createFromFile("img/gameover.jpg", NULL);
	sfSprite_setTexture(win->background, win->landscape, sfTrue);
	set_button(win->menu);
	win->data->start = 0;
        set_lvl(win->all->nbr_level, win->data->lvl);
	win->data->end = 1;
	win->all->heart = sfTexture_createFromFile("img/heart0r.png", NULL);
	sfSprite_setTexture(win->all->life_bar, win->all->heart, sfTrue);
	render_end(win);
}

void my_hunter(t_window *win)
{
	set_bird_frame(win);
	set_lvl(win->all->nbr_level, win->data->lvl);
	set_life(win, win->data->life);
	set_ammo(win, win->data->ammo);
	if (win->data->hit)
		bird_hit(win);
	else if (win->data->size > 1920)
		win->data->esc = 1;
	if (win->data->esc)
		bird_esc(win);
	if (!win->data->life)
	        game_over(win);
	sfSprite_move(win->all->fly, (sfVector2f){win->data->speed, 0});
	win->data->size += win->data->speed;
}

void game_event(t_window *win)
{
	if (win->event.type == sfEvtClosed)
		sfRenderWindow_close(win->window);
	if (win->event.type == sfEvtMouseButtonPressed) {
		if (!win->data->start)
			check_play(win, win->event);
		else if (win->data->ammo) {
			sfSound_play(win->menu->awp);
			check_hit(win, win->event);
		}
		if (check_exit(win, win->event) && !win->data->start)
			sfRenderWindow_close(win->window);
	}
}

void game_loop(t_window *win)
{
	win->menu->awp = sfSound_create();
        win->menu->awp_buffer = sfSoundBuffer_createFromFile("./music/awp.ogg");
	sfSound_setBuffer(win->menu->awp, win->menu->awp_buffer);
	win->menu->music = sfMusic_createFromFile("./music/music.ogg");
	sfSound_setVolume(win->menu->awp, 10);
	sfMusic_play(win->menu->music);
	win->clock_bird = sfClock_create();
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event))
			game_event(win);
		if (!win->data->start)
			render_menu(win);
	        else {
			my_hunter(win);
			render_game(win);
		}
	}
	destroy_win(win);
}

int main(int ac, char **av)
{
	t_window *win = malloc(sizeof(t_window) + 1);

	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		write(1, "ShotDucks is a gun shooter video game, the goal of this game is to shoot the bird before it flys away. You have 3 bullets per level and 5 lifes per game. Good Luck !\n", 198);
	} else {
		srand(time(NULL));
		win = set_window(win);
		game_loop(win);
	}
	free(win);
	return (0);
}
