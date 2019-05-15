/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** choose player
*/

#include "../include/my.h"

int event_choose_player_mouse(t_ingame *ingame, int event_start_game)
{
    if (ingame->gestion.event.mouseButton.x > ingame->menu.linkPos.x &&
    ingame->gestion.event.mouseButton.x < ingame->menu.linkPos.x + 256 + 78 &&
    ingame->gestion.event.mouseButton.y > ingame->menu.linkPos.y &&
    ingame->gestion.event.mouseButton.y < ingame->menu.linkPos.y + 256 + 78)
        return (1);
    if (ingame->gestion.event.mouseButton.x > ingame->menu.pinkLinkPos.x &&
    ingame->gestion.event.mouseButton.x < ingame->menu.pinkLinkPos.x + 287 &&
    ingame->gestion.event.mouseButton.y > ingame->menu.pinkLinkPos.y &&
    ingame->gestion.event.mouseButton.y < ingame->menu.pinkLinkPos.y + 338)
        return (2);
}

void select_choose_player_texture(t_ingame *ingame)
{
    sfSprite_setTexture(ingame->menu.linkSprite,
    ingame->menu.linkTexture, sfTrue);
    sfSprite_setTexture(ingame->menu.pinkLinkSprite,
    ingame->menu.pinkLinkTexture, sfTrue);
}

void display_choose_player(t_ingame *ingame)
{
    sfRenderWindow_clear(ingame->window.window, sfBlack);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->menu.fontSprite, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->menu.linkSprite, NULL);
    sfRenderWindow_drawSprite(ingame->window.window,
    ingame->menu.pinkLinkSprite, NULL);
    sfRenderWindow_display(ingame->window.window);
}

void choose_player(t_ingame *ingame)
{
    int event_start_game = 0;

    select_choose_player_texture(ingame);
    while (!event_start_game
    || (event_start_game != 1 && event_start_game != 2)) {
        sfRenderWindow_pollEvent(ingame->window.window,
        &ingame->gestion.event);
        if (ingame->gestion.event.type == sfEvtMouseButtonPressed)
            event_start_game = event_choose_player_mouse(ingame,
            event_start_game);
        display_choose_player(ingame);
        global_clock(10000);
    }
    ingame->gender = event_start_game;
    first_init(ingame);
    ingame_loop(ingame);
}