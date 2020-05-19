/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** struct functions
*/

t_window *set_window(t_window *win)
{
//    win->all = set_all();
//    win->data = set_data();
    win->menu = set_menu();
    win->mode = sfVideoMode_getDesktopMode();
    win->window = sfRenderWindow_create(win->mode, "MY_RUNNER",
                                        sfResize | sfClose, NULL);
    win->landscape = sfTexture_createFromFile("../parallax/layers/a.png", NULL);
    win->background = sfSprite_create();
    sfSprite_setTexture(win->background, win->landscape, sfTrue);
    return (win);
}
t_all *set_all()
{
    t_all *all = malloc(sizeof(t_all) + 1);

    set_sprite(all);
    return (all);
}
t_data *set_data()
{
    t_data *data = malloc(sizeof(t_data) + 1);

    data->size = 0;
    data->speed = 2;
    data->time_runner = 50;
    data->lvl_runner = 0;
    data->lvl = 1;
    //data->life = 5;
    //data->ammo = 3;
    data->start = 0;
    data->esc = 0;
    data->start = 0;
    data->hit = 0;
    data->end = 0;
    return (data);
}
t_menu *set_menu()
{
    t_menu *menu = malloc(sizeof(t_menu) + 1);

    set_button(menu);
    return (menu);
}
