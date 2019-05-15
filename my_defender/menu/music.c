/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** music
*/

#include "../my.h"

void set_music(menu_t *menu)
{
    menu->music = sfMusic_createFromFile("./music/musique.ogg");
    sfMusic_setVolume(menu->music, 80);
    sfMusic_setLoop(menu->music, sfTrue);
    sfMusic_play(menu->music);
}
