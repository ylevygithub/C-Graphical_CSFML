/*
** EPITECH PROJECT, 2019
** header
** File description:
** header
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

#ifndef MY_H_
#define MY_H_

struct button_s {
    sfSprite *play;
    sfSprite *play_button;
    sfSprite *exit;
    sfSprite *exit_button;
    sfSprite *help;
    sfSprite *front;
    sfText *text;
    sfSprite *imgtext;
    sfFont *font;
};
typedef struct button_s button_t;

struct menu_s {
    button_t *btn;
    sfRenderWindow *window;
    sfMusic *music;
    sfSprite *retour_menu;

    sfSound *sound;
    sfSoundBuffer *sound_buffer;
    sfSound *sound1;
    sfSoundBuffer *sound_buffer1;
};
typedef struct menu_s menu_t;

struct canon_cpy_s {
    sfSprite *cpy;
};
typedef struct canon_cpy_s canon_cpy_t;

struct canon_sprite_s {
    sfSprite *one;
    sfSprite *two;
    sfSprite *three;
    sfSprite *four;
    sfSprite *five;
    canon_cpy_t *copy;
};
typedef struct canon_sprite_s canon_sprite_t;

struct spider_s {
    sfSprite *enemy;
    int nbr;
};
typedef struct spider_s spider_t;

typedef struct  s_window
{
    spider_t *spider;
    sfVideoMode     mode;
    sfRenderWindow  *window;
} window_t;

//menu.c
sfSprite *set_background(char *);
button_t *set_menu(void);
void close_window_event(menu_t *);
//print_menu.c
void print_menu(menu_t *);
int print_menu_play(menu_t *);
void print_menu_exit(menu_t *);
int button_actif(menu_t *);
//text_menu.c
sfText *my_text(menu_t *);
void info_text(menu_t *);
//music.c
void set_music(menu_t *);
//menu_gameloop.c                                                                                                                                                            
void retour_menu(menu_t *);
void close_game(sfRenderWindow *, sfEvent );
//./ennemies_management/mainl.c
sfSprite *set_backgroud(char *str);
window_t *set_window(void);
//int my_pollevent(window_t *window, sfEvent event, canon_sprite_t *canon, sfSprite *background, spider_t *spider);
int background();
//./ennemies_management/ennemies.c
spider_t *malloc_of_spider(void);
sfSprite *set_ennemies_sprite(sfRenderWindow *);
int movement(sfRenderWindow*, sfSprite *, float , float );
sfSprite *movement_x(sfRenderWindow*, sfSprite *, float , float );
sfSprite *movement_y(sfRenderWindow*, sfSprite *, float , float );
//ennemies_mangement move_ennemies.c
int movement1_2(spider_t *spider, int move);
int movement3_4_5(spider_t *spider, int move);
int movement6_7_8(spider_t *spider, int move);
int movement9_10_11(spider_t *spider, int move);
int movement12_13(spider_t *spider, int move);
int move_left(spider_t *spider);
int move_right(spider_t *spider);
int move_down(spider_t *spider);
int move_up(spider_t *spider);
//david
sfIntRect *set_canon_rect(void);
void set_canon_recttwo(sfIntRect *rect);
void set_canon_rect_three(sfIntRect *rect);
void set_canon_last(sfIntRect *rect);
int cpy_one(menu_t *menu, canon_sprite_t *canon, sfSprite *background, spider_t *spider);
void print_window(menu_t *menu, canon_sprite_t *canon, sfSprite *background, int x, spider_t *spider);
int my_pollevent(menu_t *menu, sfEvent event, canon_sprite_t *canon, sfSprite *background, spider_t *spider);
int game_loop(menu_t *menu);
void rect_struct_canon(canon_sprite_t *canon);
canon_sprite_t *set_struct_canon(void);
#endif
