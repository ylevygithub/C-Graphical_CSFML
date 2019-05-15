/*
** EPITECH PROJECT, 2019
** my_rand
** File description:
** my_rand
*/

#include "../include/my.h"
#include <stdlib.h>

int my_rand()
{
    int n = 0;
    time_t t;

    srand((unsigned) time(&t));
    n = rand()% 4;
    return (n);
}

int my_rand_attack_p(t_ingame *ingame)
{
    int n = 0;
    time_t t;

    srand((unsigned) time(&t));
    n = rand()% (2 + ingame->global->caract->dommage) + 1;
    return (n);
}

int my_rand_heal_p(t_ingame *ingame)
{
    int n = 0;
    time_t t;

    srand((unsigned) time(&t));
    n = rand()% (3 + ingame->global->caract->dommage) + 1;
    return (n);
}

int my_rand_attack_e(t_ingame *ingame)
{
    int n = 0;
    time_t t;
    
    srand((unsigned) time(&t));
    n = rand()% (2 + ingame->global->enemy->dommage) + 1;
    return (n);
}