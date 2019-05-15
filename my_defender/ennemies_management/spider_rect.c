/*
** EPITECH PROJECT, 2019
** cut spider
** File description:
** cut spider
*/

sfIntRect *set_spider_rect(void)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect) * 7);

    rect[0].left = 0;
    rect[0].top = 0;
    rect[0].width = 73;
    rect[0].height = 90;
    rect[1].left = 73;
    rect[1].top = 0;
    rect[1].width = 146;
    rect[1].height = 90;
    rect[2].left = 146;
    rect[2].top = 0;
    rect[2].width = 219;
    rect[2].height = 90;
    set_spider_recttwo(rect);
    return rect;
}

void set_spider_recttwo(sfIntRect *rect)
{
    rect[3].left = 219;
    rect[3].top = 0;
    rect[3].width = 292;
    rect[3].height = 90;
    rect[4].left = 292;
    rect[4].top = 0;
    rect[4].width = 365;
    rect[4].height = 90;
    rect[5].left = 365;
    rect[5].top = 0;
    rect[5].width = 438;
    rect[5].height = 90;
    rect[6].left = 438;
    rect[6].top = 0;
    rect[6].width = 511;
    rect[6].height = 90;
}