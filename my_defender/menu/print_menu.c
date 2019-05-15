/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** print the menu
*/

#include "../my.h"

void print_menu(menu_t *menu)
{
    sfVector2f pos_play = {600, 700};
    sfVector2f pos_exit = {900, 700};
    sfVector2f pos_help = {650, 300};

    sfRenderWindow_clear(menu->window, sfBlack);

    sfSprite_setPosition(menu->btn->play, pos_play);
    sfSprite_setPosition(menu->btn->exit, pos_exit);
    sfSprite_setPosition(menu->btn->help, pos_help);

    sfRenderWindow_drawSprite(menu->window, menu->btn->front, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->play, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->exit, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->help, NULL);

    sfRenderWindow_display(menu->window);
}

int print_menu_play(menu_t *menu)
{
    sfVector2f pos_play = {600, 700};
    sfVector2f pos_exit = {900, 700};
    sfVector2f pos_help = {650, 300};

    sfRenderWindow_clear(menu->window, sfBlack);

    sfSprite_setPosition(menu->btn->play_button, pos_play);
    sfSprite_setPosition(menu->btn->exit, pos_exit);
    sfSprite_setPosition(menu->btn->help, pos_help);

    sfRenderWindow_drawSprite(menu->window, menu->btn->front, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->play_button, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->exit, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->help, NULL);

    sfRenderWindow_display(menu->window);
    game_loop(menu);
    return (0);
}

void print_menu_exit(menu_t *menu)
{
    sfVector2f pos_play = {600, 700};
    sfVector2f pos_exit = {900, 700};
    sfVector2f pos_help = {650, 300};

    sfRenderWindow_clear(menu->window, sfBlack);

    sfSprite_setPosition(menu->btn->play, pos_play);
    sfSprite_setPosition(menu->btn->exit_button, pos_exit);
    sfSprite_setPosition(menu->btn->help, pos_help);

    sfRenderWindow_drawSprite(menu->window, menu->btn->front, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->play, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->exit_button, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->btn->help, NULL);

    sfRenderWindow_display(menu->window);
    sfRenderWindow_close(menu->window);
}

int button_actif(menu_t *menu)
{
    sfEvent event;
    sfVector2f pos_play = {600, 700};
    sfVector2f pos_exit = {900, 700};
    sfVector2f pos_help = {650, 300};

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(menu->window);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (event.mouseButton.x >= pos_play.x && event.mouseButton.x <= pos_play.x + 222
        && event.mouseButton.y >= pos_play.y && event.mouseButton.y <= pos_play.y + 100)
            print_menu_play(menu);
        if (event.mouseButton.x >= pos_exit.x && event.mouseButton.x <= pos_exit.x + 193
        && event.mouseButton.y >= pos_exit.y && event.mouseButton.y <= pos_exit.y + 100)
            print_menu_exit(menu);
        if (event.mouseButton.x >= pos_help.x && event.mouseButton.x <= pos_help.x + 410
        && event.mouseButton.y >= pos_help.y && event.mouseButton.y <= pos_help.y + 410)
            info_text(menu);
    }
    else
        print_menu(menu);
    return (0);
}
