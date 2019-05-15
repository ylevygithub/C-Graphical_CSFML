/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy how to play structure
*/

#include "include/my.h"

void destroy_texture_htp(t_htp *htp)
{
    sfTexture_destroy(htp->htpTexture);
    sfTexture_destroy(htp->arrowTexture);
    sfTexture_destroy(htp->arrowTextTexture);
    sfTexture_destroy(htp->spaceTexture);
    sfTexture_destroy(htp->spaceTextTexture);
    sfTexture_destroy(htp->mouseTexture);
    sfTexture_destroy(htp->mouseTextTexture);
    sfTexture_destroy(htp->iKeyTexture);
    sfTexture_destroy(htp->iKeyTextTexture);
    sfTexture_destroy(htp->pKeyTexture);
    sfTexture_destroy(htp->pKeyTextTexture);
    sfTexture_destroy(htp->fontTexture);
    sfTexture_destroy(htp->returnTexture);
}

void destroy_sprite_htp(t_htp *htp)
{
    sfSprite_destroy(htp->htpSprite);
    sfSprite_destroy(htp->arrowSprite);
    sfSprite_destroy(htp->arrowTextSprite);
    sfSprite_destroy(htp->spaceSprite);
    sfSprite_destroy(htp->spaceTextSprite);
    sfSprite_destroy(htp->mouseSprite);
    sfSprite_destroy(htp->mouseTextSprite);
    sfSprite_destroy(htp->iKeySprite);
    sfSprite_destroy(htp->iKeyTextSprite);
    sfSprite_destroy(htp->pKeySprite);
    sfSprite_destroy(htp->pKeyTextSprite);
    sfSprite_destroy(htp->fontSprite);
    sfSprite_destroy(htp->returnSprite);
}
