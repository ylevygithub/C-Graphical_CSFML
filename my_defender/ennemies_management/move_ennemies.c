/*
** EPITECH PROJECT, 2019
** movement of the ennemies
** File description:
** movement of the ennemies
*/

#include "../my.h"

spider_t *malloc_of_spider(void)
{
    spider_t *spider = malloc(sizeof(spider_t));
    return (spider);
}

int movement1_2(spider_t *spider, int move)
{
    sfIntRect rect = {0, 0, 73, 90};
    float x = 100;
    float y = 110;
    sfVector2f position = {x, y};

    if (move == 0) {
        sfSprite_setPosition(spider->enemy, position);
        return (0);
    }
    if (move > 0 && move <= 410) {
        move_right(spider);
        return (0);
    }
    if (move >= 410 && move <= 600) {
        move_down(spider);
        return (0);
    }
    movement3_4_5(spider, move);
    return 0;
}

int movement3_4_5(spider_t *spider, int move)
{
    if (move >= 600 && move <= 920) {
        move_right(spider);
        return 0;
    }
    if (move >= 920 && move <= 1100) {
        move_up(spider);
        return 0;
    }
    if (move >= 1100 && move <= 1440) {
        move_right(spider);
        return 0;
    }
    movement6_7_8(spider, move);
    return 0;
}

int movement6_7_8(spider_t *spider, int move)
{
    if (move >= 1440 && move <= 1820) {
        move_down(spider);
        return 0;
    }
    if (move >= 1820 && move <= 2140) {
        move_left(spider);
        return 0;
    }
    if (move >= 2140 && move <= 2520) {
        move_down(spider);
        return 0;
    }
    movement9_10_11(spider, move);
    return 0;
}

int movement9_10_11(spider_t *spider, int move)
{
    if (move >= 2520 && move <= 2850) {
        move_right(spider);
        return 0;
    }
    if (move >= 2850 && move <= 3020) {
        move_up(spider);
        return 0;
    }
    if (move >= 3020 && move <= 3320) {
        move_right(spider);
        return 0;
    }
    movement12_13(spider, move);
    return 0;
}
