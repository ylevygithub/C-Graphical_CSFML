/*
** EPITECH PROJECT, 2019
** draw all
** File description:
** draw all
*/

#include "include/my.h"

void draw_text(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.hallTalk,
    NULL);
    sfRenderWindow_drawText(ingame->window.window, ingame->text.talk, NULL);
}

void draw_text_combat(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.hallTalk,
    NULL);
    sfRenderWindow_drawText(ingame->window.window, ingame->text.talk, NULL);
}


void draw_sprites(t_ingame *ingame)
{
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->sprite.spriteBack, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->sprite.sprite, NULL);
    if (ingame->hitbox.check == 1) {
        sfRenderWindow_drawSprite(ingame->window.window,
        ingame->sprite.hallPNG, NULL);
    }
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.foxy_house_in, NULL);
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.foxy_house_out, NULL);
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.hall, NULL);
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.hall_in, NULL);
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.talkHall, NULL);
    sfRenderWindow_drawRectangleShape(ingame->window.window,
    ingame->hitbox.mission, NULL);
    sfRenderWindow_drawText(ingame->window.window, ingame->text.primary_quest,
    NULL);
    sfRenderWindow_display(ingame->window.window);
}