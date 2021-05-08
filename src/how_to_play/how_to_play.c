/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** how_to_play
*/

#include "../../include.h"

void show_how_to_play(main_t *main, sfRenderWindow **window)
{
    if (main->hot_to_created == 0) {
        main->hot_to_created = 1;
        main->how_to_play.sprt = sfSprite_create();
        main->how_to_play.texture =
        sfTexture_createFromFile("used_images/Backgrounds/how_to_play.png",
        NULL);
        sfSprite_setTexture(main->how_to_play.sprt, main->how_to_play.texture,
        sfFalse);
        main->how_to_exit.sprt = sfSprite_copy(main->how_to_button.sprt);
        main->how_to_text_quit.text = sfText_copy(main->how_to_text.text);
        main->how_to_text_quit.pos.x = 32;
        sfText_setPosition(main->how_to_text_quit.text,
        main->how_to_text_quit.pos);
        sfText_setString(main->how_to_text_quit.text, "Home");
    }
    sfRenderWindow_drawSprite(*window, main->how_to_play.sprt, NULL);
    sfRenderWindow_drawSprite(*window, main->how_to_exit.sprt, NULL);
    sfRenderWindow_drawText(*window, main->how_to_text_quit.text, NULL);
}