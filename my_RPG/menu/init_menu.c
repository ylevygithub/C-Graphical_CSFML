/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** init_menu
*/

#include "../include/my.h"

void init_texture_and_vector_menu(t_menu *menu)
{
    menu->bar.quit1Texture =
    sfTexture_createFromFile("assets/quit1.png", NULL);
    menu->bar.quit2Texture =
    sfTexture_createFromFile("assets/quit2.png", NULL);
    menu->pause.quit1Texture =
    sfTexture_createFromFile("assets/quit1.png", NULL);
    menu->pause.quit2Texture =
    sfTexture_createFromFile("assets/quit2.png", NULL);
    menu->pause.resume1Texture =
    sfTexture_createFromFile("assets/start1.png", NULL);
    menu->pause.resume2Texture =
    sfTexture_createFromFile("assets/start2.png", NULL);
    menu->pause.returnToMenu1Texture =
    sfTexture_createFromFile("assets/credits1.png", NULL);
    menu->pause.returnToMenu2Texture =
    sfTexture_createFromFile("assets/credits2.png", NULL);

}

void init_htp_sprite_menu(t_menu *menu)
{
    menu->htp.htpSprite = sfSprite_create();
    menu->htp.arrowSprite = sfSprite_create();
    menu->htp.arrowTextSprite = sfSprite_create();
    menu->htp.spaceSprite = sfSprite_create();
    menu->htp.spaceTextSprite = sfSprite_create();
    menu->htp.mouseSprite = sfSprite_create();
    menu->htp.mouseTextSprite = sfSprite_create();
    menu->htp.iKeySprite = sfSprite_create();
    menu->htp.iKeyTextSprite = sfSprite_create();
    menu->htp.pKeySprite = sfSprite_create();
    menu->htp.pKeyTextSprite = sfSprite_create();
    menu->htp.fontSprite = sfSprite_create();
    menu->htp.returnSprite = sfSprite_create();
    menu->htp.mouseTextTexture =
    sfTexture_createFromFile("assets/mouse_text.png", NULL);
    menu->htp.iKeyTextTexture =
    sfTexture_createFromFile("assets/i_text.png", NULL);
    menu->htp.pKeyTextTexture =
    sfTexture_createFromFile("assets/p_text.png", NULL);
}

void init_htp_texture_menu(t_menu *menu)
{
    menu->htp.htpTexture =
    sfTexture_createFromFile("assets/how_to_play.png", NULL);
    menu->htp.arrowTexture =
    sfTexture_createFromFile("assets/arrow.png", NULL);
    menu->htp.arrowTextTexture =
    sfTexture_createFromFile("assets/arrow_text.png", NULL);
    menu->htp.spaceTexture =
    sfTexture_createFromFile("assets/space.png", NULL);
    menu->htp.spaceTextTexture =
    sfTexture_createFromFile("assets/space_text.png", NULL);
    menu->htp.mouseTexture =
    sfTexture_createFromFile("assets/mouse.png", NULL);
    menu->htp.iKeyTexture =
    sfTexture_createFromFile("assets/ikey.jpg", NULL);
    menu->htp.pKeyTexture =
    sfTexture_createFromFile("assets/esc.png", NULL);
    menu->htp.fontTexture =
    sfTexture_createFromFile("assets/htp_font.png", NULL);
    menu->htp.returnTexture =
    sfTexture_createFromFile("assets/back.png", NULL);
}

void init_menu(t_menu *menu)
{
    init_sound_menu(menu);
    init_text_menu(menu);
    init_sprite_menu(menu);
    init_texture_menu(menu);
    init_texture_and_vector_menu(menu);
    init_htp_sprite_menu(menu);
    init_htp_texture_menu(menu);
    sfSprite_scale(menu->logoSprite, (sfVector2f){1.3, 1.3});
    init_pos_menu(menu);
}