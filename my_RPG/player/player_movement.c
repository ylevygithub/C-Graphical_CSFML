/*
** EPITECH PROJECT, 2019
** player jump
** File description:
** player jumping
*/

#include "../include/my.h"

void player_up(t_ingame *ingame)
{
    sfIntRect rectangle = {678, 73, 27, 32};
    sfVector2f offset = {0, -3.5};

    run_up(ingame);
    sfSprite_move(ingame->sprite.sprite, offset);
}

void player_down(t_ingame *ingame)
{
    sfIntRect rectangle = {10, 73, 27, 32};
    sfVector2f offset = {0, 3.5};

    run_down(ingame);
    sfSprite_move(ingame->sprite.sprite, offset);
}

void player_right(t_ingame *ingame, int *check)
{
    sfIntRect rectangle = {347, 73, 27, 32};
    sfVector2f offset = {3.5, 0};
    sfVector2f actual = sfSprite_getScale(ingame->sprite.sprite);
    if (actual.x > 0) {
        sfVector2f actual_position = sfSprite_getPosition
        (ingame->sprite.sprite);
        actual_position.x = actual_position.x + 25;
        sfSprite_setPosition(ingame->sprite.sprite, actual_position);
        actual.x *= -1;
    }
    run_right(ingame);
    sfSprite_setScale(ingame->sprite.sprite, actual);
    sfSprite_move(ingame->sprite.sprite, offset);
}

void player_left(t_ingame *ingame, int *check)
{
    sfIntRect rectangle = {347, 73, 27, 32};
    sfVector2f offset = {-3.5, 0};
    sfVector2f actual = sfSprite_getScale(ingame->sprite.sprite);
    if (actual.x < 0) {
        sfVector2f actual_position = sfSprite_getPosition
        (ingame->sprite.sprite);
        actual_position.x = actual_position.x - 25;
        sfSprite_setPosition(ingame->sprite.sprite, actual_position);
        actual.x *= -1;
    }
    run_left(ingame);
    sfSprite_setScale(ingame->sprite.sprite, actual);
    sfSprite_move(ingame->sprite.sprite, offset);
}