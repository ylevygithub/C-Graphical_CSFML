/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"

int detect_button_menu(sfEvent event, t_ingame *ingame)
{
    int res;
    sfVector2f pos_sprite;
    
    pos_sprite = sfSprite_getPosition(ingame->global->amenu->attack);
    if (event.mouseButton.x >= pos_sprite.x &&
     event.mouseButton.x < pos_sprite.x + 149
    && event.mouseButton.y >= pos_sprite.y &&
     event.mouseButton.y < pos_sprite.y + 41) {
        res = attack_menu(event, ingame);
        if (res != 0)
            return (res);
    }
    pos_sprite = sfSprite_getPosition(ingame->global->amenu->exit);
    if (event.mouseButton.x >= pos_sprite.x &&
     event.mouseButton.x < pos_sprite.x + 149
    && event.mouseButton.y >= pos_sprite.y &&
    event.mouseButton.y < pos_sprite.y + 41) {
        return (3);
    }
    return (0);
}

int my_pollevent(sfEvent event, t_ingame *ingame)
{
    sfVector2f pos_sprite;
    int res;

    while (sfRenderWindow_pollEvent(ingame->window.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(ingame->window.window);

        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            return (detect_button_menu(event, ingame));
        }
    }
    return (0);
}

int attack(t_ingame *ingame)
{
    sfEvent event;
    int res = 0;

    while (sfRenderWindow_isOpen(ingame->window.window)) {
        res = my_pollevent(event, ingame);
        if (res != 0)
            return (res);
        display(ingame);
    }
    return (0);
}

int attack_start(t_ingame *ingame)
{
    int res;
    
    set_position_sprite(ingame->global->amenu);
    set_position_attack(ingame->global->attack);
    set_position_action(ingame->global->action);
    set_position_players(ingame->global->players);
    set_position_p_life(ingame->global->p_life);
    set_position_e_life(ingame->global->e_life);
    set_position_animation_enemy(ingame->global->eaction);
    set_position_lvl(ingame->global->lvl);
    if (!ingame->window.window)
        return(84);
    res = attack(ingame);
    if (res != 0) {
        return (res);
    }
    return (0);
}