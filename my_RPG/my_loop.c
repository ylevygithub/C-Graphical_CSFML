/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** hunter gang
*/

#include "include/my.h"
#include <stdio.h>

void first_init(t_ingame *ingame)
{
    sfVector2f size = {1.8, 1.8};

    sfRenderWindow_setFramerateLimit(ingame->window.window, 60);
    set_allpositions(ingame);
    sfSprite_setScale(ingame->sprite.sprite, size);
    sfIntRect rectangle = {10, 73, 27, 32};
    sfSprite_setTextureRect(ingame->sprite.sprite, rectangle);
}

void check_clock(t_ingame *ingame)
{
    if (ingame->clock.seconds > 4)
        sfClock_restart(ingame->clock.clock_run);
}

void set_time(t_ingame *ingame)
{
    ingame->clock.time_run = sfClock_getElapsedTime(ingame->clock.clock_run);
}

void ingame_loop(t_ingame *ingame)
{
    sfEvent event;
    int result_pause = 0;

    while (sfRenderWindow_isOpen(ingame->window.window) && (result_pause != 2 && result_pause != 3)) {
        while (sfRenderWindow_pollEvent(ingame->window.window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(ingame->window.window);
        }
        // set_time(ingame);
        check_keyboard(ingame);
        draw_sprites(ingame);
        // run_right(ingame);
        instances_hub(ingame);
        // check_clock(ingame);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
           result_pause = start_pause(ingame);
    }
    (result_pause == 2) ? start_menu(ingame) : 1;
    (result_pause == 3) ? sfRenderWindow_close(ingame->window.window) : 1;
    destruction(ingame);
}

void instances_hub(t_ingame *ingame)
{
    foxy_house_out(ingame);
    foxy_house_in(ingame);
    hall_out(ingame);
    hall_in(ingame);
    hall_talk(ingame);
    mission_part_one(ingame);
}