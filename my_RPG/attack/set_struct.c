/*
** EPITECH PROJECT, 2019
** set_struct
** File description:
** set_struct
*/

#include "../include/my.h"

sfSprite *set_backgroud(char *str)
{
    sfTexture *texture_back;
    sfSprite *background;

    texture_back = sfTexture_createFromFile(str, NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture_back, sfTrue);
    return (background);
}

t_battle *set_amenu(void)
{
    t_battle *amenu = malloc(sizeof(t_battle));

    amenu->background = set_backgroud("sprite/map.png");
    amenu->attack = set_backgroud("sprite/aattack.png");
    amenu->exit = set_backgroud("sprite/rreply.png");
    amenu->bag = set_backgroud("sprite/bagg.png");
}

void set_pos_struct_amenu()
{
    t_pos_amenu *pos = malloc(sizeof(t_pos_amenu) * 3);

    pos[0].x = 68;
    pos[0].y = 600;
    pos[0].size_x = 149;
    pos[0].size_y = 41;
    pos[1].x = 0;
    pos[1].y = 600;
    pos[1].size_x = 67;
    pos[1].size_y = 82;
    pos[2].x = 68;
    pos[2].y = 642;
    pos[2].size_x = 149;
    pos[2].size_y = 41;
}

void set_position_sprite(t_battle *amenu)
{
    sfVector2f vect;
    
    vect.x = 68;
    vect.y = 600;
    sfSprite_setPosition(amenu->attack, vect);
    vect.x = 0;
    vect.y = 600;
    sfSprite_setPosition(amenu->bag, vect);
    vect.x = 68;
    vect.y = 642;
    sfSprite_setPosition(amenu->exit, vect);
}