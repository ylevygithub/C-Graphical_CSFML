/*
** EPITECH PROJECT, 2019
** struct_attack
** File description:
** struct_attack
*/

#include "../include/my.h"

t_attack *set_struct_attack(void)
{
    t_attack *attack = malloc(sizeof(t_attack));

    attack->heal = set_backgroud("sprite/hheal.png");
    attack->fire = set_backgroud("sprite/fiire.png");
    attack->water = set_backgroud("sprite/wwater.png");
    return (attack);
}

void set_position_attack(t_attack *attack)
{
    sfVector2f vect;

    vect.x = 68;
    vect.y = 600;
    sfSprite_setPosition(attack->heal, vect);
    vect.x = 68;
    vect.y = 642;
    sfSprite_setPosition(attack->fire, vect);
    vect.x = 68;
    vect.y = 684;
    sfSprite_setPosition(attack->water, vect);
}

t_aanimation *set_struct_aanimation(void)
{
    t_aanimation *action = malloc(sizeof(t_aanimation));

    action->heal = set_backgroud("sprite/heeal.png");
    action->fire = set_backgroud("sprite/fire.png");
    action->water = set_backgroud("sprite/water.png");
}

void set_position_action(t_aanimation *action)
{
    sfVector2f vect;
    
    vect.x = 300;
    vect.y = 400;
    sfSprite_setPosition(action->heal, vect);
    vect.x = 900;
    vect.y = 175;
    sfSprite_setPosition(action->fire, vect);
    sfSprite_setPosition(action->water, vect);
}
