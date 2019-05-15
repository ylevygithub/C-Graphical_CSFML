/*
** EPITECH PROJECT, 2018
** my
** File description:
** header file that contains the prototypes libmy
*/

#include <stdarg.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <unistd.h>
#include <stdlib.h>
#include <SFML/System/Vector2.h>
#include <SFML/Window/Types.h>
#include <SFML/Window/Export.h>
#include <stdio.h>
#include <time.h>

#ifndef MY_H_
#define MY_H_
#define SECOND 1000000
#define FPS(x) (SECOND / (x))

typedef struct s_text
{
    sfText *talk;
    sfText *primary_quest;
    sfFont *font;
    sfText *start;
    sfText *settings;
    sfText *credits;
    sfText *quit;
} t_text;

typedef struct s_sound
{
    sfMusic *music;
    sfMusic *fly;
    int once;
    sfSound *touch;
    sfSound *click;
    sfSoundBuffer *touchBuffer;
    sfSoundBuffer *clickBuffer;
} t_sound;

typedef struct s_bar
{
    sfSprite *startSprite;
    sfSprite *settingsSprite;
    sfSprite *creditsSprite;
    sfSprite *quitSprite;
    sfTexture *startTexture;
    sfTexture *settingsTexture;
    sfTexture *creditsTexture;
    sfTexture *quitTexture;
    sfVector2f startPos;
    sfIntRect startRect;
    sfTexture *start1Texture;
    sfTexture *start2Texture;
    sfTexture *settings1Texture;
    sfTexture *settings2Texture;
    sfTexture *credits1Texture;
    sfTexture *credits2Texture;
    sfTexture *quit1Texture;
    sfTexture *quit2Texture;
    sfVector2f settingsPos;
    sfVector2f creditsPos;
    sfVector2f quitPos;
    t_sound sound;
} t_bar;


typedef struct s_time
{
    sfTime time;
    sfClock* clock;
} t_time;

typedef struct s_clocks
{
    t_time gameClock;
    t_time moveClock;
} t_clocks;

typedef struct s_gestion {
    sfEvent event;
} t_gestion;

typedef struct s_settings {
} t_settings;

typedef struct s_htp {
    sfSprite *htpSprite;
    sfSprite *arrowSprite;
    sfSprite *arrowTextSprite;
    sfSprite *spaceSprite;
    sfSprite *spaceTextSprite;
    sfSprite *mouseSprite;
    sfSprite *mouseTextSprite;
    sfSprite *iKeySprite;
    sfSprite *iKeyTextSprite;
    sfSprite *pKeySprite;
    sfSprite *pKeyTextSprite;
    sfSprite *fontSprite;
    sfSprite *returnSprite;
    sfTexture *htpTexture;
    sfTexture *arrowTexture;
    sfTexture *arrowTextTexture;
    sfTexture *spaceTexture;
    sfTexture *spaceTextTexture;
    sfTexture *mouseTexture;
    sfTexture *mouseTextTexture;
    sfTexture *iKeyTexture;
    sfTexture *iKeyTextTexture;
    sfTexture *pKeyTexture;
    sfTexture *pKeyTextTexture;
    sfTexture *fontTexture;
    sfTexture *returnTexture;
    sfVector2f htpPos;
    sfVector2f arrowPos;
    sfVector2f arrowTextPos;
    sfVector2f spacePos;
    sfVector2f spaceTextPos;
    sfVector2f mousePos;
    sfVector2f mouseTextPos;
    sfVector2f iKeyPos;
    sfVector2f iKeyTextPos;
    sfVector2f pKeyPos;
    sfVector2f pKeyTextPos;
    sfVector2f fontPos;
    sfVector2f returnPos;
} t_htp;

typedef struct s_pause {
    sfText *resume;
    sfText *returnToMenu;
    sfText *quit;
    sfSprite *resumeSprite;
    sfSprite *returnToMenuSprite;
    sfSprite *quitSprite;
    sfTexture *resume1Texture;
    sfTexture *resume2Texture;
    sfTexture *returnToMenu1Texture;
    sfTexture *returnToMenu2Texture;
    sfTexture *quit1Texture;
    sfTexture *quit2Texture;
    sfVector2f resumePos;
    sfVector2f returnToMenuPos;
    sfVector2f quitPos;
    sfText *resumeText;
    sfText *returnToMenuText;
    sfText *quitText;
} t_pause;

typedef struct s_menu
{
    sfSprite *fontSprite;
    sfSprite *linkSprite;
    sfSprite *pinkLinkSprite;
    sfTexture *fontTexture;
    sfTexture *linkTexture;
    sfTexture *pinkLinkTexture;
    sfMusic *music;
    t_bar bar;
    t_text text;
    t_settings settings;
    t_htp htp;
    t_pause pause;
    sfSprite *logoSprite;
    sfTexture *logoTexture;
    sfVector2f logoPos;
    sfVector2f linkPos;
    sfVector2f pinkLinkPos;
} t_menu;

/*-----------------------------------------------DAVID-------------------*/
typedef struct s_battle
{
    sfSprite *background;
    sfSprite *attack;
    sfSprite *menu;
    sfSprite *exit;
    sfSprite *bag;
} t_battle;

typedef struct s_caract
{
    sfSprite *name;
    int hp_max;
    int hp;
    int dommage;
    int lvl;
    int xp;
} t_caract;

typedef struct s_enemy
{
    int nbr;
    int hp_max;
    int hp;
    int dommage;
    int xp_done;
} t_enemy;

typedef struct s_position_menu
{
    int x;
    int y;
    int size_x;
    int size_y;
} t_pos_amenu;

typedef struct s_attack
{
    sfSprite *heal;
    sfSprite *fire;
    sfSprite *water;
} t_attack;

typedef struct s_aanimation
{
    sfSprite *heal;
    sfSprite *fire;
    sfSprite *water;
} t_aanimation;

typedef struct s_aanimation_enemy
{
    sfSprite *attack;
} t_aanimation_enemy;

typedef struct s_players
{
    sfSprite *enemy1;
    sfSprite *enemy2;
    sfSprite *enemy3;
    sfSprite *player;
} t_players;

typedef struct s_life
{
    sfSprite *hp;
} t_life;

/*---------------------------------------------------------JOSH--------------------------------*/
typedef struct s_window
{
    sfRenderWindow *window;
} t_window;

typedef struct s_sprite
{
    sfSprite *sprite;
    sfSprite *hallPNG;
    sfSprite *spriteBack;
    sfSprite *hallTalk;
} t_sprite;

typedef struct s_texture
{
    sfTexture *foxy;
    sfTexture *house;
    sfTexture *background;
    sfTexture *hall;
    sfTexture *hallPNG;
    sfTexture *hallTalk;
    sfTexture *foxy_girl;
} t_texture;

typedef struct s_hitbox
{
    sfRectangleShape *foxy_house_out;
    sfRectangleShape *foxy_house_in;
    sfRectangleShape *hall;
    sfRectangleShape *hall_in;
    sfRectangleShape *talkHall;
    sfRectangleShape *mission;
    int check;
} t_hitbox;

typedef struct s_clock
{
    sfTime time;
    sfClock *timer;
    sfTime time_run;
    sfClock *clock_run;
    float seconds;
} t_clock;

typedef struct s_position
{
    sfVector2f DebutPos;
    sfVector2f SecondPos;
    sfVector2f DebutPos2;
    sfVector2f SecondPos2;
    sfVector2f DebutPos3;
    sfVector2f SecondPos3;
    sfVector2f ennemy;
    sfVector2f player;
} t_position;

typedef struct s_check
{
    int check_quest;
    int quest_combat;
    int check_clock;
} t_check;

typedef struct s_lvl
{
    sfSprite *lvl;
} t_lvl;

typedef struct s_global
{
    t_battle *amenu;
    t_attack *attack;
    t_aanimation *action;
    t_aanimation_enemy *eaction;
    t_players *players;
    t_life *p_life;
    t_life *e_life;
    t_enemy *enemy;
    t_caract *caract;
    t_lvl *lvl;
} t_global;

typedef struct s_ingame
{
    t_text text;
    t_sprite sprite;
    t_texture texture;
    t_sound sound;
    t_clock clock;
    t_position position;
    t_check check;
    t_window window;
    t_hitbox hitbox;
    t_menu menu;
    t_gestion gestion;
    t_clocks clocks;
    t_global *global;
    int gender;
} t_ingame;

int redirection(void);
/*------------------------------CREATION------------------------------*/
int create_sprites(t_ingame *ingame);
int create_textures(t_ingame *ingame);
int create_window(t_ingame *ingame);
int create_rectangle_shape(t_ingame *ingame);
/*-------------------------------MISSION------------------------------*/
void mission_part_one(t_ingame *ingame);
void talk_combat_loop(t_ingame *ingame);
void set_talk_combat(t_ingame *ingame);
void skip_talk_first_quest(t_ingame *ingame, int *check, int *check_text);
/*------------------------------PLAYER------------------------------*/
void player_up(t_ingame *ingame);
void player_left(t_ingame *ingame, int *check);
void player_down(t_ingame *ingame);
void player_right(t_ingame *ingame, int *check);
void run_up(t_ingame *ingame);
void run_down(t_ingame *ingame);
void run_left(t_ingame *ingame);
void run_right(t_ingame *ingame);
/*------------------------------CHECK------------------------------*/
void check_sidekeyboard(t_ingame *ingame);
void check_keyboard(t_ingame *ingame);
void check_firstposition(t_ingame *ingame);
void check_secondposition(t_ingame *ingame);
void check_thirdposition(t_ingame *ingame);
/*------------------------------DESTRUCTION------------------------------*/
void destruction(t_ingame *ingame);
void second_destruction(t_ingame *ingame);
/*------------------------------TALKING_SCENES--------------------------*/
void skip_talk_hall(t_ingame *ingame, int *check, int *check_text);
void set_quest(t_ingame *ingame, char *text);
void set_talk(t_ingame *ingame, char *text);
void set_talk_text(t_ingame *ingame);
void hall_talk_loop(t_ingame *ingame);
void draw_text(t_ingame *ingame);
void set_position_talk(t_ingame *ingame);
/*------------------------------INSTANCES--------------------------------*/
void instances_hub(t_ingame *ingame);
void foxy_house_out(t_ingame *ingame);
void foxy_house_in(t_ingame *ingame);
void hall_out(t_ingame *ingame);
void hall_talk(t_ingame *ingame);
void hall_in(t_ingame *ingame);
/*-----------------------------SET--------------------------------------*/
void set_allpositions(t_ingame *ingame);
void set_texture(t_ingame *ingame);
void set_color(t_ingame *ingame);
void set_size(t_ingame *ingame);
void set_png(t_ingame *ingame);
void first_init(t_ingame *ingame);
void draw_sprites(t_ingame *ingame);
void draw_text_combat(t_ingame *ingame);
void player_movement(t_ingame *ingame);
void ingame_loop(t_ingame *ingame);
int create_text(t_ingame *ingame);

/*----------------------------ATTACK.D.---------------------------------*/
/*attack.c*/
int spell_heal(sfEvent event, t_ingame *ingame);
int spell_fire(sfEvent event, t_ingame *ingame);
int spell_water(sfEvent event, t_ingame *ingame);
int attack_menu(sfEvent event, t_ingame *ingame);
/*attack_enemy.c*/
int substract_player_hp(t_ingame *ingame);
int enemy_attack_action(t_ingame *ingame, sfIntRect *rect, sfTime cool);
int enemy_attack(t_ingame *ingame);
/*display.c*/
int display(t_ingame *ingame);
int display_suite(t_ingame *ingame);
int display_attack(t_ingame *ingame);
int display_attack_suite(t_ingame *ingame);
/*display_action.c*/
int display_action_heal(t_ingame *ingame);
int display_action_fire(t_ingame *ingame);
int display_action_water(t_ingame *ingame);
int display_action_enemy(t_ingame *ingame, int x);
/*display_action_suite*/
int display_action_heal_suite(t_ingame *ingame);
int display_action_fire_suite(t_ingame *ingame);
int display_action_water_suite(t_ingame *ingame);
int display_action_enemy_suite(t_ingame *ingame, int x);
/*fire.c*/
int substract_enemy_hp(t_ingame *ingame);
int animation_fire_action(t_ingame *ingame, sfIntRect *rect, sfTime cool);
int animation_fire(t_ingame *ingame);
/*heal.c*/
int animation_heal_action(t_ingame *ingame, sfIntRect *rect, sfTime cool);
int animation_heal(t_ingame *ingame);
/*my_rand.c*/
int my_rand();
int my_rand_attack_p(t_ingame *ingame);
int my_rand_heal_p(t_ingame *ingame);
int my_rand_attack_e(t_ingame *ingame);
/*set_caract.c*/
t_caract *set_struct_caract(void);
t_enemy *set_struct_enemy();
int heal(t_ingame *ingame);
/*set_enemy.c*/
t_players *set_struct_players(void);
void set_position_players(t_players *players);
t_aanimation_enemy *set_struct_animation_enemy(void);
void set_position_animation_enemy(t_aanimation_enemy *eaction);
/*set_rect_heal*/
sfIntRect *set_heal_rect(void);
void set_heal_recttwo(sfIntRect *rect);
void set_heal_rect_three(sfIntRect *rect);
void set_heal_four(sfIntRect *rect);
/*set_rect_heal_two.c*/
void set_heal_five(sfIntRect *rect);
void set_heal_six(sfIntRect *rect);
/*set_struct.c*/
sfSprite *set_backgroud(char *str);
t_window *set_window(void);
t_battle *set_amenu(void);
void set_pos_struct_amenu();
void set_position_sprite(t_battle *amenu);
/*set_struct_attack.c*/
t_attack *set_struct_attack(void);
void set_position_attack(t_attack *attack);
t_aanimation *set_struct_aanimation(void);
void set_position_action(t_aanimation *action);
/*set_struct_life.c*/
t_life *set_struct_life(void);
void set_position_p_life(t_life *life);
void set_position_e_life(t_life *life);
/*water.c*/
int animation_water_action(t_ingame *ingame, sfIntRect *rect, sfTime cool);
int animation_water(t_ingame *ingame);
/*xp_manager.c*/
t_lvl *set_struct_lvl(void);
void set_position_lvl(t_lvl *lvl);
int first_game(t_ingame *ingame, int x);
int add_xp(t_ingame *ingame);
/*detect_event.c*/
int detect_spell(sfEvent event, t_ingame *ingame);
int who_win(t_ingame *ingame);
int detect_event(sfEvent event, t_ingame *ingame);
/*main.c*/
int my_pollevent(sfEvent event, t_ingame *ingame);
int attack(t_ingame *ingame);
int attack_start(t_ingame *ingame);

/*---------------------------------THEO-------------------------*/
/*start_game*/
void start_menu(t_ingame *ingame);

/*event*/
int event_menu_key(sfEvent event, int event_start_game);
int event_menu_mouse(t_ingame *ingame, int event_start_game);
void start_event(int event_start_game, t_ingame *ingame);
void start_map(t_ingame *ingame);
void play_touch_sound(t_ingame *ingame);
void select_map_menu_texture(t_ingame *ingame);
int event_map_menu_mouse(t_ingame *ingame, int event_start_game);
void display_map_menu(t_ingame *ingame);
void global_clock(int time_max_value);
char *int_to_str(int nb);
void init(t_ingame *ingame);
void init_pos_menu(t_menu *menu);
void init_sound_menu(t_menu *menu);
void init_text_menu(t_menu *menu);
void init_sprite_menu(t_menu *menu);
void init_texture_menu(t_menu *menu);
void select_menu_texture(t_ingame *ingame);
int add_size(int nb, int op);
void init_gestion(t_gestion *gestion);
void init_menu(t_menu *menu);
void init_clocks(t_clocks *clocks);
void choose_player(t_ingame *ingame);
void start_settings(t_ingame *ingame);
int event_pause_mouse(t_ingame *ingame, int event_start_game);
int start_pause(t_ingame *ingame);
t_ingame *set_global(void);
int start_htp(t_ingame *ingame);
/*------------destroy------------*/
/*destroy_global.c*/
void destroy_battle(t_battle *amenu);
void destroy_attack(t_attack *attack);
void destroy_action(t_aanimation *action);
void destroy_players(t_players *players);
void destroy_global(t_global *global);
/*destroy_menu.c*/
void destroy_sound(t_sound *sound);
void destroy_bar(t_bar *bar);
void destroy_text(t_text *text);
void destroy_pause(t_pause *pause);
void destroy_menu(t_menu *menu);
/*destroy_htp.c*/
void destroy_texture_htp(t_htp *htp);
void destroy_sprite_htp(t_htp *htp);

#endif
