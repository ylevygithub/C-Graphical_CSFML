/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** music
*/

#include "my.h"

void set_music(window_t *win)
{
	win->menu->sound = sfSound_create();//on donne comme valeur a sfSound *intro
	win->menu->sound_buffer = sfSoundBuffer_createFromFile("./music/musique.ogg");//on cree la musique depuis un file.
	sfSound_setBuffer(win->menu->sound, win->menu->sound_buffer);//Définit le tampon source contenant les données audio à lire.
	sfSound_setVolume(win->menu->sound, 100);//on regle le volume a 100.
}