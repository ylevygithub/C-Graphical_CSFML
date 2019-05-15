/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** move ennemies
*/

#include "../my.h"

int movement12_13(spider_t *spider, int move)
{
    if (move >= 3020 && move <= 3490) {
        move_down(spider);
        return 0;
    }
    if (move >= 3490 && move <= 3930) {
        move_right(spider);
        return 0;
    }
    return 0;
}

int move_left(spider_t *spider)
{
    sfVector2f vect;
    vect.x = -1;
    vect.y = 0;

    sfSprite_move(spider->enemy, vect);
    return (0);
}

int move_right(spider_t *spider)
{
    sfVector2f vect;
    vect.x = 1;
    vect.y = 0;

    sfSprite_move(spider->enemy, vect);
    return (0);
}

int move_up(spider_t *spider)
{
    sfVector2f vect;
    vect.x = 0;
    vect.y = -1;

    sfSprite_move(spider->enemy, vect);
    return (0);
}

int move_down(spider_t *spider)
{
    sfVector2f vect;
    vect.x = 0;
    vect.y = 1;

    sfSprite_move(spider->enemy, vect);
    return (0);
}
