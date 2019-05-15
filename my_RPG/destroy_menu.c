/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy menu
*/

#include "include/my.h"

void destroy_sound(t_sound *sound)
{
    sfMusic_destroy(sound->music);
    sfMusic_destroy(sound->fly);
    sfSound_destroy(sound->touch);
    sfSound_destroy(sound->click);
    sfSoundBuffer_destroy(sound->touchBuffer);
    sfSoundBuffer_destroy(sound->clickBuffer);
}

void destroy_bar(t_bar *bar)
{
    sfSprite_destroy(bar->startSprite);
    sfSprite_destroy(bar->settingsSprite);
    sfSprite_destroy(bar->creditsSprite);
    sfSprite_destroy(bar->quitSprite);
    sfTexture_destroy(bar->startTexture);
    sfTexture_destroy(bar->settingsTexture);
    sfTexture_destroy(bar->creditsTexture);
    sfTexture_destroy(bar->quitTexture);
    sfTexture_destroy(bar->start1Texture);
    sfTexture_destroy(bar->start2Texture);
    sfTexture_destroy(bar->settings1Texture);
    sfTexture_destroy(bar->settings2Texture);
    sfTexture_destroy(bar->credits1Texture);
    sfTexture_destroy(bar->credits2Texture);
    sfTexture_destroy(bar->quit1Texture);
    sfTexture_destroy(bar->quit2Texture);
    destroy_sound(&bar->sound);
}

void destroy_text(t_text *text)
{
    sfText_destroy(text->talk);
    sfText_destroy(text->primary_quest);
    sfFont_destroy(text->font);
    sfText_destroy(text->start);
    sfText_destroy(text->settings);
    sfText_destroy(text->credits);
    sfText_destroy(text->quit);
}

void destroy_pause(t_pause *pause)
{
    sfText_destroy(pause->resume);
    sfText_destroy(pause->returnToMenu);
    sfText_destroy(pause->quit);
    sfSprite_destroy(pause->resumeSprite);
    sfSprite_destroy(pause->returnToMenuSprite);
    sfSprite_destroy(pause->quitSprite);
    sfTexture_destroy(pause->resume1Texture);
    sfTexture_destroy(pause->resume2Texture);
    sfTexture_destroy(pause->returnToMenu1Texture);
    sfTexture_destroy(pause->returnToMenu2Texture);
    sfTexture_destroy(pause->quit1Texture);
    sfTexture_destroy(pause->quit2Texture);
    sfText_destroy(pause->resumeText);
    sfText_destroy(pause->returnToMenuText);
    sfText_destroy(pause->quitText);
}

void destroy_menu(t_menu *menu)
{
    sfSprite_destroy(menu->fontSprite);
    sfSprite_destroy(menu->linkSprite);
    sfSprite_destroy(menu->pinkLinkSprite);
    sfTexture_destroy(menu->fontTexture);
    sfTexture_destroy(menu->linkTexture);
    sfTexture_destroy(menu->pinkLinkTexture);
    sfMusic_destroy(menu->music);
    destroy_sprite_htp(&menu->htp);
    destroy_texture_htp(&menu->htp);
    destroy_bar(&menu->bar);
    destroy_text(&menu->text);
    destroy_pause(&menu->pause);
    sfSprite_destroy(menu->logoSprite);
    sfTexture_destroy(menu->logoTexture);
}
