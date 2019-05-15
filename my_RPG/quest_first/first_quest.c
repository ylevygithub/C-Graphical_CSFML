/*
** EPITECH PROJECT, 2019
** first quest
** File description:
** first quest
*/

#include "../include/my.h"

void talk_combat_loop(t_ingame *ingame)
{
    int check = 0;
    int check_text = 0;
    sfEvent event;
    sfVector2f quit = {570, 470};
    set_talk_combat(ingame);
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
        skip_talk_first_quest(ingame, &check, &check_text);
    }
}

void skip_talk_first_quest(t_ingame *ingame, int *check, int *check_text)
{
    sfEvent event;
    sfVector2f quit = {770, 140};
    sfVector2f dead = {169, 390};
    int res = 0;

    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
    ingame->clock.time.microseconds > FPS(2)) {
        sfClock_restart(ingame->clock.timer);
        // ingame->global->enemy = set_struct_enemy();
        res = attack_start(ingame);
    }
    if (res == 1 || res == 3) {
        sfSprite_setPosition(ingame->sprite.sprite, quit);
        ingame->global->caract->hp = 10;
        ingame->global->enemy->hp = 10;
        if (res == 1)
            add_xp(ingame);
        ingame_loop(ingame);
    }
    if (res == 2) {
        sfSprite_setPosition(ingame->sprite.sprite, dead);
        ingame->global->caract->hp = 10;
        ingame_loop(ingame);
    }
}