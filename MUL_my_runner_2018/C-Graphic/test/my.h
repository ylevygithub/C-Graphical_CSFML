/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

struct s_menu
{
    sfSprite *play;
    sfTexture *play_btn;
    sfSprite *exit;
    sfTexture *exit_btn;
    sfMusic *music;
    sfSound *awp;
    sfSoundBuffer *awp_buffer;
};
typedef struct s_menu t_menu;

/*struct s_data
{
    int size;
    float speed;
//    int time_bird;
//    int lvl_bird;
    int hit;
//    int lvl;
    int life;
    int esc;
//    int ammo;
    int start;
    int end;
};
typedef struct s_data t_data;
*/
struct s_all
{
    sfSprite *run;
    sfTexture *runner;
//    sfText *txt_level;
//    sfText *nbr_level;
//    sfFont *font;
//    sfSprite *life_bar;
//    sfTexture *heart;
//    sfSprite *ammo_bar;
//    sfTexture *bullet;
};
typedef struct s_all t_all;

struct s_window
{
    t_all *all;
//    t_data *data;
    t_menu *menu;
    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *landscape;
    sfSprite *background;
    sfEvent event;
    sfClock *clock_runner;
    //                                                                                                                                                                     
    sfTexture *bg1;
    sfTexture *bg2;
};
typedef struct s_window t_window;

t_window *set_window(t_window *win);
t_all *set_all();
//t_data *set_data();
t_menu *set_menu();
#endif /* MY_H_ */
