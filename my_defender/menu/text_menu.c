/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** text menu
*/

#include "../my.h"

sfText *my_text(menu_t *menu)
{
    menu->btn->text = sfText_create();
    menu->btn->font = sfFont_createFromFile("img/mikado.OTF");

    sfText_setString(menu->btn->text, "The player is a builder who must defend his castle.\nEnemy waves will regularly appear from one side of the playground.\nThe player must buy and place buildings on the playground grid to block/kill enemies.\n Buildings can be offensive (towers attacking) or defensive (basic walls).\nWhen the castle is reached by an enemy, it takes damages\nIf the castle reaches 0 hit points the player loose.");
    sfText_setFont(menu->btn->text, menu->btn->font);
    sfText_setCharacterSize(menu->btn->text, 48);
    sfText_setPosition(menu->btn->text, (sfVector2f){10, 10});
    sfText_setColor(menu->btn->text, (sfColor){150, 42, 60, 255});
    return (menu->btn->text);
}

void info_text(menu_t *menu)
{
    sfRenderWindow_clear(menu->window, sfBlack);
    menu->btn->text = my_text(menu);
    sfRenderWindow_drawSprite(menu->window, menu->btn->imgtext, NULL);
    sfRenderWindow_drawText(menu->window, menu->btn->text, NULL);
    sfRenderWindow_display(menu->window);
}
