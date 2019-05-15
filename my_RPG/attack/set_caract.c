/*
** EPITECH PROJECT, 2019
** set_caract
** File description:
** set_caract
*/

#include "../include/my.h"

t_caract *set_struct_caract(void)
{
    t_caract *caract = malloc(sizeof(t_caract));

    caract->hp_max = 10;
    caract->hp = 10;
    caract->dommage = 0;
    caract->lvl = 0;
    caract->xp = 0;
}

t_enemy *set_struct_enemy()
{
    t_enemy *enemy = malloc(sizeof(t_enemy));

    enemy->hp_max = 10;
    enemy->hp = 10;
    enemy->dommage = 0;
    enemy->xp_done = 20;
    enemy->nbr = 1;
}

int heal(t_ingame *ingame)
{
    int rand = my_rand_heal_p(ingame);
    
    if ((ingame->global->caract->hp + rand) >= 10)
        return (10);
    return (ingame->global->caract->hp + rand);
}
