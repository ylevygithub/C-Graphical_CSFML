/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** init_menu
*/

#include "../include/my.h"

void init_sound_menu(t_menu *menu)
{
    menu->bar.sound.once = 0;
    menu->bar.sound.touch = sfSound_create();
    menu->bar.sound.click = sfSound_create();
    menu->bar.sound.touchBuffer =
    sfSoundBuffer_createFromFile("assets/touch.ogg");
    menu->bar.sound.clickBuffer =
    sfSoundBuffer_createFromFile("assets/click.ogg");
    sfSound_setBuffer(menu->bar.sound.touch, menu->bar.sound.touchBuffer);
    sfSound_setBuffer(menu->bar.sound.click, menu->bar.sound.clickBuffer);
    menu->text.font = sfFont_createFromFile("assets/font.ttf");
    menu->text.start = sfText_create();
    menu->text.settings = sfText_create();
    menu->text.credits = sfText_create();
    menu->text.quit = sfText_create();
    menu->pause.resumeText = sfText_create();
    menu->pause.returnToMenuText = sfText_create();
    menu->pause.quitText = sfText_create();
}

void init_text_menu(t_menu *menu)
{
    sfText_setString(menu->text.start, "Start");
    sfText_setString(menu->text.settings, "Settings");
    sfText_setString(menu->text.credits, "How to play");
    sfText_setString(menu->text.quit, "Quit");
    sfText_setString(menu->pause.resumeText, "Resume");
    sfText_setString(menu->pause.returnToMenuText, "Main Menu");
    sfText_setString(menu->pause.quitText, "Quit");
    sfText_setFont(menu->text.start, menu->text.font);
    sfText_setFont(menu->text.settings, menu->text.font);
    sfText_setFont(menu->text.credits, menu->text.font);
    sfText_setFont(menu->text.quit, menu->text.font);
    sfText_setFont(menu->pause.resumeText, menu->text.font);
    sfText_setFont(menu->pause.returnToMenuText, menu->text.font);
    sfText_setFont(menu->pause.quitText, menu->text.font);
    sfText_setCharacterSize(menu->text.start, 30);
    sfText_setCharacterSize(menu->text.settings, 30);
    sfText_setCharacterSize(menu->text.credits, 22);
    sfText_setCharacterSize(menu->text.quit, 30);
    sfText_setCharacterSize(menu->pause.resumeText, 30);
    sfText_setCharacterSize(menu->pause.returnToMenuText, 27);
}

void init_sprite_menu(t_menu *menu)
{
    sfText_setCharacterSize(menu->pause.quitText, 30);
    menu->music = sfMusic_createFromFile("music/menu_music.ogg");
    sfMusic_play(menu->music);
    sfMusic_setLoop(menu->music, 1);
    menu->fontSprite = sfSprite_create();
    menu->linkSprite = sfSprite_create();
    menu->pinkLinkSprite = sfSprite_create();
    menu->logoSprite = sfSprite_create();
    menu->bar.startSprite = sfSprite_create();
    menu->bar.settingsSprite = sfSprite_create();
    menu->bar.creditsSprite = sfSprite_create();
    menu->bar.quitSprite = sfSprite_create();
    menu->pause.resumeSprite = sfSprite_create();
    menu->pause.returnToMenuSprite = sfSprite_create();
    menu->pause.quitSprite = sfSprite_create();
}

void init_texture_menu(t_menu *menu)
{
    menu->fontTexture =
    sfTexture_createFromFile("assets/menu_font.png", NULL);
    menu->linkTexture =
    sfTexture_createFromFile("assets/link.jpg", NULL);
    menu->pinkLinkTexture =
    sfTexture_createFromFile("assets/pink_link.png", NULL);
    menu->logoTexture =
    sfTexture_createFromFile("assets/logo.png", NULL);
    menu->bar.start1Texture =
    sfTexture_createFromFile("assets/start1.png", NULL);
    menu->bar.start2Texture =
    sfTexture_createFromFile("assets/start2.png", NULL);
    menu->bar.settings1Texture =
    sfTexture_createFromFile("assets/settings1.png", NULL);
    menu->bar.settings2Texture =
    sfTexture_createFromFile("assets/settings2.png", NULL);
    menu->bar.credits1Texture =
    sfTexture_createFromFile("assets/credits1.png", NULL);
    menu->bar.credits2Texture =
    sfTexture_createFromFile("assets/credits2.png", NULL);
}