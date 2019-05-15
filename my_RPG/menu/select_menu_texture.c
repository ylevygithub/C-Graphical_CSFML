/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** select_menu_texture
*/

#include "../include/my.h"

void select_menu_texture_start(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.bar.startPos.x && mousePos.x
    < I->menu.bar.startPos.x + 190 && mousePos.y > I->menu.bar.startPos.y &&
    mousePos.y < I->menu.bar.startPos.y + 45) {
        (I->menu.bar.sound.once == 0) ? play_touch_sound(I) : 1;
        sfSprite_setTexture(I->menu.bar.startSprite,
        I->menu.bar.start2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        (I->menu.bar.sound.once == 1) ? I->menu.bar.sound.once = 0 : 1;
        sfSprite_setTexture(I->menu.bar.startSprite,
        I->menu.bar.start1Texture, sfTrue);
    }
}

void select_menu_texture_settings(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.bar.settingsPos.x && mousePos.x <
    I->menu.bar.settingsPos.x + 190 && mousePos.y > I->menu.bar.settingsPos.y
    && mousePos.y < I->menu.bar.settingsPos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.bar.settingsSprite,
        I->menu.bar.settings2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.bar.settingsSprite,
        I->menu.bar.settings1Texture, sfTrue);
    }
}

void select_menu_texture_credits(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.bar.creditsPos.x && mousePos.x <
    I->menu.bar.creditsPos.x + 190 && mousePos.y > I->menu.bar.creditsPos.y &&
    mousePos.y < I->menu.bar.creditsPos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.bar.creditsSprite,
        I->menu.bar.credits2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.bar.creditsSprite,
        I->menu.bar.credits1Texture, sfTrue);
    }
}

void select_menu_texture_quit(t_ingame *I, sfVector2i mousePos)
{
    if (mousePos.x > I->menu.bar.quitPos.x && mousePos.x
    < I->menu.bar.quitPos.x + 190 && mousePos.y > I->menu.bar.quitPos.y &&
    mousePos.y < I->menu.bar.quitPos.y + 45) {
        play_touch_sound(I);
        sfSprite_setTexture(I->menu.bar.quitSprite,
        I->menu.bar.quit2Texture, sfTrue);
        I->menu.bar.sound.once = 1;
    }
    else {
        I->menu.bar.sound.once = 0;
        sfSprite_setTexture(I->menu.bar.quitSprite,
        I->menu.bar.quit1Texture, sfTrue);
    }
}

void select_menu_texture(t_ingame *ingame)
{
    sfVector2i mousePos =
    sfMouse_getPositionRenderWindow(ingame->window.window);

    select_menu_texture_start(ingame, mousePos);
    select_menu_texture_settings(ingame, mousePos);
    select_menu_texture_credits(ingame, mousePos);
    select_menu_texture_quit(ingame, mousePos);
    sfSprite_setTexture(ingame->menu.fontSprite,
    ingame->menu.fontTexture, sfTrue);
    sfSprite_setTexture(ingame->menu.logoSprite,
    ingame->menu.logoTexture, sfTrue);
}