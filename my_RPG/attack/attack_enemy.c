/*
** EPITECH PROJECT, 2019
** attack_enemy
** File description:
** attack_enemy
*/

#include "../include/my.h"

int substract_player_hp(t_ingame *ingame)
{
    ingame->global->caract->hp = 
    (ingame->global->caract->hp - my_rand_attack_e(ingame));
    if (ingame->global->caract->hp <= 0)
        ingame->global->caract->hp = 0;
    if (ingame->global->caract->hp == 0)
        return (1);
}

int enemy_attack_action(t_ingame *ingame, sfIntRect *rect, sfTime cool)
{
    int x = 0;
    int rand = my_rand_attack_e(ingame);
    sfClock *clock = sfClock_create();
    sfTime elapsedTime;
    sfClock *copy;
    
    sfSprite_setTextureRect(ingame->global->eaction[rand].attack, rect[x]);
    while (x < 7) {
        copy = sfClock_copy(clock);
        if (sfTime_asSeconds(sfClock_getElapsedTime(copy)) > sfTime_asSeconds(cool)) {
            elapsedTime = sfClock_getElapsedTime(clock);
            sfSprite_setTextureRect(ingame->global->eaction[rand].attack, rect[x]);
            x++;
            sfClock_restart(clock);
        }
        display_action_enemy(ingame, rand);
    }
    if (substract_player_hp(ingame) == 1)
        return (1);
    return (0);
}

int enemy_attack(t_ingame *ingame)
{
    sfIntRect *rect = set_heal_rect();
    sfTime cool = sfMilliseconds(100);

    if (enemy_attack_action(ingame, rect, cool) == 1)
        return (1);
    return (0);
}