/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    t_window *win = malloc(sizeof(t_window) + 1);

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        write(1, "my_runner is a video game, the goal of this game is to avoid the ennemies before it kills you. Good Luck !\n", 108);
    else {
        srand(time(NULL));
//        win = set_window(win);
        sfVideoMode_getDesktopMode();
//        sfRenderWindow_create(win->mode, "MY_RUNNER",
                              sfResize | sfClose, NULL);
        sfTexture_createFromFile("../parallax/layers/a.png", NULL);
//        sfSprite_create();
//        sfSprite_setTexture(win->background, win->landscape, sfTrue);
//        game_loop(win);
    }
    free(win);
    return (0);
}
t_window *set_window(t_window *win)
{
//	win->all = set_all();
//	win->data = set_data();
//	win->menu = set_menu();
	win->mode = sfVideoMode_getDesktopMode();
	win->window = sfRenderWindow_create(win->mode, "MY_RUNNER",
                                        sfResize | sfClose, NULL);
	win->landscape = sfTexture_createFromFile("../parallax/layers/a.png", NULL);
	win->background = sfSprite_create();
	sfSprite_setTexture(win->background, win->landscape, sfTrue);
	return (win);
}
/*t_all *set_all()
{
	t_all *all = malloc(sizeof(t_all) + 1);

	set_sprite(all);
	return (all);
}
t_menu *set_menu()
{
	t_menu *menu = malloc(sizeof(t_menu) + 1);

	set_button(menu);
	return (menu);
}
*/
