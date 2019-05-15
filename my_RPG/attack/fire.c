/*
** EPITECH PROJECT, 2019
** fire
** File description:
** fire
*/

#include "../include/my.h"

int substract_enemy_hp(t_ingame *ingame)
{
    ingame->global->enemy->hp = 
    (ingame->global->enemy->hp - my_rand_attack_p(ingame));
    if (ingame->global->enemy->hp <= 0)
        ingame->global->enemy->hp = 0;
    if (ingame->global->enemy->hp <= 0)
        return (1);
    return (0);
}

int animation_fire_action(t_ingame *ingame, sfIntRect *rect, sfTime cool)
{
    int x = 0;
    sfClock *clock = sfClock_create();
    sfTime elapsedTime;
    sfClock *copy;
    
    sfSprite_setTextureRect(ingame->global->action->fire, rect[x]);
    while (x < 23) {
        copy = sfClock_copy(clock);
        if (sfTime_asSeconds(sfClock_getElapsedTime(copy)) >
            sfTime_asSeconds(cool)) {
            elapsedTime = sfClock_getElapsedTime(clock);
            sfSprite_setTextureRect(ingame->global->action->fire, rect[x]);
            x++;
            sfClock_restart(clock);
        }
        display_action_fire(ingame);
    }
    if (substract_enemy_hp(ingame) == 1)
        return (1);
    return (0);
}

int animation_fire(t_ingame *ingame)
{
    sfIntRect *rect = set_heal_rect();
    sfTime cool = sfMilliseconds(100);

    if (animation_fire_action(ingame, rect, cool) == 1) {
        return (1);
    }
    if (enemy_attack(ingame) == 1)
        return (2);
    attack(ingame);
    return (0);
}
