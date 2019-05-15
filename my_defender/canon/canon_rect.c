/*
** EPITECH PROJECT, 2019
** canon_rect
** File description:
** canon
*/

#include "../my.h"

sfIntRect *set_canon_rect(void)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect) * 15);

    rect[0].left = 0;
    rect[0].top = 0;
    rect[0].width = 68;
    rect[0].height = 68;
    rect[1].left = 68;
    rect[1].top = 0;
    rect[1].width = 68;
    rect[1].height = 68;
    rect[2].left = 136;
    rect[2].top = 0;
    rect[2].width = 68;
    rect[2].height = 68;
    set_canon_recttwo(rect);
    set_canon_rect_three(rect);
    set_canon_last(rect);
    return (rect);
}

void set_canon_recttwo(sfIntRect *rect)
{
	rect[3].left = 204;
    rect[3].top = 0;
    rect[3].width = 68;
    rect[3].height = 68;
    rect[4].left = 272;
    rect[4].top = 0;
    rect[4].width = 68;
    rect[4].height = 68;
    rect[5].left = 0;
    rect[5].top = 68;
    rect[5].width = 68;
    rect[5].height = 136;
    rect[6].left = 68;
    rect[6].top = 68;
    rect[6].width = 68;
    rect[6].height = 136;
    rect[7].left = 136;
    rect[7].top = 68;
    rect[7].width = 68;
    rect[7].height = 136;
}

void set_canon_rect_three(sfIntRect *rect)
{
	rect[8].left = 204;
    rect[8].top = 68;
    rect[8].width = 68;
    rect[8].height = 136;
    rect[9].left = 272;
    rect[9].top = 68;
    rect[9].width = 68;
    rect[9].height = 136;
    rect[10].left = 0;
    rect[10].top = 68;
    rect[10].width = 68;
    rect[10].height = 204;
    rect[11].left = 68;
    rect[11].top = 68;
    rect[11].width = 68;
    rect[11].height = 204;
    rect[12].left = 136;
    rect[12].top = 68;
    rect[12].width = 68;
    rect[12].height = 204;
}

void set_canon_last(sfIntRect *rect)
{
	rect[13].left = 204;
    rect[13].top = 68;
    rect[13].width = 68;
    rect[13].height = 204;
    rect[14].left = 272;
    rect[14].top = 68;
    rect[14].width = 68;
    rect[14].height = 204;
}
