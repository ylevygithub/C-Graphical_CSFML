/*
** EPITECH PROJECT, 2019
** water
** File description:
** water
*/

#include "../include/my.h"

int animation_water_action(t_ingame *ingame, sfIntRect *rect, sfTime cool)
{
    int x = 0;
    sfClock *clock = sfClock_create();
    sfTime elapsedTime;
    sfClock *copy;

    sfSprite_setTextureRect(ingame->global->action->water, rect[x]);
    while (x < 23) {
        copy = sfClock_copy(clock);
        if (sfTime_asSeconds(sfClock_getElapsedTime(copy)) >
            sfTime_asSeconds(cool)) {
            elapsedTime = sfClock_getElapsedTime(clock);
            sfSprite_setTextureRect(ingame->global->action->water, rect[x]);
            x++;
            sfClock_restart(clock);
        }
        display_action_water(ingame);
    }
    if (substract_enemy_hp(ingame) == 1)
        return (1);
    return (0);
}

int animation_water(t_ingame *ingame)
{
    sfIntRect *rect = set_heal_rect();
    sfTime cool = sfMilliseconds(100);

    if (animation_water_action(ingame, rect, cool) == 1)
        return (1);
    if (enemy_attack(ingame) == 1)
        return (2);
    attack(ingame);
    return (0);
}