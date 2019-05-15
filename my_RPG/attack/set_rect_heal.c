/*
** EPITECH PROJECT, 2019
** set_rect_heal
** File description:
** rect_heal
*/

#include "../include/my.h"

sfIntRect *set_heal_rect(void)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect) * 23);

    rect[0].left = 0;
    rect[0].top = 0;
    rect[0].width = 192;
    rect[0].height = 192;
    rect[1].left = 192;
    rect[1].top = 0;
    rect[1].width = 192;
    rect[1].height = 192;
    rect[2].left = 384;
    rect[2].top = 0;
    rect[2].width = 192;
    rect[2].height = 192;
    set_heal_recttwo(rect);
    set_heal_rect_three(rect);
    set_heal_four(rect);
    set_heal_five(rect);
    set_heal_six(rect);
    return (rect);
}

void set_heal_recttwo(sfIntRect *rect)
{
    rect[3].left = 576;
    rect[3].top = 0;
    rect[3].width = 192;
    rect[3].height = 192;
    rect[4].left = 768;
    rect[4].top = 0;
    rect[4].width = 192;
    rect[4].height = 192;
    rect[5].left = 0;
    rect[5].top = 192;
    rect[5].width = 192;
    rect[5].height = 192;
    rect[6].left = 192;
    rect[6].top = 192;
    rect[6].width = 192;
    rect[6].height = 192;
}
void set_heal_rect_three(sfIntRect *rect)
{
    rect[7].left = 384;
    rect[7].top = 192;
    rect[7].width = 192;
    rect[7].height = 192;
    rect[8].left = 576;
    rect[8].top = 192;
    rect[8].width = 192;
    rect[8].height = 192;
    rect[9].left = 768;
    rect[9].top = 192;
    rect[9].width = 192;
    rect[9].height = 192;
    rect[10].left = 0;
    rect[10].top = 384;
    rect[10].width = 192;
    rect[10].height = 192;
}

void set_heal_four(sfIntRect *rect)
{
    rect[11].left = 192;
    rect[11].top = 384;
    rect[11].width = 192;
    rect[11].height = 192;
    rect[12].left = 384;
    rect[12].top = 384;
    rect[12].width = 192;
    rect[12].height = 192;
    rect[13].left = 576;
    rect[13].top = 384;
    rect[13].width = 192;
    rect[13].height = 192;
    rect[14].left = 768;
    rect[14].top = 384;
    rect[14].width = 192;
    rect[14].height = 192;
}
