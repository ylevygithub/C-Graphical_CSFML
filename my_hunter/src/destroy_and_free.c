/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** destroy functions
*/

#include "../include/my.h"

void free_all(t_window *win)
{
	free(win->all);
	free(win->data);
	free(win->menu);
}

void destroy_sprite(t_window *win)
{
	sfSprite_destroy(win->background);
	sfTexture_destroy(win->landscape);
	sfSprite_destroy(win->all->fly);
	sfTexture_destroy(win->all->bird);
	sfSprite_destroy(win->all->life_bar);
	sfTexture_destroy(win->all->heart);
	sfSprite_destroy(win->all->ammo_bar);
	sfTexture_destroy(win->all->bullet);
	sfSound_destroy(win->menu->awp);
	sfSoundBuffer_destroy(win->menu->awp_buffer);
}

void destroy_win(t_window *win)
{
	destroy_sprite(win);
	sfText_destroy(win->all->txt_level);
	sfText_destroy(win->all->nbr_level);
	sfFont_destroy(win->all->font);
	sfSprite_destroy(win->menu->play);
	sfTexture_destroy(win->menu->play_btn);
	sfSprite_destroy(win->menu->exit);
	sfTexture_destroy(win->menu->exit_btn);
	sfRenderWindow_destroy(win->window);
	sfMusic_destroy(win->menu->music);
	free_all(win);
}
