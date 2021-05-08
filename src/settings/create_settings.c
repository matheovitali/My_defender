/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_settings
*/

#include "../../include.h"

void create_option_third(option_t *option, sfRenderWindow **window)
{
    sfSprite_setScale(option->sound_b.sprt, option->sound_b.scale);
    sfSprite_setPosition(option->music_b.sprt, option->music_b.pos);
    sfSprite_setScale(option->music_b.sprt, option->music_b.scale);
    sfSprite_setPosition(option->low_fps.sprt, option->low_fps.pos);
    sfSprite_setScale(option->low_fps.sprt, option->low_fps.scale);
    sfSprite_setPosition(option->mid_fps.sprt, option->mid_fps.pos);
    sfSprite_setScale(option->mid_fps.sprt, option->mid_fps.scale);
    sfSprite_setPosition(option->high_fps.sprt, option->high_fps.pos);
    sfSprite_setScale(option->high_fps.sprt, option->high_fps.scale);
    sfRenderWindow_drawSprite(*window, option->bg.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->menu.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->save_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->exit_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->sound_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->music_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->low_fps.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->mid_fps.sprt, NULL);
    sfRenderWindow_drawSprite(*window, option->high_fps.sprt, NULL);
}

void create_option_second(option_t *option, sfRenderWindow **window)
{
    if (option->mid_fps.clicked == 1)
        sfSprite_setTexture(option->mid_fps.sprt,
        option->mid_fps.other_texture, sfFalse);
    else
        sfSprite_setTexture(option->mid_fps.sprt,
        option->mid_fps.texture, sfFalse);
    if (option->high_fps.clicked == 1)
        sfSprite_setTexture(option->high_fps.sprt,
        option->high_fps.other_texture, sfFalse);
    else
        sfSprite_setTexture(option->high_fps.sprt,
        option->high_fps.texture, sfFalse);
    sfSprite_setPosition(option->menu.sprt, option->menu.pos);
    sfSprite_setScale(option->menu.sprt, option->menu.scale);
    sfSprite_setPosition(option->save_b.sprt, option->save_b.pos);
    sfSprite_setScale(option->save_b.sprt, option->save_b.scale);
    sfSprite_setPosition(option->exit_b.sprt, option->exit_b.pos);
    sfSprite_setScale(option->exit_b.sprt, option->exit_b.scale);
    sfSprite_setPosition(option->sound_b.sprt, option->sound_b.pos);
    create_option_third(option, window);
}

void create_option(option_t *option, sfRenderWindow **window)
{
    option->create = 1;
    if (option->music_b.clicked == 1)
        sfSprite_setTexture(option->music_b.sprt,
        option->music_b.other_texture, sfFalse);
    else
        sfSprite_setTexture(option->music_b.sprt,
        option->music_b.texture, sfFalse);
    if (option->sound_b.clicked == 1)
        sfSprite_setTexture(option->sound_b.sprt,
        option->sound_b.other_texture, sfFalse);
    else
        sfSprite_setTexture(option->sound_b.sprt,
        option->sound_b.texture, sfFalse);
    if (option->low_fps.clicked == 1)
        sfSprite_setTexture(option->low_fps.sprt,
        option->low_fps.other_texture, sfFalse);
    else
        sfSprite_setTexture(option->low_fps.sprt,
        option->low_fps.texture, sfFalse);
    create_option_second(option, window);
}

void destroy_option(option_t *option)
{
    option->create = 0;
    sfSprite_destroy(option->bg.sprt);
    sfTexture_destroy(option->bg.texture);
    sfSprite_destroy(option->menu.sprt);
    sfTexture_destroy(option->menu.texture);
    sfSprite_destroy(option->save_b.sprt);
    sfTexture_destroy(option->save_b.texture);
    sfSprite_destroy(option->exit_b.sprt);
    sfTexture_destroy(option->exit_b.texture);
    sfSprite_destroy(option->sound_b.sprt);
    sfTexture_destroy(option->sound_b.texture);
    sfSprite_destroy(option->music_b.sprt);
    sfTexture_destroy(option->music_b.texture);
    sfSprite_destroy(option->low_fps.sprt);
    sfTexture_destroy(option->low_fps.texture);
    sfSprite_destroy(option->mid_fps.sprt);
    sfTexture_destroy(option->mid_fps.texture);
    sfSprite_destroy(option->high_fps.sprt);
    sfTexture_destroy(option->high_fps.texture);
}