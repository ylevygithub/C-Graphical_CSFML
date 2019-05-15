/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** event.c
*/

#include "../include/my.h"

int event_menu_key(sfEvent event, int event_start_game)
{
    if (event.key.code == sfKeyEscape ||
        event.type == sfEvtClosed) {
        return (4);
    }
    return (event_start_game);
}

int event_menu_mouse_settings_and_credits(t_ingame *I)
{
    if (I->gestion.event.mouseButton.x > I->menu.bar.settingsPos.x &&
    I->gestion.event.mouseButton.x < I->menu.bar.settingsPos.x + 190 &&
    I->gestion.event.mouseButton.y > I->menu.bar.settingsPos.y &&
    I->gestion.event.mouseButton.y < I->menu.bar.settingsPos.y + 45) {
        sfSound_play(I->menu.bar.sound.click);
        return (2);
    }
    if (I->gestion.event.mouseButton.x > I->menu.bar.creditsPos.x &&
    I->gestion.event.mouseButton.x < I->menu.bar.creditsPos.x + 190 &&
    I->gestion.event.mouseButton.y > I->menu.bar.creditsPos.y &&
    I->gestion.event.mouseButton.y < I->menu.bar.creditsPos.y + 45) {
        sfSound_play(I->menu.bar.sound.click);
        return (3);
    }
    return (0);
}

int event_menu_mouse(t_ingame *ingame, int event_start_game)
{
    event_start_game = event_menu_mouse_settings_and_credits(ingame);
    if (ingame->gestion.event.mouseButton.x > ingame->menu.bar.startPos.x &&
    ingame->gestion.event.mouseButton.x < ingame->menu.bar.startPos.x + 190 &&
    ingame->gestion.event.mouseButton.y >ingame->menu.bar.startPos.y &&
    ingame->gestion.event.mouseButton.y < ingame->menu.bar.startPos.y + 45) {
        sfSound_play(ingame->menu.bar.sound.click);
        return (1);
    }
    if (ingame->gestion.event.mouseButton.x > ingame->menu.bar.quitPos.x &&
    ingame->gestion.event.mouseButton.x < ingame->menu.bar.quitPos.x + 190 &&
    ingame->gestion.event.mouseButton.y > ingame->menu.bar.quitPos.y &&
    ingame->gestion.event.mouseButton.y < ingame->menu.bar.quitPos.y + 45) {
        sfSound_play(ingame->menu.bar.sound.click);
        return (4);
    }
    return (event_start_game);
}