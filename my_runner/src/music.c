/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** music
*/

#include "my.h"

void set_music(window_t *win)
{
	win->menu->sound = sfSound_create();
	win->menu->sound_buffer = sfSoundBuffer_createFromFile("./music/musique.ogg");
	sfSound_setBuffer(win->menu->sound, win->menu->sound_buffer);
	sfSound_setVolume(win->menu->sound, 100);
}