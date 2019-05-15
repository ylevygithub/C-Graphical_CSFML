/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** int_to_str
*/

#include "../include/my.h"

void init_pos_bar(t_menu *menu)
{
    menu->bar.startPos.x = 548;
    menu->bar.startPos.y = 330;
    menu->bar.settingsPos.x = 548;
    menu->bar.settingsPos.y = 400;
    menu->bar.creditsPos.x = 548;
    menu->bar.creditsPos.y = 470;
    menu->bar.quitPos.x = 548;
    menu->bar.quitPos.y = 540;
    menu->logoPos.x = 480;
    menu->logoPos.y = 80;
    sfSprite_setPosition(menu->bar.startSprite, menu->bar.startPos);
    sfSprite_setPosition(menu->bar.settingsSprite, menu->bar.settingsPos);
    sfSprite_setPosition(menu->bar.creditsSprite, menu->bar.creditsPos);
    sfSprite_setPosition(menu->bar.quitSprite, menu->bar.quitPos);
    sfSprite_setPosition(menu->logoSprite, menu->logoPos);
    menu->bar.startPos.x = 555;
    menu->bar.settingsPos.x = 555;
    menu->bar.creditsPos.x = 555;
    menu->bar.quitPos.x = 555;
}

void init_pos_size(t_menu *menu)
{
    menu->pause.resumePos.x = 548;
    menu->pause.resumePos.y = 330;
    menu->pause.returnToMenuPos.x = 548;
    menu->pause.returnToMenuPos.y = 400;
    menu->pause.quitPos.x = 548;
    menu->pause.quitPos.y = 470;
    sfSprite_setPosition(menu->pause.resumeSprite, menu->pause.resumePos);
    sfSprite_setPosition(menu->pause.returnToMenuSprite,
    menu->pause.returnToMenuPos);
    sfSprite_setPosition(menu->pause.quitSprite, menu->pause.quitPos);
    menu->pause.resumePos.x = 555;
    menu->pause.returnToMenuPos.x = 555;
    menu->pause.quitPos.x = 555;
    sfText_setPosition(menu->pause.resumeText, menu->pause.resumePos);
    sfText_setPosition(menu->pause.returnToMenuText,
    menu->pause.returnToMenuPos);
    sfText_setPosition(menu->pause.quitText, menu->pause.quitPos);
    sfText_setPosition(menu->text.start, menu->bar.startPos);
    sfText_setPosition(menu->text.settings, menu->bar.settingsPos);
    sfText_setPosition(menu->text.credits, menu->bar.creditsPos);
}

void init_pos_htp(t_menu *menu)
{
    menu->htp.htpPos.x = 180;
    menu->htp.htpPos.y = 0;
    menu->htp.arrowPos.x = 248;
    menu->htp.arrowPos.y = 230;
    menu->htp.arrowTextPos.x = 448;
    menu->htp.arrowTextPos.y = 230;
    menu->htp.spacePos.x = 258;
    menu->htp.spacePos.y = 300;
    menu->htp.spaceTextPos.x = 448;
    menu->htp.spaceTextPos.y = 350;
    menu->htp.mousePos.x = 308;
    menu->htp.mousePos.y = 430;
    menu->htp.mouseTextPos.x = 448;
    menu->htp.mouseTextPos.y = 450;
    menu->htp.iKeyPos.x = 278;
    menu->htp.iKeyPos.y = 530;
    menu->htp.iKeyTextPos.x = 448;
    menu->htp.iKeyTextPos.y = 530;
    menu->htp.pKeyPos.x = 258;
    menu->htp.pKeyPos.y = 630;

}

void init_set_pos_and_scale_htp(t_menu *menu)
{
    menu->htp.pKeyTextPos.x = 448;
    menu->htp.pKeyTextPos.y = 630;
    menu->htp.fontPos.x = 548;
    menu->htp.fontPos.y = 330;
    menu->htp.returnPos.x = 988;
    menu->htp.returnPos.y = 580;
    sfSprite_setPosition(menu->htp.htpSprite, menu->htp.htpPos);
    sfSprite_setPosition(menu->htp.arrowSprite, menu->htp.arrowPos);
    sfSprite_setPosition(menu->htp.arrowTextSprite, menu->htp.arrowTextPos);
    sfSprite_setPosition(menu->htp.spaceSprite, menu->htp.spacePos);
    sfSprite_setPosition(menu->htp.spaceTextSprite, menu->htp.spaceTextPos);
    sfSprite_setPosition(menu->htp.mouseSprite, menu->htp.mousePos);
    sfSprite_setPosition(menu->htp.mouseTextSprite, menu->htp.mouseTextPos);
    sfSprite_setPosition(menu->htp.iKeySprite, menu->htp.iKeyPos);
    sfSprite_setPosition(menu->htp.iKeyTextSprite, menu->htp.iKeyTextPos);
    sfSprite_setPosition(menu->htp.pKeySprite, menu->htp.pKeyPos);
    sfSprite_setPosition(menu->htp.pKeyTextSprite, menu->htp.pKeyTextPos);
    sfSprite_setPosition(menu->htp.fontSprite, menu->htp.fontPos);
    sfSprite_setPosition(menu->htp.returnSprite, menu->htp.returnPos);
    sfSprite_scale(menu->htp.htpSprite, (sfVector2f){0.4, 0.4});
}

void init_pos_menu(t_menu *menu)
{
    menu->linkPos.x = 200;
    menu->linkPos.y = 200;
    menu->pinkLinkPos.x = 700;
    menu->pinkLinkPos.y = 180;
    sfSprite_setPosition(menu->linkSprite, menu->linkPos);
    sfSprite_setPosition(menu->pinkLinkSprite, menu->pinkLinkPos);
    sfSprite_scale(menu->linkSprite, (sfVector2f){1.3, 1.3});
    init_pos_bar(menu);
    init_pos_size(menu);
    init_pos_htp(menu);
    init_set_pos_and_scale_htp(menu);
    sfSprite_scale(menu->htp.arrowSprite, (sfVector2f){0.7, 0.7});
    sfSprite_scale(menu->htp.spaceSprite, (sfVector2f){0.3, 0.3});
    sfSprite_scale(menu->htp.mouseSprite, (sfVector2f){0.03, 0.03});
    sfSprite_scale(menu->htp.iKeySprite, (sfVector2f){1.3, 1.3});
    sfSprite_scale(menu->htp.pKeySprite, (sfVector2f){0.15, 0.15});
    sfSprite_scale(menu->htp.fontSprite, (sfVector2f){0.5, 0.5});
    sfSprite_scale(menu->htp.returnSprite, (sfVector2f){0.5, 0.5});
    sfText_setPosition(menu->text.quit, menu->bar.quitPos);
}