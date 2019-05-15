/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy global
*/

#include "include/my.h"

void destroy_battle(t_battle *amenu)
{
    sfSprite_destroy(amenu->background);
    sfSprite_destroy(amenu->attack);
    sfSprite_destroy(amenu->menu);
    sfSprite_destroy(amenu->exit);
    sfSprite_destroy(amenu->bag);
}

void destroy_attack(t_attack *attack)
{
    sfSprite_destroy(attack->heal);
    sfSprite_destroy(attack->fire);
    sfSprite_destroy(attack->water);
}

void destroy_action(t_aanimation *action)
{
    sfSprite_destroy(action->heal);
    sfSprite_destroy(action->fire);
    sfSprite_destroy(action->water);
}

void destroy_players(t_players *players)
{
    sfSprite_destroy(players->enemy1);
    sfSprite_destroy(players->enemy2);
    sfSprite_destroy(players->enemy3);
    sfSprite_destroy(players->player);
}

void destroy_global(t_global *global)
{
    destroy_battle(global->amenu);
    destroy_attack(global->attack);
    destroy_action(global->action);
    sfSprite_destroy(global->eaction->attack);
    destroy_players(global->players);
    sfSprite_destroy(global->p_life->hp);
    sfSprite_destroy(global->e_life->hp);
    sfSprite_destroy(global->caract->name);
}
