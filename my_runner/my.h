/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H
#define MY_H

struct game_object {
	sfSprite *spr;
	sfTexture *tex;
};
typedef struct game_object game_object_t;

struct map {
	char **map;
	char *filename;
        int blc;
	int trap;
	sfVector2f flag;
	game_object_t **blk;
	game_object_t **spk;
};
typedef struct map map_t;

struct data {
	int start;
	int end;
	int lastp;
	int laste;
	int btn;
	int frm;
	int jump;
	float jp;
	int gv;
	int hit;
	int life;
	int dead;
	int score;
	int win;
	int size;
};
typedef struct data data_t;

struct menu {
        game_object_t *play;
	game_object_t *exit;
	game_object_t *life;
	sfTexture *playp;
	sfTexture *exitp;
	sfTexture *life_two;
	sfTexture *life_one;
	sfTexture *life_zero;
	sfTexture *life_three;
	sfText *score;
	sfText *level;
	sfText *fin;
	sfFont *font;
	sfMusic *music;
	sfSound *intro;
	sfSoundBuffer *intro_buffer;
	sfSound *over;
	sfSoundBuffer *over_buffer;
};
typedef struct menu menu_t;

struct parallax {
	sfVector2f pos_base;
	sfVector2f pos_one;
	sfVector2f pos_two;
	sfVector2f pos_three;
	game_object_t *stone;
	game_object_t *floor;
	game_object_t *one;
	game_object_t *two;
	game_object_t *three;
	game_object_t *moon;
	game_object_t *sky;
};
typedef struct parallax parallax_t;

struct window {
	parallax_t *plx;
	menu_t *menu;
	data_t *data;
	map_t *map;
	sfRenderWindow *window;
	sfEvent event;
	game_object_t *mario;
	sfVector2f ini;
	sfClock *clock;
	game_object_t *blood;
};
typedef struct window window_t;

int usage(int , char **);
int error(int ac);
int error_arg(int ac);
window_t *set_window(window_t *win);
game_object_t *set_sprite(game_object_t *obj, const char *nm, sfVector2f pos);
parallax_t *set_parallax(parallax_t *plx);
data_t *set_data(data_t *data);
void game_loop(window_t *win);
void game_event(window_t *win);
int check_exit(window_t *win, sfEvent evt);
int pos_sprite(map_t *map, int i, int y, int blc);
#endif  /* MY_H */
