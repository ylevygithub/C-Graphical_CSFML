/*
** EPITECH PROJECT, 2019
** set_canon
** File description:
** canon
*/

#include "../my.h"

void rect_struct_canon(canon_sprite_t *canon)
{
	sfIntRect *rect = set_canon_rect();	
	sfSprite_setTextureRect(canon->one, rect[0]);
	sfSprite_setTextureRect(canon->two, rect[1]);
	sfSprite_setTextureRect(canon->three, rect[2]);
	sfSprite_setTextureRect(canon->four, rect[3]);
	sfSprite_setTextureRect(canon->five, rect[4]);
	
}

canon_sprite_t *set_struct_canon(void)
{
	canon_sprite_t *canon = malloc(sizeof(canon_sprite_t));

	canon->one = set_backgroud("./canon/canon.png");
	canon->two = set_backgroud("./canon/canon.png");
	canon->three = set_backgroud("./canon/canon.png");
	canon->four = set_backgroud("./canon/canon.png");
	canon->five = set_backgroud("./canon/canon.png");
	canon->copy = malloc(sizeof(canon_cpy_t) * 15);
	rect_struct_canon(canon);
	return (canon);
}
