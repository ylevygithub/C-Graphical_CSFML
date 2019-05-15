/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main
*/

#include "../include/my.h"

void init(t_ingame *ingame)
{
    init_clocks(&ingame->clocks);
}

void init_clocks(t_clocks *clocks)
{
    clocks->gameClock.clock = sfClock_create();
    clocks->moveClock.clock = sfClock_create();
}