/*
** EPITECH PROJECT, 2019
** set_enemy
** File description:
** enemy
*/

#include "../include/my.h"

t_players *set_struct_players(void)
{
    t_players *players = malloc(sizeof(t_players));

    players->enemy1 = set_backgroud("sprite/enemy4.png");
    players->enemy2 = set_backgroud("sprite/boss.png");
    players->enemy3 = set_backgroud("sprite/enemy3.png");
    players->player = set_backgroud("sprite/link3.png");
}

void set_position_players(t_players *players)
{
    sfVector2f vect;

    vect.x = 850;
    vect.y = 10;
    sfSprite_setPosition(players->enemy1, vect);
    sfSprite_setPosition(players->enemy2, vect);
    sfSprite_setPosition(players->enemy3, vect);
    vect.x = 250;
    vect.y = 240;
    sfSprite_setPosition(players->player, vect);
}

t_aanimation_enemy *set_struct_animation_enemy(void)
{
    t_aanimation_enemy *eaction = malloc(sizeof(t_aanimation_enemy) * 4);

    eaction[0].attack = set_backgroud("sprite/aenemy1.png");
    eaction[1].attack = set_backgroud("sprite/aenemy2.png");
    eaction[2].attack = set_backgroud("sprite/aenemy3.png");
    eaction[3].attack = set_backgroud("sprite/aenemy4.png");
    return (eaction);
}

void set_position_animation_enemy(t_aanimation_enemy *eaction)
{
    sfVector2f vect;
    
    vect.x = 300;
    vect.y = 400;
    sfSprite_setPosition(eaction[0].attack, vect);
    sfSprite_setPosition(eaction[1].attack, vect);
    sfSprite_setPosition(eaction[2].attack, vect);
    sfSprite_setPosition(eaction[3].attack, vect);
}