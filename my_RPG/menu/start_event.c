/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** start_event
*/

#include "../include/my.h"

void start_event(int event_start_game, t_ingame *ingame)
{
    if (event_start_game == 1)
        choose_player(ingame);
    if (event_start_game == 2)
        start_settings(ingame);
    if (event_start_game == 3)
        start_htp(ingame);
}