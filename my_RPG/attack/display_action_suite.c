/*
** EPITECH PROJECT, 2019
** display_action_suite
** File description:
** display_action_suite
*/

#include "../include/my.h"

int display_action_heal_suite(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->action->heal, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}

int display_action_fire_suite(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->action->fire, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}

int display_action_water_suite(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->action->water, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}

int display_action_enemy_suite(t_ingame *ingame, int x)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->eaction[x].attack, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}