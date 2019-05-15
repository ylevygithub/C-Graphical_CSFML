/*
** EPITECH PROJECT, 2019
** set all
** File description:
** set all
*/

#include "include/my.h"

void set_allpositions(t_ingame *ingame)
{
    sfVector2f positionRe = {800, 0};
    sfVector2f position = {430, 250};
    sfVector2f pos_hall = {680, 390};
    sfVector2f pos_house = {163, 390};
    sfVector2f disable = {-400, -400};
    ingame->hitbox.check = 0;

    set_color(ingame);
    set_size(ingame);
    set_texture(ingame);
    set_png(ingame);
    sfRectangleShape_setPosition(ingame->hitbox.mission, disable);
    sfRectangleShape_setPosition(ingame->hitbox.talkHall, disable);
    sfRectangleShape_setPosition(ingame->hitbox.hall_in, disable);
    sfRectangleShape_setPosition(ingame->hitbox.foxy_house_in, disable);
    sfRectangleShape_setPosition(ingame->hitbox.hall, pos_hall);
    sfRectangleShape_setPosition(ingame->hitbox.foxy_house_out, pos_house);
    sfSprite_setPosition(ingame->sprite.sprite, position);
}

void set_png(t_ingame *ingame)
{
    sfIntRect rectangle = {0, 65, 60, 50};
    sfVector2f offset = {0, 3.5};
    sfVector2f hall_posPNG = {580, 380};

    sfSprite_setPosition(ingame->sprite.hallPNG, hall_posPNG);
    sfSprite_setTextureRect(ingame->sprite.hallPNG, rectangle);
}

void set_texture(t_ingame *ingame)
{
    sfSprite_setTexture(ingame->sprite.spriteBack, ingame->texture.background,
    sfTrue);
    if (ingame->gender == 2)
        sfSprite_setTexture(ingame->sprite.sprite, ingame->texture.foxy_girl, sfTrue);
    else
        sfSprite_setTexture(ingame->sprite.sprite, ingame->texture.foxy, sfTrue);
    sfSprite_setTexture(ingame->sprite.hallPNG, ingame->texture.hallPNG,
    sfTrue);
}

void set_color(t_ingame *ingame)
{
    sfColor color = {80, 114, 47, 222};

    sfRectangleShape_setFillColor(ingame->hitbox.mission, color);
    sfRectangleShape_setFillColor(ingame->hitbox.talkHall, color);
    sfRectangleShape_setFillColor(ingame->hitbox.hall, color);
    sfRectangleShape_setFillColor(ingame->hitbox.hall_in, color);
    sfRectangleShape_setFillColor(ingame->hitbox.foxy_house_out, color);
    sfRectangleShape_setFillColor(ingame->hitbox.foxy_house_in, color);
}

void set_size(t_ingame *ingame)
{
    sfVector2f size_hall_out = {80, 35};
    sfVector2f size_hall_in = {155, 35};
    sfVector2f size_foxyH_in = {50, 35};
    sfVector2f size_foxyH_out = {35, 35};
    sfVector2f talk = {35, 35};

    sfRectangleShape_setSize(ingame->hitbox.mission, talk);
    sfRectangleShape_setSize(ingame->hitbox.talkHall, size_foxyH_out);
    sfRectangleShape_setSize(ingame->hitbox.hall, size_hall_out);
    sfRectangleShape_setSize(ingame->hitbox.hall_in, size_hall_in);
    sfRectangleShape_setSize(ingame->hitbox.foxy_house_out, size_foxyH_out);
    sfRectangleShape_setSize(ingame->hitbox.foxy_house_in, size_foxyH_in);
}