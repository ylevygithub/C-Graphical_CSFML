/*
** EPITECH PROJECT, 2019
** checking
** File description:
** certain check
*/

#include "include/my.h"

void check_keyboard(t_ingame *ingame)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfMusic_play(ingame->sound.fly);
        player_up(ingame);
    }
    else if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_play(ingame->sound.fly);
        player_down(ingame);
    }
    check_sidekeyboard(ingame);
}

void check_sidekeyboard(t_ingame *ingame)
{
    int check = 0;

    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_play(ingame->sound.fly);
        player_right(ingame, &check);
    }
    else if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfMusic_play(ingame->sound.fly);
        player_left(ingame, &check);
    }
}