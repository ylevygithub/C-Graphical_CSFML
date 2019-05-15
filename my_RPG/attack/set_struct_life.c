/*
** EPITECH PROJECT, 2019
** struct_life
** File description:
** struct_life
*/

#include "../include/my.h"

t_life *set_struct_life(void)
{
    t_life *life = malloc(sizeof(t_life) * 11);

    life[0].hp = set_backgroud("sprite/life0%.png");
    life[1].hp = set_backgroud("sprite/life10%.png");
    life[2].hp = set_backgroud("sprite/life20%.png");
    life[3].hp = set_backgroud("sprite/life30%.png");
    life[4].hp = set_backgroud("sprite/life40%.png");
    life[5].hp = set_backgroud("sprite/life50%.png");
    life[6].hp = set_backgroud("sprite/life60%.png");
    life[7].hp = set_backgroud("sprite/life70%.png");
    life[8].hp = set_backgroud("sprite/life80%.png");
    life[9].hp = set_backgroud("sprite/life90%.png");
    life[10].hp = set_backgroud("sprite/life100%.png");
    return (life);
}

void set_position_p_life(t_life *life)
{
    sfVector2f vect;

    vect.x = 200;
    vect.y = 650;
    sfSprite_setPosition(life[0].hp, vect);
    sfSprite_setPosition(life[1].hp, vect);
    sfSprite_setPosition(life[2].hp, vect);
    sfSprite_setPosition(life[3].hp, vect);
    sfSprite_setPosition(life[4].hp, vect);
    sfSprite_setPosition(life[5].hp, vect);
    sfSprite_setPosition(life[6].hp, vect);
    sfSprite_setPosition(life[7].hp, vect);
    sfSprite_setPosition(life[8].hp, vect);
    sfSprite_setPosition(life[9].hp, vect);
    sfSprite_setPosition(life[10].hp, vect);
}

void set_position_e_life(t_life *life)
{
    sfVector2f vect;
    
    vect.x = 600;
    vect.y = 5;
    sfSprite_setPosition(life[0].hp, vect);
    sfSprite_setPosition(life[1].hp, vect);
    sfSprite_setPosition(life[2].hp, vect);
    sfSprite_setPosition(life[3].hp, vect);
    sfSprite_setPosition(life[4].hp, vect);
    sfSprite_setPosition(life[5].hp, vect);
    sfSprite_setPosition(life[6].hp, vect);
    sfSprite_setPosition(life[7].hp, vect);
    sfSprite_setPosition(life[8].hp, vect);
    sfSprite_setPosition(life[9].hp, vect);
    sfSprite_setPosition(life[10].hp, vect);
}
