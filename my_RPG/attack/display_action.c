/*
** EPITECH PROJECT, 2019
** display_action
** File description:
** display_action
*/

#include "../include/my.h"

int display_action_heal(t_ingame *ingame)
{
    sfRenderWindow_clear(ingame->window.window,sfGreen);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->background, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->p_life[ingame->global->caract->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->e_life[ingame->global->enemy->hp].hp, NULL);
    (ingame->global->enemy->nbr == 1) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy1, NULL) : 1;
    (ingame->global->enemy->nbr == 2) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy2, NULL) : 1;
    (ingame->global->enemy->nbr == 3) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy3, NULL) : 1;
    display_action_heal_suite(ingame);
}

int display_action_fire(t_ingame *ingame)
{
    sfRenderWindow_clear(ingame->window.window,sfGreen);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->background, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->p_life[ingame->global->caract->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->e_life[ingame->global->enemy->hp].hp, NULL);
    (ingame->global->enemy->nbr == 1) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy1, NULL) : 1;
    (ingame->global->enemy->nbr == 2) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy2, NULL) : 1;
    (ingame->global->enemy->nbr == 3) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy3, NULL) : 1;
    display_action_fire_suite(ingame);
}

int display_action_water(t_ingame *ingame)
{
    sfRenderWindow_clear(ingame->window.window,sfGreen);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->background, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->p_life[ingame->global->caract->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->e_life[ingame->global->enemy->hp].hp, NULL);
    (ingame->global->enemy->nbr == 1) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy1, NULL) : 1;
    (ingame->global->enemy->nbr == 2) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy2, NULL) : 1;
    (ingame->global->enemy->nbr == 3) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy3, NULL) : 1;
    display_action_water_suite(ingame);
}

int display_action_enemy(t_ingame *ingame, int x)
{
    sfRenderWindow_clear(ingame->window.window,sfGreen);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->background, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->p_life[ingame->global->caract->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->e_life[ingame->global->enemy->hp].hp, NULL);
    (ingame->global->enemy->nbr == 1) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy1, NULL) : 1;
    (ingame->global->enemy->nbr == 2) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy2, NULL) : 1;
    (ingame->global->enemy->nbr == 3) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy3, NULL) : 1;
    display_action_enemy_suite(ingame, x);
}