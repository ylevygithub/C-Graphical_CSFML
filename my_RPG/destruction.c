/*
** EPITECH PROJECT, 2018
** destruction
** File description:
** just destruct
*/

#include "include/my.h"

void destruction(t_ingame *ingame)
{
    sfRenderWindow_destroy(ingame->window.window);
    sfSprite_destroy(ingame->sprite.hallPNG);
    sfSprite_destroy(ingame->sprite.sprite);
    sfSprite_destroy(ingame->sprite.spriteBack);
    sfSprite_destroy(ingame->sprite.hallTalk);
    sfTexture_destroy(ingame->texture.foxy);
    sfTexture_destroy(ingame->texture.hall);
    sfTexture_destroy(ingame->texture.house);
    sfTexture_destroy(ingame->texture.background);
    sfTexture_destroy(ingame->texture.hallTalk);
    sfTexture_destroy(ingame->texture.foxy_girl);
    sfRectangleShape_destroy(ingame->hitbox.mission);
    sfRectangleShape_destroy(ingame->hitbox.hall);
    sfRectangleShape_destroy(ingame->hitbox.hall_in);
    sfRectangleShape_destroy(ingame->hitbox.foxy_house_in);
    sfRectangleShape_destroy(ingame->hitbox.foxy_house_out);
    sfRectangleShape_destroy(ingame->hitbox.talkHall);
    sfText_destroy(ingame->text.talk);
    sfMusic_destroy(ingame->sound.music);
    sfMusic_destroy(ingame->sound.fly);
    free(ingame);
}