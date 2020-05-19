/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my.h
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <curses.h>
#include <ncurses.h>
#include <sys/stat.h>

struct game_object {
	sfSprite *spr;
	sfTexture *tex;
};
typedef struct game_object game_object_t;

struct parallax {
	sfVector2f pos_base;
	sfVector2f pos_one;
	sfVector2f pos_two;
	sfVector2f pos_three;
	game_object_t *stone;
	game_object_t *floor;
	game_object_t *treeone;
	game_object_t *treetwo;
	game_object_t *treethree;
	game_object_t *moon;
	game_object_t *sky;
};
typedef struct parallax parallax_t;

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
	float jumper;
	int gravity;
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
	sfSound *sound;
	sfSoundBuffer *sound_buffer;
};
typedef struct menu menu_t;

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

//main.c
void my_runner(window_t *win);
void game_event(window_t *win);
void game_loop(window_t *win);

// error.c
int error_file(char **);
int error_arg(int );
int usage(char **, int );
int error(char **, int );

// struct.c
game_object_t *set_sprite(game_object_t *, const char *, sfVector2f pos);
parallax_t *set_parallax(parallax_t *);
menu_t *set_menu(menu_t *);
data_t *set_data(data_t *);
window_t *set_window(window_t *, char *);

// life.c
void set_life(menu_t *, int );
void set_text(menu_t *);
void set_score(menu_t *, int );
sfText* level(sfFont *font);
sfText* fin(sfFont *font);

//music.c
void set_music(window_t *win);

// map.c
map_t *set_map(map_t *, char *);
void create_map(map_t *map, char *filename);
void get_nb(map_t *map, char *str);

// parallax.c
void move_background(window_t *win);
void parallax(window_t *, parallax_t *);
void set_frame(window_t *);
void move_jump(window_t *win);

// block.c
void platform_maker(window_t *, map_t *);
int pos_sprite(map_t *map, int i, int y, int blc);
void create_block(map_t *map, int i, int y, int blc);
void create_sprite(map_t *map);

//trap2.c
void set_spike(map_t *map);
void create_spike(map_t *map, int i, int y, int trap);
int pos_spike(map_t *map, int i, int y, int trap);
void trap_maker(window_t *win, map_t *map);

// trap1.c
void play_again(window_t *win);
void game_stop(window_t *win);
int check_trap(window_t *);
void set_death(window_t *);
void set_frame_blood(window_t *);

// gravity.c
int check_ceiling(window_t *);
int check_block(window_t *win, sfVector2f mro);
int check_hit(window_t *);
void set_gravity(window_t *);

// event.c
void set_arrow(window_t *, game_object_t *, game_object_t *);
void event_button(window_t *);
void game_win(window_t *win);
void check_win(window_t *);
void event_jump(window_t *);

// draw.c
void render_game(window_t *, parallax_t *, map_t *);
void render_menu(window_t *, parallax_t *, map_t *);

// destroy.c
void free_map(map_t *map);
void free_all(window_t *);
void destroy_life(window_t *win);
void destroy_win(window_t *);
void destroy_menu(window_t *);

//score.c
char *int_to_char(int nb);
void set_score(menu_t *menu, int score);

#endif