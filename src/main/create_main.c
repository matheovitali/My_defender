/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_main
*/

#include "../../include.h"

void create_main_second(main_t *menu, sfRenderWindow **window)
{
    sfRenderWindow_drawSprite(*window, menu->bg.sprt, NULL);
    sfRenderWindow_drawSprite(*window, menu->name.sprt, NULL);
    sfRenderWindow_drawSprite(*window, menu->play_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, menu->option_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, menu->exit_b.sprt, NULL);
    sfRenderWindow_drawText(*window, menu->title.text, NULL);
    sfRenderWindow_drawText(*window, menu->setting.text, NULL);
    sfRenderWindow_drawText(*window, menu->leave.text, NULL);
    sfRenderWindow_drawSprite(*window, menu->how_to_button.sprt, NULL);
    sfRenderWindow_drawText(*window, menu->how_to_text.text, NULL);
}

void create_main(main_t *menu, sfRenderWindow **window)
{
    sfText_setPosition(menu->title.text, menu->title.pos);
    sfText_setScale(menu->title.text, menu->title.scale);
    sfText_setPosition(menu->setting.text, menu->setting.pos);
    sfText_setScale(menu->setting.text, menu->setting.scale);
    sfText_setPosition(menu->leave.text, menu->leave.pos);
    sfText_setScale(menu->leave.text, menu->leave.scale);
    sfSprite_setPosition(menu->name.sprt, menu->name.pos);
    sfSprite_setScale(menu->name.sprt, menu->name.scale);
    sfSprite_setPosition(menu->play_b.sprt, menu->play_b.pos);
    sfSprite_setScale(menu->play_b.sprt, menu->play_b.scale);
    sfSprite_setPosition(menu->option_b.sprt, menu->option_b.pos);
    sfSprite_setScale(menu->option_b.sprt, menu->option_b.scale);
    sfSprite_setPosition(menu->exit_b.sprt, menu->exit_b.pos);
    sfSprite_setScale(menu->exit_b.sprt, menu->exit_b.scale);
    create_main_second(menu, window);
}

void destroy_main(main_t *menu)
{
    menu->create = 0;
    sfSprite_destroy(menu->bg.sprt);
    sfTexture_destroy(menu->bg.texture);
    sfSprite_destroy(menu->name.sprt);
    sfTexture_destroy(menu->name.texture);
    sfSprite_destroy(menu->play_b.sprt);
    sfTexture_destroy(menu->play_b.texture);
    sfSprite_destroy(menu->option_b.sprt);
    sfTexture_destroy(menu->option_b.texture);
    sfSprite_destroy(menu->exit_b.sprt);
    sfTexture_destroy(menu->exit_b.texture);
    sfFont_destroy(menu->title.font);
    sfText_destroy(menu->title.text);
    sfText_destroy(menu->setting.text);
    sfText_destroy(menu->leave.text);
    sfMusic_destroy(menu->music);
}