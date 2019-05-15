/*
** EPITECH PROJECT, 2019
** hall talk
** File description:
** hall talk
*/

#include "../include/my.h"

void hall_talk_loop(t_ingame *ingame)
{
    int check = 0;
    int check_text = 0;
    sfEvent event;
    sfVector2f quit = {570, 470};
    set_position_talk(ingame);
    set_talk_text(ingame);
    sfClock_restart(ingame->clock.timer);
    while (check == 0) {
        while (sfRenderWindow_pollEvent(ingame->window.window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(ingame->window.window);
                destruction(ingame);
            }
        }
        draw_text(ingame);
        sfRenderWindow_display(ingame->window.window);
        ingame->clock.time = sfClock_getElapsedTime(ingame->clock.timer);
        skip_talk_hall(ingame, &check, &check_text);
    }
}

void set_talk_hall_first(t_ingame *ingame, int *check_text)
{
    if (*check_text == 0)
        sfText_setString(ingame->text.talk, "You're Foxy right ?\nI'm Ned");
    else if (*check_text == 1)
        sfText_setString(ingame->text.talk, "I need your help !");
    else if (*check_text == 2)
        sfText_setString(ingame->text.talk,
        "I lost my sword next to\nthe shop !");
}

void set_talk_hall_second(t_ingame *ingame, int *check_text, int *check)
{
    sfVector2f quit = {570, 470};

    if (*check_text == 3)
        sfText_setString(ingame->text.talk,
        "Can you bring it to me \nplease ?");
    else if (*check_text == 4 && ingame->check.check_quest == 0)
        sfText_setString(ingame->text.talk, "I can pay you !");
    else if (*check_text == 5) {
        ingame->check.check_quest = 1;
        *check = 1;
        sfText_setString(ingame->text.primary_quest,
        "Principal Quest: Chapter 1\nGo find Ned's sword next to the shop");
        sfSprite_setPosition(ingame->sprite.sprite, quit);
    }
}

void skip_talk_hall(t_ingame *ingame, int *check, int *check_text)
{
    sfEvent event;

    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
    ingame->clock.time.microseconds > FPS(2)) {
        sfClock_restart(ingame->clock.timer);
        if (ingame->check.check_quest == 1 && *check_text == 0) {
            *check_text = 4;
            sfText_setString(ingame->text.talk,
            "I want my sword !\nI don't pay you for nothing!");
        }
        set_talk_hall_first(ingame, check_text);
        set_talk_hall_second(ingame, check_text, check);
        (*check_text)++;
    }
}