/*
** EPITECH PROJECT, 2019
** detect
** File description:
** detect
*/

#include "../include/my.h"

int detect_spell(sfEvent event, t_ingame *ingame)
{
    int res = 0;

    if ((res = spell_heal(event, ingame)) != 0) {
        return (res);
    }
    if ((res = spell_fire(event, ingame)) != 0) {
        return (res);
    }
    if ((res = spell_water(event, ingame)) != 0) {
        return (res);
    }
    return (0);
}

int who_win(t_ingame *ingame)
{
    if (ingame->global->enemy->hp <= 0) {
        return (1);
    }
    if (ingame->global->caract->hp <= 0)
        return (2);
    return (0);
}

int detect_event(sfEvent event, t_ingame *ingame)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(ingame->window.window);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        detect_spell(event, ingame);
    }
    return (0);
}