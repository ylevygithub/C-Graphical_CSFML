/*
** EPITECH PROJECT, 2018
** open window
** File description:
** open a window
*/

#include "include/my.h"

int create_text(t_ingame *ingame)
{
    ingame->text.talk = sfText_create();
    ingame->text.primary_quest = sfText_create();
    ingame->check.check_clock = 0;
    if (!ingame->text.talk || !ingame->text.primary_quest)
        return (84);
}

int create_window(t_ingame *ingame)
{
    sfVideoMode mode = {1280, 720, 32};
    ingame->sound.music = sfMusic_createFromFile("assets/deplacement.ogg");
    ingame->sound.fly = sfMusic_createFromFile("assets/fly.ogg");
    sfMusic_play(ingame->sound.music);
    sfMusic_setLoop(ingame->sound.music, sfTrue);
    ingame->window.window = sfRenderWindow_create(mode, "My RPG",
    sfDefaultStyle, NULL);
    ingame->clock.timer = sfClock_create();
    ingame->clock.clock_run = sfClock_create();
    if (!ingame->window.window || !ingame->sound.music)
        return (84);
    return (0);
}

int create_sprites(t_ingame *ingame)
{
    ingame->sprite.spriteBack = sfSprite_create();
    ingame->sprite.sprite = sfSprite_create();
    ingame->sprite.hallPNG = sfSprite_create();
    ingame->sprite.hallTalk = sfSprite_create();
    if (!ingame->sprite.sprite || !ingame->sprite.spriteBack)
        return (84);
    return (0);
}

int create_rectangle_shape(t_ingame *ingame)
{
    ingame->hitbox.foxy_house_out = sfRectangleShape_create();
    ingame->hitbox.foxy_house_in = sfRectangleShape_create();
    ingame->hitbox.hall = sfRectangleShape_create();
    ingame->hitbox.hall_in = sfRectangleShape_create();
    ingame->hitbox.talkHall = sfRectangleShape_create();
    ingame->hitbox.mission = sfRectangleShape_create();
    if (!ingame->hitbox.foxy_house_out || !ingame->hitbox.foxy_house_in ||
    !ingame->hitbox.hall || !ingame->hitbox.hall_in)
        return (84);
    return (0);
}

int create_textures(t_ingame *ingame)
{
    ingame->texture.foxy = sfTexture_createFromFile("assets/Foxy.png", NULL);
    ingame->texture.hallPNG = sfTexture_createFromFile("assets/HallPNG.png",
    NULL);
    ingame->texture.foxy_girl = sfTexture_createFromFile("assets/foxy_girl.png", NULL);
    ingame->texture.hallTalk = sfTexture_createFromFile
    ("assets/talk_basic.png", NULL);
    ingame->texture.background = sfTexture_createFromFile
    ("assets/FoxyHood.png", NULL);
    ingame->texture.house = sfTexture_createFromFile("assets/FoxyHouse.png",
    NULL);
    ingame->texture.hall = sfTexture_createFromFile("assets/hall.png", NULL);
    if (!ingame->texture.background || !ingame->texture.foxy)
        return (84);
    return (0);
}
