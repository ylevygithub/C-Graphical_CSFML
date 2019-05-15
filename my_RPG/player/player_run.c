/*
** EPITECH PROJECT, 2019
** player
** File description:
** all player function
*/

#include "../include/my.h"

void run_right(t_ingame *ingame)
{
    sfIntRect rectangle = {347, 73, 27, 32};
    sfIntRect rectangle2 = {377, 73, 27, 32};
    sfIntRect rectangle3 = {407, 535, 65, 65};

    ingame->clock.time_run = sfClock_getElapsedTime(ingame->clock.clock_run);
    if (ingame->clock.time_run.microseconds > FPS(5) && ingame->check.check_clock == 0) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle2);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        ingame->check.check_clock = 1;
        sfClock_restart(ingame->clock.clock_run);
    }
    else if (ingame->check.check_clock == 1 && ingame->clock.time_run.microseconds > FPS(5)) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        sfClock_restart(ingame->clock.clock_run);
        ingame->check.check_clock = 0;
    }
}

void run_left(t_ingame *ingame)
{
    sfIntRect rectangle = {347, 73, 27, 32};
    sfIntRect rectangle2 = {377, 73, 27, 32};
    sfIntRect rectangle3 = {407, 535, 65, 65};

    ingame->clock.time_run = sfClock_getElapsedTime(ingame->clock.clock_run);
    if (ingame->clock.time_run.microseconds > FPS(5) && ingame->check.check_clock == 0) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle2);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        ingame->check.check_clock = 1;
        sfClock_restart(ingame->clock.clock_run);
    }
    else if (ingame->check.check_clock == 1 && ingame->clock.time_run.microseconds > FPS(5)) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        sfClock_restart(ingame->clock.clock_run);
        ingame->check.check_clock = 0;
    }
}

void run_up(t_ingame *ingame)
{
    sfIntRect rectangle = {678, 73, 27, 32};
    sfIntRect rectangle2 = {708, 73, 27, 32};
    sfIntRect rectangle3 = {738, 73, 27, 32};

    ingame->clock.time_run = sfClock_getElapsedTime(ingame->clock.clock_run);
    if (ingame->clock.time_run.microseconds > FPS(5) && ingame->check.check_clock == 0) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle2);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        ingame->check.check_clock = 1;
        sfClock_restart(ingame->clock.clock_run);
    }
    else if (ingame->check.check_clock == 1 && ingame->clock.time_run.microseconds > FPS(5)) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        sfClock_restart(ingame->clock.clock_run);
        ingame->check.check_clock = 0;
    }
}

void run_down(t_ingame *ingame)
{
    sfIntRect rectangle = {10, 73, 27, 32};
    sfIntRect rectangle2 = {40, 73, 27, 32};
    sfIntRect rectangle3 = {70, 73, 27, 32};

    ingame->clock.time_run = sfClock_getElapsedTime(ingame->clock.clock_run);
    if (ingame->clock.time_run.microseconds > FPS(5) && ingame->check.check_clock == 0) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle2);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        ingame->check.check_clock = 1;
        sfClock_restart(ingame->clock.clock_run);
    }
    else if (ingame->check.check_clock == 1 && ingame->clock.time_run.microseconds > FPS(5)) {
        sfSprite_setTextureRect(ingame->sprite.sprite, rectangle);
        sfRenderWindow_drawSprite(ingame->window.window, ingame->sprite.sprite, NULL);
        sfClock_restart(ingame->clock.clock_run);
        ingame->check.check_clock = 0;
    }
}