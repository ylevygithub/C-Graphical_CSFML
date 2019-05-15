/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** pause menu
*/

#include "../include/my.h"

void select_menu_texture_resume(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.pause.resumePos.x && mousePos.x
    < I->menu.pause.resumePos.x + 190 && mousePos.y > I->menu.pause.resumePos.y
    && mousePos.y < I->menu.pause.resumePos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.pause.resumeSprite,
        I->menu.pause.resume2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.pause.resumeSprite,
        I->menu.pause.resume1Texture, sfTrue);
    }
}

void select_menu_texture_pause_quit(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.pause.quitPos.x && mousePos.x
    < I->menu.pause.quitPos.x + 190 && mousePos.y > I->menu.pause.quitPos.y &&
    mousePos.y < I->menu.pause.quitPos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.pause.quitSprite,
        I->menu.pause.quit2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.pause.quitSprite,
        I->menu.pause.quit1Texture, sfTrue);
    }
}

void select_pause_texture(t_ingame *I)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(I->window.window);

    select_menu_texture_resume(I, mousePos);
    select_menu_texture_pause_quit(I, mousePos);
    if (mousePos.x > I->menu.pause.returnToMenuPos.x && mousePos.x
    < I->menu.pause.returnToMenuPos.x + 190 && mousePos.y >
    I->menu.pause.returnToMenuPos.y && mousePos.y <
    I->menu.pause.returnToMenuPos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.pause.returnToMenuSprite,
        I->menu.pause.returnToMenu2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.pause.returnToMenuSprite,
        I->menu.pause.returnToMenu1Texture, sfTrue);
    }
    sfSprite_setTexture(I->menu.fontSprite,
    I->menu.fontTexture, sfTrue);
}

void display_pause(t_ingame *I)
{
    sfRenderWindow_clear(I->window.window, sfBlack);
    sfRenderWindow_drawSprite(I->window.window, I->menu.fontSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.pause.resumeSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.pause.returnToMenuSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.pause.quitSprite, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.pause.resumeText, NULL);
    sfRenderWindow_drawText(I->window.window,
    I->menu.pause.returnToMenuText, NULL);
    sfRenderWindow_drawText(I->window.window, I->menu.pause.quitText, NULL);
    sfRenderWindow_display(I->window.window);
}

int start_pause(t_ingame *ingame)
{
    int event_start_game = 0;

    while (!event_start_game
    || (event_start_game != 1 && event_start_game != 2
    && event_start_game != 3)) {
        select_pause_texture(ingame);
        sfRenderWindow_pollEvent(ingame->window.window,
        &ingame->gestion.event);
        if (ingame->gestion.event.type == sfEvtMouseButtonPressed)
            event_start_game = event_pause_mouse(ingame, event_start_game);
        display_pause(ingame);
        global_clock(10000);
    }
    return (event_start_game);
}