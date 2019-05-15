/*
** EPITECH PROJECT, 2019
** hall enter out
** File description:
** hall enter out
*/

#include "../include/my.h"

void hall_out_seg(t_ingame *ingame)
{
    sfVector2f disable = {-400, -400};
    sfVector2f hall_in = {550, 650};
    sfVector2f hall = {2, 2};
    sfVector2f houseout = {320, 180};
    sfVector2f foxy_in = {650, 540};
    sfVector2f talkpos = {585, 425};

    sfRectangleShape_setPosition(ingame->hitbox.talkHall, talkpos);
    sfRectangleShape_setPosition(ingame->hitbox.hall, disable);
    sfRectangleShape_setPosition(ingame->hitbox.foxy_house_out, disable);
    sfRectangleShape_setPosition(ingame->hitbox.hall_in, hall_in);
    sfSprite_setScale(ingame->sprite.spriteBack, hall);
    sfRenderWindow_clear(ingame->window.window, sfBlack);
    sfSprite_setPosition(ingame->sprite.spriteBack, houseout);
    sfSprite_setPosition(ingame->sprite.sprite, foxy_in);
}

void hall_out(t_ingame *ingame)
{
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfFloatRect hallHB = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.hall);

    if (sfFloatRect_intersects(&foxy, &hallHB, NULL)) {
        sfSprite_setTexture(ingame->sprite.spriteBack, ingame->texture.hall,
        sfTrue);
        ingame->hitbox.check = 1;
        hall_out_seg(ingame);
    }
}

void hall_in_seg(t_ingame *ingame)
{
    sfVector2f disable = {-400, -400};
    sfVector2f hall_out2 = {680, 390};
    sfVector2f actual = {1, 1};
    sfVector2f map_base_pos = {0, 0};
    sfVector2f foxy_out = {700, 450};
    sfVector2f positionhouse = {163, 390};
    sfVector2f mission_pos = {770, 100};

    if (ingame->check.check_quest == 1)
        sfRectangleShape_setPosition(ingame->hitbox.mission, mission_pos);
    sfRectangleShape_setPosition(ingame->hitbox.talkHall, disable);
    sfRectangleShape_setPosition(ingame->hitbox.hall_in, disable);
    sfRectangleShape_setPosition(ingame->hitbox.hall, hall_out2);
    sfRectangleShape_setPosition(ingame->hitbox.foxy_house_out,
    positionhouse);
    sfSprite_setScale(ingame->sprite.spriteBack, actual);
    sfRenderWindow_clear(ingame->window.window, sfBlack);
    sfSprite_setPosition(ingame->sprite.spriteBack, map_base_pos);
    sfSprite_setPosition(ingame->sprite.sprite, foxy_out);
}

void hall_in(t_ingame *ingame)
{
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfFloatRect hallHB_in = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.hall_in);

    if (sfFloatRect_intersects(&foxy, &hallHB_in, NULL)) {
        sfSprite_setTexture(ingame->sprite.spriteBack,
        ingame->texture.background, sfTrue);
        ingame->hitbox.check = 0;
        hall_in_seg(ingame);
    }
}

void mission_part_one(t_ingame *ingame)
{
    sfFloatRect foxy = sfSprite_getGlobalBounds(ingame->sprite.sprite);
    sfFloatRect mission = sfRectangleShape_getGlobalBounds
    (ingame->hitbox.mission);

    if (sfFloatRect_intersects(&foxy, &mission, NULL)) {
        talk_combat_loop(ingame);
    }
}