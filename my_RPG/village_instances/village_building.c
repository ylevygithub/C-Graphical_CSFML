/*
** EPITECH PROJECT, 2019
** village instances
** File description:
** village instances
*/

#include "../include/my.h"

void foxy_house_out(t_ingame *ingame)
{
    sfFloatRect hitbox = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.foxy_house_out);
    (ingame->hitbox.foxy_house_out);
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfVector2f foxy_in = {625, 380};
    sfVector2f houseout = {320, 180};
    sfVector2f positionhousein = {625, 490};
    sfVector2f disable = {-400, -400};

    if (sfFloatRect_intersects(&foxy, &hitbox, NULL)) {
        sfSprite_setTexture(ingame->sprite.spriteBack,
        ingame->texture.house, sfTrue);
        sfRectangleShape_setPosition(ingame->hitbox.foxy_house_out, disable);
        sfRectangleShape_setPosition(ingame->hitbox.hall, disable);
        sfRectangleShape_setPosition(ingame->hitbox.foxy_house_in,
        positionhousein);
        sfRenderWindow_clear(ingame->window.window, sfBlack);
        sfSprite_setPosition(ingame->sprite.spriteBack, houseout);
        sfSprite_setPosition(ingame->sprite.sprite, foxy_in);
    }
}

void foxy_house_in(t_ingame *ingame)
{
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfFloatRect hitboxin = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.foxy_house_in);
    sfVector2f positionhouse = {163, 390};
    sfVector2f disable = {-400, -400};
    sfVector2f pos_hall = {680, 390};
    sfVector2f map_base_pos = {0, 0};
    sfVector2f foxy_in = {170, 460};
    if (sfFloatRect_intersects(&foxy, &hitboxin, NULL)) {
        sfSprite_setTexture(ingame->sprite.spriteBack,
        ingame->texture.background, sfTrue);
        sfRectangleShape_setPosition(ingame->hitbox.hall, pos_hall);
        sfRectangleShape_setPosition(ingame->hitbox.foxy_house_out,
        positionhouse);
        sfRectangleShape_setPosition(ingame->hitbox.foxy_house_in,
        disable);
        sfRenderWindow_clear(ingame->window.window, sfBlack);
        sfSprite_setPosition(ingame->sprite.spriteBack, map_base_pos);
        sfSprite_setPosition(ingame->sprite.sprite, foxy_in);
    }
}

void hall_talk(t_ingame *ingame)
{
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfFloatRect halltalk = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.talkHall);
    sfVector2f disable = {-400, -400};
    sfVector2f hall_out2 = {680, 390};
    sfVector2f actual = {1, 1};
    sfVector2f map_base_pos = {0, 0};
    sfVector2f foxy_out = {700, 450};
    sfVector2f positionhouse = {163, 390};

    if (sfFloatRect_intersects(&foxy, &halltalk, NULL)) {
        hall_talk_loop(ingame);
    }
}