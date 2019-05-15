/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** how to play
*/

#include "../include/my.h"

void select_htp_other_texture(t_ingame *I)
{
    sfSprite_setTexture(I->menu.htp.pKeyTextSprite,
    I->menu.htp.pKeyTextTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.fontSprite,
    I->menu.htp.fontTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.returnSprite,
    I->menu.htp.returnTexture, sfTrue);
}

void select_htp_texture(t_ingame *I)
{
    sfSprite_setTexture(I->menu.htp.htpSprite,
    I->menu.htp.htpTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.arrowSprite,
    I->menu.htp.arrowTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.arrowTextSprite,
    I->menu.htp.arrowTextTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.spaceSprite,
    I->menu.htp.spaceTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.spaceTextSprite,
    I->menu.htp.spaceTextTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.mouseSprite,
    I->menu.htp.mouseTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.mouseTextSprite,
    I->menu.htp.mouseTextTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.iKeySprite,
    I->menu.htp.iKeyTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.iKeyTextSprite,
    I->menu.htp.iKeyTextTexture, sfTrue);
    sfSprite_setTexture(I->menu.htp.pKeySprite,
    I->menu.htp.pKeyTexture, sfTrue);
}

int event_htp_mouse(t_ingame *I, int event_htp_mouse)
{
    if (I->gestion.event.mouseButton.x > I->menu.htp.returnPos.x &&
    I->gestion.event.mouseButton.x < I->menu.htp.returnPos.x + 300 &&
    I->gestion.event.mouseButton.y > I->menu.htp.returnPos.y &&
    I->gestion.event.mouseButton.y < I->menu.htp.returnPos.y + 150) {
        sfSound_play(I->menu.bar.sound.click);
        return (1);
    }
    return (0);
}

void display_htp(t_ingame *I)
{
    sfRenderWindow_drawSprite(I->window.window, I->menu.fontSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.htpSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.arrowSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.arrowTextSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.spaceSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.spaceTextSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.mouseSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.mouseTextSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.iKeySprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.iKeyTextSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window, I->menu.htp.pKeySprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.pKeyTextSprite, NULL);
    sfRenderWindow_drawSprite(I->window.window,
    I->menu.htp.returnSprite, NULL);
    sfRenderWindow_display(I->window.window);
}

int start_htp(t_ingame *ingame)
{
    int event_start_game = 0;

    select_htp_texture(ingame);
    select_htp_other_texture(ingame);
    while (!event_start_game) {
        sfRenderWindow_pollEvent(ingame->window.window,
        &ingame->gestion.event);
        if (ingame->gestion.event.type == sfEvtMouseButtonPressed)
            event_start_game = event_htp_mouse(ingame, event_start_game);
        sfRenderWindow_clear(ingame->window.window, sfBlack);
        display_htp(ingame);
        global_clock(10000);
    }
    return (0);
}