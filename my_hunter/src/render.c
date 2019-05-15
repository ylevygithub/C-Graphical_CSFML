/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** render functions
*/

#include "../include/my.h"

void render_end(t_window *win)
{
	sfRenderWindow_drawSprite(win->window, win->all->life_bar, NULL);
	sfRenderWindow_drawText(win->window, win->all->txt_level, NULL);
	sfRenderWindow_drawText(win->window, win->all->nbr_level, NULL);
}

void render_menu(t_window *win)
{
	sfRenderWindow_drawSprite(win->window, win->background, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->play, NULL);
	sfRenderWindow_drawSprite(win->window, win->menu->exit, NULL);
	if (win->data->end)
		render_end(win);
	sfRenderWindow_display(win->window);
}

void render_game(t_window *win)
{
	sfRenderWindow_clear(win->window, sfTransparent);
	sfRenderWindow_drawSprite(win->window, win->background, NULL);
	sfRenderWindow_drawSprite(win->window, win->all->fly, NULL);
	sfRenderWindow_drawSprite(win->window, win->all->life_bar, NULL);
	sfRenderWindow_drawSprite(win->window, win->all->ammo_bar, NULL);
	sfRenderWindow_drawText(win->window, win->all->txt_level, NULL);
	sfRenderWindow_drawText(win->window, win->all->nbr_level, NULL);
	sfRenderWindow_display(win->window);
}
