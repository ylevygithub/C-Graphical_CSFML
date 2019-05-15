/*
** EPITECH PROJECT, 2019
** battle
** File description:
** battle
*/

#include "../include/my.h"

int spell_heal(sfEvent event, t_ingame *ingame)
{
    sfVector2f pos_sprite;
    int res;

    pos_sprite = sfSprite_getPosition(ingame->global->attack->heal);
    if (event.mouseButton.x >= pos_sprite.x &&
     event.mouseButton.x < pos_sprite.x + 149
     && event.mouseButton.y >= pos_sprite.y &&
      event.mouseButton.y < pos_sprite.y + 41) {
        res = animation_heal(ingame);
        if (res != 0)
            return (res);
    }
    return (0);
}

int spell_fire(sfEvent event, t_ingame *ingame)
{
    sfVector2f pos_sprite;
    int res;
    
    pos_sprite = sfSprite_getPosition(ingame->global->attack->fire);
    if (event.mouseButton.x >= pos_sprite.x &&
     event.mouseButton.x < pos_sprite.x + 149
     && event.mouseButton.y >= pos_sprite.y &&
      event.mouseButton.y < pos_sprite.y + 41) {
        res = animation_fire(ingame);
        if (res != 0) {
            return (res);
        }
    }
    return (0);
}

int spell_water(sfEvent event, t_ingame *ingame)
{
    sfVector2f pos_sprite;
    int res;
    
    pos_sprite = sfSprite_getPosition(ingame->global->attack->water);
    if (event.mouseButton.x >= pos_sprite.x &&
     event.mouseButton.x < pos_sprite.x + 149
     && event.mouseButton.y >= pos_sprite.y &&
      event.mouseButton.y < pos_sprite.y + 41) {
        res = animation_water(ingame);
        if (res != 0)
            return (res);
    }
    return (0);
}

int attack_menu(sfEvent event, t_ingame *ingame)
{
    sfVector2f pos_sprite;
    int res = 0;

    while (sfRenderWindow_isOpen(ingame->window.window)) {
        if ((res = who_win(ingame)) != 0)
            return (res);
        display_attack(ingame);
        while (sfRenderWindow_pollEvent(ingame->window.window, &event)) {
            detect_event(event, ingame);
        }
    }
    return (0);
}

