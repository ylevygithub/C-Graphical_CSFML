/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu_settings
*/

#include "../include/my.h"

void select_settings_texture(t_ingame *ingame)
{}

int event_settings_mouse(t_ingame *ingame, int event_start_game)
{}

void display_settings(t_ingame *ingame)
{}

void start_settings(t_ingame *ingame)
{
    int event_start_game = 0;

    while (!event_start_game
    || (event_start_game != 1 && event_start_game != 2)) {
        select_settings_texture(ingame);
        sfRenderWindow_pollEvent(ingame->window.window,
        &ingame->gestion.event);
        if (ingame->gestion.event.type == sfEvtMouseButtonPressed)
            event_start_game = event_settings_mouse(ingame, event_start_game);
        display_settings(ingame);
        global_clock(10000);
    }
}