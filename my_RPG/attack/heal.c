/*
** EPITECH PROJECT, 2019
** heal
** File description:
** heal
*/

#include "../include/my.h"

int animation_heal_action(t_ingame *ingame, sfIntRect *rect, sfTime cool)
{
    int x = 0;
    sfClock *clock = sfClock_create();
    sfTime elapsedTime;
    sfClock *copy;
    
    sfSprite_setTextureRect(ingame->global->action->heal, rect[x]);
    while (x < 23) {
        copy = sfClock_copy(clock);
        if (sfTime_asSeconds(sfClock_getElapsedTime(copy)) >
            sfTime_asSeconds(cool)) {
            elapsedTime = sfClock_getElapsedTime(clock);
            sfSprite_setTextureRect(ingame->global->action->heal, rect[x]);
            x++;
            sfClock_restart(clock);
        }
        display_action_heal(ingame);
    }
    ingame->global->caract->hp = heal(ingame);
    return (0);
}

int animation_heal(t_ingame *ingame)
{
    sfIntRect *rect = set_heal_rect();
    sfTime cool = sfMilliseconds(100);

    animation_heal_action(ingame, rect, cool);
    if (enemy_attack(ingame) == 1)
        return (2);
    attack(ingame);
    return (0);
}
