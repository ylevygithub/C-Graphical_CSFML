/*
** EPITECH PROJECT, 2019
** set talk
** File description:
** set talk
*/

#include "../include/my.h"

void set_talk_text(t_ingame *ingame)
{
    const sfFont *font;
    sfVector2f position = {460, 240};
    font = sfFont_createFromFile("assets/battlefield.ttf");

    sfText_setCharacterSize(ingame->text.primary_quest, 15);
    sfText_setCharacterSize(ingame->text.talk, 20);
    sfText_setString(ingame->text.talk, "Hello !");
    sfText_setColor(ingame->text.talk, sfBlack);
    sfText_setColor(ingame->text.primary_quest, sfBlack);
    sfText_setPosition(ingame->text.talk, position);
    sfText_setFont(ingame->text.talk, font);
    sfText_setFont(ingame->text.primary_quest, font);
}

void set_position_talk(t_ingame *ingame)
{
    sfVector2f talk_pos = {430, 220};
    sfVector2f size = {0.8, 0.8};

    sfSprite_setTexture(ingame->sprite.hallTalk, ingame->texture.hallTalk,
    sfTrue);
    sfSprite_setPosition(ingame->sprite.hallTalk, talk_pos);
    sfSprite_setScale(ingame->sprite.hallTalk, size);
}

void set_talk_combat(t_ingame *ingame)
{
    const sfFont *font;
    sfVector2f position = {460, 240};
    sfVector2f talk_pos = {430, 200};
    sfVector2f size = {0.8, 0.8};
    font = sfFont_createFromFile("assets/battlefield.ttf");

    sfText_setCharacterSize(ingame->text.talk, 20);
    sfText_setString(ingame->text.talk, "AAAAAARGH !");
    sfText_setColor(ingame->text.talk, sfBlack);
    sfText_setPosition(ingame->text.talk, position);
    sfText_setFont(ingame->text.talk, font);
    sfSprite_setTexture(ingame->sprite.hallTalk, ingame->texture.hallTalk,
    sfTrue);
    sfSprite_setPosition(ingame->sprite.hallTalk, talk_pos);
    sfSprite_setScale(ingame->sprite.hallTalk, size);
}