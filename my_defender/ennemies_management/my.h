/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
#define MY_H_

typedef struct  s_window
{
	sfVideoMode 	mode;
	sfRenderWindow	*window;
} t_window;

sfSprite *set_backgroud(char *str);
t_window set_window(void);
void my_pullevent(t_window window, sfEvent event);
int background();
sfSprite *set_ennemies_sprite();
int movement(sfRenderWindow* window, sfSprite *background);
int movement2(sfRenderWindow* window, sfSprite *background);
int movement3(sfRenderWindow* window, sfSprite *background);
int movement4(sfRenderWindow* window, sfSprite *background);
int movement5(sfRenderWindow* window, sfSprite *background);
int movement6(sfRenderWindow* window, sfSprite *background);
int movement7(sfRenderWindow* window, sfSprite *background);
int movement8(sfRenderWindow* window, sfSprite *background);
int movement9(sfRenderWindow* window, sfSprite *background);
int movement10(sfRenderWindow* window, sfSprite *background);
int movement11(sfRenderWindow* window, sfSprite *background);
int movement12(sfRenderWindow* window, sfSprite *background);
int movement13(sfRenderWindow* window, sfSprite *background);

#endif