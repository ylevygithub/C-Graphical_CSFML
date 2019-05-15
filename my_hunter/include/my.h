/*
** EPITECH PROJECT, 2018
** my.h
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

struct s_data
{
	int size;
	float speed;
	int time_bird;
	int lvl_bird;
	int hit;
	int lvl;
	int life;
	int esc;
	int ammo;
	int start;
	int end;
};
typedef struct s_data t_data;

struct s_all
{
	sfSprite *fly;
	sfTexture *bird;
	sfText *txt_level;
	sfText *nbr_level;
	sfFont *font;
	sfSprite *life_bar;
	sfTexture *heart;
	sfSprite *ammo_bar;
	sfTexture *bullet;
};
typedef struct s_all t_all;

struct s_window
{
	t_all *all;
	t_data *data;
	t_menu *menu;
	sfVideoMode mode;
	sfRenderWindow *window;
	sfTexture *landscape;
	sfSprite *background;
	sfEvent event;
	sfClock *clock_bird;
};
typedef struct s_window t_window;

sfText* set_txt_level(sfFont *font);
sfText* set_nbr_level(sfFont *font);
sfSprite* set_life_bar(sfTexture *heart);
sfSprite* set_ammo_bar(sfTexture *ammo);
void set_sprite(t_all *all);

void set_button(t_menu *menu);
void set_life(t_window *win, int life);
void set_ammo(t_window *win, int ammo);
void set_lvl(sfText* text, int lvl);
char *int_to_char(int nb);

void initial_settings(t_window *win);
t_all *set_all();
t_menu *set_menu();
t_data *set_data();
t_window *set_window(t_window *win);

void render_end(t_window *win);
void render_menu(t_window *win);
void render_game(t_window *win);

void destroy_win(t_window *win);

void set_bird_frame(t_window *win);
void bird_hit(t_window *win);
void bird_esc(t_window *win);

void check_hit(t_window *win, sfEvent evt);
void check_play(t_window *win, sfEvent evt);
int check_exit(t_window *win, sfEvent evt);

#endif /* MY_H_ */
