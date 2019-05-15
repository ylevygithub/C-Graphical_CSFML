/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "include/my.h"

void my_putstr_error(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int result = 0;

    if (ac != 1) {
        my_putstr_error("One argument. No more, no less.\n");
        return (84);
    }
    else
        result = redirection();
    return (result);
}

t_ingame *set_global(void)
{
    t_ingame *ingame = malloc(sizeof(t_ingame));
    ingame->global = malloc(sizeof(t_global));
    ingame->global->amenu = set_amenu();
    ingame->global->attack = set_struct_attack();
    ingame->global->action = set_struct_aanimation();
    ingame->global->players = set_struct_players();
    ingame->global->p_life = set_struct_life();
    ingame->global->e_life = set_struct_life();
    ingame->global->eaction = set_struct_animation_enemy();
    ingame->global->enemy = set_struct_enemy(); // faire une fonction set par ennemie qui remondifi chaque fois
    ingame->global->caract = set_struct_caract();
    ingame->global->lvl = set_struct_lvl();
    return (ingame);
}

int redirection(void)
{
    t_ingame *ingame = set_global();
    init(ingame);
    if (create_window(ingame) == 84 ||
    create_sprites(ingame) == 84 ||
    create_textures(ingame) == 84 ||
    create_rectangle_shape(ingame) == 84 ||
    create_text(ingame) == 84)
        return (84);
    init_menu(&ingame->menu);
    start_menu(ingame);
    return (0);
}