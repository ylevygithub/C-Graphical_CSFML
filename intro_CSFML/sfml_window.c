#include <SFML/Graphics.h>
//if (sfMouse_isButtonPressed(button))
//       l'oiseau doit tomber;
/*
sfRenderWindow_drawSprite(window, sprite2, NULL);
sfRenderWindow_drawSprite(window, sprite4, NULL);
sfRenderWindow_display(window);
sfClock_restart(clock);
}
pos = sfSprite_getPosition(sprite1);
pos = sfSprite_getPosition(sprite3);
pos = sfSprite_getPosition(sprite4);
origin.y = (rand()%10*55);
// sfMouse_isButtonPressed(sfMouseButton_button)
     posmouse = sfMouse_getPosition(window2);
     //posmouse2.left = posemouse.x;
     //posmouse2.top = posmouse.y;
     //posmouse2.width = 1;
     //posmouse2.height = 1;
     pos3 = sfSprite_getPosition(sprite4);
     pos2.x = pos3.x;
     pos2.y = pos3.y;
     pos4.x = (pos2.x - 55);
     pos5.x = (pos2.x + 55);
     pos4.y = (pos2.y - 50);
     pos5.y = (pos2.y + 50);
while (sfRenderWindow_pollEvent(window, &event))
{
    //Close window : exit
    if (event.type == sfEvtClosed)
        sf_RenderWindow_close(window);
    else if (event.type == sfEvtMouseButtonPressed) {
        printf("%d\n,%d\n", (posmouse.x - 150), (posmouse.y - ?));
        printf("%d\n,%d\n", pos4.x, pos4.y);
        printf("%d\n,%d\n", pos5.x, pos5.y);
    if (pos5.y > (posmouse.y - 200) > pos4.y && pos5.x ?) {
        sfSprite_setPosition(sprite1, origin);
        sfSprite_setPosition(sprite3, origin);
        sfSprite_setPosition(sprite4, origin);
}
}
}
if (pos.x >= posmax.x) {
    sfSprite_setPosition(sprite1, origin);
    sfSprite_setPosition(sprite3, origin);
    sfSprite_setPosition(sprite4, origin);
}
*/

int main()
{
    sfIntRect rect;
    //
    sfEvent event;
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    //rect.x = 2;
    //rect.y = 4;
    //rect.longueur = 2;
    //rect.largeur = 2;

    /* Create the main window */
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return 84;

    /* Load a sprite to display */
    texture = sfTexture_createFromFile("./assets/test.png", NULL);
    if (!texture)
        return 84;

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);


    /* Start the game loop */
    while (sfRenderWindow_isOpen(window))
    {
        /* Process events */
        while (sfRenderWindow_pollEvent(window, &event))
        {
            
            // Close window : exit 
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
            
        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);

        // Draw the sprite */
        sfRenderWindow_drawSprite(window, sprite, NULL);

        /* Draw the text */
        // sfRenderWindow_drawText(window, text, NULL);
        /* Update the window */
        sfRenderWindow_display(window);
    }
    /* Cleanup resources */
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);

}
