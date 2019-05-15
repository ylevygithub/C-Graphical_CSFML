/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** start_game
*/

#include "../include/my.h"

void play_touch_sound(t_ingame *ingame)
{
    if (ingame->menu.bar.sound.once == 0) {
        ingame->menu.bar.sound.once = 1;
        sfSound_play(ingame->menu.bar.sound.touch);
    }
}

void global_clock(int time_max_value)
{
    sfClock *clock = sfClock_create();
    sfTime time;

    time = sfClock_getElapsedTime(clock);
    while (time.microseconds < (time_max_value)) {
        time = sfClock_getElapsedTime(clock);
    }
}

void display_menu(t_ingame *I)
{
    sfRenderWindow_clear(I->window.window, sfBlack);
    sfRenderWindow_drawSprite(I->window.window, I->menu.fontSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.logoSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.bar.startSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.bar.settingsSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.bar.creditsSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.bar.quitSprite, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.text.start, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.text.settings, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.text.credits, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.text.quit, NULL);
    sfRenderWindow_display(I->window.window);
}

void start_menu(t_ingame *I)
{
    int event_start_game = 0;

    //(I->gestion.event.type == sfEvtClosed) ? I->gestion.event.type = 0 : 1;
    global_clock(80000);
    while (!event_start_game) {
        sfRenderWindow_pollEvent(I->window.window, &I->gestion.event);
        select_menu_texture(I);
        // if (I->gestion.event.type == sfEvtClosed) {
        //     sfRenderWindow_close(I->window.window);
        // }
        if (I->gestion.event.type == sfEvtKeyPressed) {
            event_start_game =
            event_menu_key(I->gestion.event, event_start_game);
        }
        if (I->gestion.event.type == sfEvtMouseButtonPressed)
            event_start_game = event_menu_mouse(I, event_start_game);
        display_menu(I);
        global_clock(10000);
        (event_start_game == 3) ? event_start_game = start_htp(I) : 1;
    }
    start_event(event_start_game, I);
    destroy_menu(&I->menu);
}