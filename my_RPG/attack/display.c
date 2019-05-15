/*
** EPITECH PROJECT, 2019
** display
** File description:
** display
*/

#include "../include/my.h"

int display(t_ingame *ingame)
{
    sfRenderWindow_clear(ingame->window.window,sfGreen);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->background, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->p_life[ingame->global->caract->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->e_life[ingame->global->enemy->hp].hp, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->attack, NULL);
    (ingame->global->enemy->nbr == 1) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy1, NULL) : 1;
    (ingame->global->enemy->nbr == 2) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy2, NULL) : 1;
    (ingame->global->enemy->nbr == 3) ?
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->enemy3, NULL) : 1;
    display_suite(ingame);
}

int display_suite(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->exit, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->bag, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}

int display_attack(t_ingame *ingame)
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
    display_attack_suite(ingame);
}

int display_attack_suite(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->players->player, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->attack->heal, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->attack->fire, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->attack->water, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->amenu->bag, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->global->lvl[ingame->global->caract->lvl].lvl, NULL);
    sfRenderWindow_display(ingame->window.window);
}