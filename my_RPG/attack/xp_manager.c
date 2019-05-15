/*
** EPITECH PROJECT, 2019
** xp_manager
** File description:
** xp_manager
*/

#include "../include/my.h"

t_lvl *set_struct_lvl(void)
{
	t_lvl *lvl = malloc(sizeof(t_lvl) * 5);
	
	lvl[0].lvl = set_backgroud("sprite/lvl1.png");
	lvl[1].lvl = set_backgroud("sprite/lvl2.png");
	lvl[2].lvl = set_backgroud("sprite/lvl3.png");
	lvl[3].lvl = set_backgroud("sprite/lvl4.png");
	lvl[4].lvl = set_backgroud("sprite/lvl5.png");
    return (lvl);
}

void set_position_lvl(t_lvl *lvl)
{
	sfVector2f vect;
    vect.x = 10;
    vect.y = 500;

	sfSprite_setPosition(lvl[0].lvl, vect);
    sfSprite_setPosition(lvl[1].lvl, vect);
    sfSprite_setPosition(lvl[2].lvl, vect);
    sfSprite_setPosition(lvl[3].lvl, vect);
    sfSprite_setPosition(lvl[4].lvl, vect);
}

int first_game(t_ingame *ingame, int x)
{
	if ((ingame->global->caract->xp + ingame->global->enemy->xp_done) >= 150 &&
		x == 0){
		ingame->global->caract->xp =
		(ingame->global->caract->xp + ingame->global->enemy->xp_done);
		ingame->global->caract->lvl = 2;
		x++;
		return (0);
	}

	if ((ingame->global->caract->xp + ingame->global->enemy->xp_done) >= 20 &&
		x == 0){
		ingame->global->caract->xp =
		(ingame->global->caract->xp + ingame->global->enemy->xp_done);
		ingame->global->caract->lvl = 1;
		x++;
		return (0);
	}
}

int add_xp(t_ingame *ingame)
{
	int x = 0;

	if ((ingame->global->caract->xp + ingame->global->enemy->xp_done) >= 600 &&
		x == 0){
		ingame->global->caract->xp =
		(ingame->global->caract->xp + ingame->global->enemy->xp_done);
		ingame->global->caract->lvl = 4;
		x++;
		return (0);
	}
	if ((ingame->global->caract->xp + ingame->global->enemy->xp_done) >= 300 &&
		x == 0){
		ingame->global->caract->xp =
		(ingame->global->caract->xp + ingame->global->enemy->xp_done);
		ingame->global->caract->lvl = 3;
		x++;
		return (0);
	}
	first_game(ingame, x);
	return (0);
}