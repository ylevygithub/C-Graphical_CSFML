/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../my.h"

sfSprite *set_backgroud(char *str)
{
    sfTexture *texture_back;
    sfSprite *background;

    texture_back = sfTexture_createFromFile(str, NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture_back, sfTrue);
    return (background);
}

int cpy_one(menu_t *menu, canon_sprite_t *canon, sfSprite *background, spider_t *spider)
{
    static int x = 0;
    int it = 0;
    sfVector2f pos;
    sfVector2i cpos;
    canon->copy[x].cpy = set_backgroud("./canon/canon.png");
    sfIntRect *rect = set_canon_rect();
    sfSprite_setTextureRect(canon->copy[x].cpy, rect[0]);

    while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        cpos = sfMouse_getPosition(menu->window);
        pos.x = cpos.x;
        pos.y = cpos.y;
        sfSprite_setPosition(canon->copy[x].cpy, pos);
        sfRenderWindow_clear(menu->window,sfGreen);
        sfRenderWindow_drawSprite(menu->window, background, NULL);
        sfRenderWindow_drawSprite(menu->window, canon->copy[x].cpy, NULL);
        while (it < x) {
            sfRenderWindow_drawSprite(menu->window, canon->copy[it].cpy, NULL);
            it++;
        }
        sfRenderWindow_drawSprite(menu->window, spider->enemy, NULL);
        sfRenderWindow_drawSprite(menu->window, canon->one, NULL);
        sfRenderWindow_display(menu->window);
    }
    sfSprite_setPosition(canon->copy[x].cpy, pos);
    x++;
    print_window(menu, canon, background, x, spider);
    menu->sound = sfSound_create();
    menu->sound_buffer = sfSoundBuffer_createFromFile("./music/cannon.ogg");
    sfSound_setBuffer(menu->sound, menu->sound_buffer);
    sfSound_setVolume(menu->sound, 25);
    sfSound_play(menu->sound);
    return (x);
}

void print_window(menu_t *menu, canon_sprite_t *canon, sfSprite *background, int x, spider_t *spider)
{
    int it = 0;

    sfRenderWindow_clear(menu->window,sfGreen);
    sfRenderWindow_drawSprite(menu->window, background, NULL);
    while (it < x) {
        sfRenderWindow_drawSprite(menu->window, canon->copy[it].cpy, NULL);
        it++;
    }
    sfRenderWindow_drawSprite(menu->window, spider->enemy, NULL);
    sfRenderWindow_drawSprite(menu->window, canon->one, NULL);
    sfRenderWindow_display(menu->window);
}

int my_pollevent(menu_t *menu, sfEvent event, canon_sprite_t *canon, sfSprite *background, spider_t *spider)
{
    sfVector2f pos_sprite;
    static int x = 0;

    while (sfRenderWindow_pollEvent(menu->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(menu->window);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            pos_sprite = sfSprite_getPosition(canon->one);
            if (event.mouseButton.x >= pos_sprite.x && event.mouseButton.x < pos_sprite.x + 69
                && event.mouseButton.y >= pos_sprite.y && event.mouseButton.y < pos_sprite.y + 69) {
                x = cpy_one(menu, canon, background, spider);
            }
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(menu->window);
    }
    return (x);
}

int game_loop(menu_t *menu)
{
    int x = 0;
    int b = 0;
    int move = 0;
    sfEvent event;
    spider_t *spider;
    sfIntRect rect = {0, 0, 73, 90};
    spider = malloc_of_spider();
    spider->enemy = set_backgroud("./ennemies_management/sprite/spider-sprite.png");
    sfSprite_setTextureRect(spider->enemy, rect);
    sfSprite_setRotation(spider->enemy, 90);
    sfSprite *background = set_backgroud("./ennemies_management/sprite/grass1_resize.png");
    canon_sprite_t *canon = set_struct_canon();
    sfVector2f origin_player;
    origin_player.x = 55;
    origin_player.y = 750;
    sfSprite_setPosition(canon->one, origin_player);
    sfClock *clock = sfClock_create();

    if (!menu->window)
        return(84);
    while (sfRenderWindow_isOpen(menu->window)) {
        while (move <= 3930) {
            x = my_pollevent(menu, event, canon, background, spider);
            sfClock_restart(clock);
            if ((sfClock_getElapsedTime(clock).microseconds / 100) > 10000)
                b = 1;
            movement1_2(spider, move);
            print_window(menu, canon, background, x, spider);
            move++;
        }
        move = 0;
    }
    sfRenderWindow_destroy(menu->window);
    return(0);
}
