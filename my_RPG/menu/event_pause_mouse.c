/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** event pause mouse
*/

#include "../include/my.h"

int event_pause_mouse_quit(t_ingame *ingame, int event_start_game)
{
    if (ingame->gestion.event.mouseButton.x > ingame->menu.pause.quitPos.x &&
    ingame->gestion.event.mouseButton.x < ingame->menu.pause.quitPos.x + 190 &&
    ingame->gestion.event.mouseButton.y > ingame->menu.pause.quitPos.y &&
    ingame->gestion.event.mouseButton.y < ingame->menu.pause.quitPos.y + 45) {
        sfSound_play(ingame->menu.bar.sound.click);
        return (3);
    }
    return (event_start_game);
}

int event_pause_mouse(t_ingame *I, int event_start_game)
{
    if (I->gestion.event.mouseButton.x > I->menu.pause.resumePos.x &&
    I->gestion.event.mouseButton.x < I->menu.pause.resumePos.x + 190 &&
    I->gestion.event.mouseButton.y > I->menu.pause.resumePos.y &&
    I->gestion.event.mouseButton.y < I->menu.pause.resumePos.y + 45) {
        sfSound_play(I->menu.bar.sound.click);
        return (1);
    }
    if (I->gestion.event.mouseButton.x > I->menu.pause.returnToMenuPos.x &&
    I->gestion.event.mouseButton.x < I->menu.pause.returnToMenuPos.x + 190 &&
    I->gestion.event.mouseButton.y > I->menu.pause.returnToMenuPos.y &&
    I->gestion.event.mouseButton.y < I->menu.pause.returnToMenuPos.y + 45) {
        sfSound_play(I->menu.bar.sound.click);
        return (2);
    }
    event_start_game = event_pause_mouse_quit(I, event_start_game);
    return (event_start_game);
}