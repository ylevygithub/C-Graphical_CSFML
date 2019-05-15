/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** menu
*/

#include "../my.h"

sfSprite *set_background(char *str)
{
    sfTexture *texture_back;
    sfSprite *background;

    texture_back = sfTexture_createFromFile(str, NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture_back, sfTrue);
    return (background);
}

button_t *set_menu(void)
{
    button_t *button = malloc(sizeof(button_t));

    button->play = set_background("./img/play.png");
    button->exit = set_background("./img/exit.png");
    button->play_button = set_background("./img/playp.png");
    button->exit_button = set_background("./img/exitp.png");
    button->help = set_background("./img/help.png");
    button->front = set_background("./img/spider.jpg");
    button->imgtext = set_background("./img/spider.jpg");
    return (button);
}

void close_window_event(menu_t *menu)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(menu->window, &event)) {
        if (event.type == sfEvtClosed) {
            sfMusic_stop(menu->music);
            sfMusic_destroy(menu->music);
            sfRenderWindow_close(menu->window);
        }
    }
}

int main(int ac, char **av)
{
    sfVideoMode mode = {1900, 1247, 32};
    sfEvent event;
    sfVector2f pos_play = {600, 700};
    menu_t *menu = malloc(sizeof(menu_t));
    menu->btn = set_menu();
    menu->window = sfRenderWindow_create(mode, "MY_DEFENDER", sfResize | sfClose, NULL);

    if (menu == NULL)
        return (84);
    set_music(menu);
    while (sfRenderWindow_isOpen(menu->window)) {
        close_window_event(menu);
        if (button_actif(menu) == 84)
            return (84);
    }
    free(menu->btn);
    free(menu);
    return (0);
}
