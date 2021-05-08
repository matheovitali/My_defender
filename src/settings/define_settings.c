/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_settings
*/

#include "../../include.h"

void define_option_five(option_t *option)
{
    sfSprite_setTexture(option->bg.sprt, option->bg.texture, sfFalse);
    sfSprite_setTexture(option->menu.sprt, option->menu.texture, sfFalse);
    sfSprite_setTexture(option->save_b.sprt, option->save_b.texture, sfFalse);
    sfSprite_setTexture(option->exit_b.sprt, option->exit_b.texture, sfFalse);
    sfSprite_setTexture(option->sound_b.sprt,
    option->sound_b.texture, sfFalse);
    sfSprite_setTexture(option->music_b.sprt,
    option->music_b.texture, sfFalse);
    sfSprite_setTexture(option->low_fps.sprt,
    option->low_fps.texture, sfFalse);
    sfSprite_setTexture(option->mid_fps.sprt,
    option->mid_fps.texture, sfFalse);
    sfSprite_setTexture(option->high_fps.sprt,
    option->high_fps.texture, sfFalse);
}

void define_option_forth(option_t *option)
{
    option->mid_fps.other_texture =
    sfTexture_createFromFile("used_images/Buttons/button_on.png", NULL);
    option->mid_fps.pos.x = 725;
    option->mid_fps.pos.y = 445;
    option->mid_fps.scale.x = 0.45;
    option->mid_fps.scale.y = 0.45;
    option->high_fps.sprt = sfSprite_create();
    option->high_fps.texture =
    sfTexture_createFromFile("used_images/Buttons/button_off.png", NULL);
    option->high_fps.other_texture =
    sfTexture_createFromFile("used_images/Buttons/button_on.png", NULL);
    option->high_fps.pos.x = 835;
    option->high_fps.pos.y = 445;
    option->high_fps.scale.x = 0.45;
    option->high_fps.scale.y = 0.45;
    define_option_five(option);
}

void define_option_third(option_t *option)
{
    option->music_b.other_texture =
    sfTexture_createFromFile("used_images/Buttons/button_on.png", NULL);
    option->music_b.pos.x = 720;
    option->music_b.pos.y = 315;
    option->music_b.scale.x = 0.65;
    option->music_b.scale.y = 0.65;
    option->low_fps.sprt = sfSprite_create();
    option->low_fps.texture =
    sfTexture_createFromFile("used_images/Buttons/button_off.png", NULL);
    option->low_fps.other_texture =
    sfTexture_createFromFile("used_images/Buttons/button_on.png", NULL);
    option->low_fps.pos.x = 615;
    option->low_fps.pos.y = 445;
    option->low_fps.scale.x = 0.45;
    option->low_fps.scale.y = 0.45;
    option->mid_fps.sprt = sfSprite_create();
    option->mid_fps.texture =
    sfTexture_createFromFile("used_images/Buttons/button_off.png", NULL);
    define_option_forth(option);
}

void define_option_second(option_t *option)
{
    option->exit_b.texture =
    sfTexture_createFromFile("used_images/Buttons/exit_button.png", NULL);
    option->exit_b.pos.x = 705;
    option->exit_b.pos.y = 515;
    option->exit_b.scale.x = 0.85;
    option->exit_b.scale.y = 0.85;
    option->sound_b.sprt = sfSprite_create();
    option->sound_b.texture =
    sfTexture_createFromFile("used_images/Buttons/button_off.png", NULL);
    option->sound_b.other_texture =
    sfTexture_createFromFile("used_images/Buttons/button_on.png", NULL);
    option->sound_b.pos.x = 720;
    option->sound_b.pos.y = 260;
    option->sound_b.scale.x = 0.65;
    option->sound_b.scale.y = 0.65;
    option->music_b.sprt = sfSprite_create();
    option->music_b.texture =
    sfTexture_createFromFile("used_images/Buttons/button_off.png", NULL);
    define_option_third(option);
}

void define_option(option_t *option)
{
    option->create = 1;
    option->bg.sprt = sfSprite_create();
    option->bg.texture =
    sfTexture_createFromFile("used_images/Backgrounds/background.png", NULL);
    option->menu.sprt = sfSprite_create();
    option->menu.texture =
    sfTexture_createFromFile("used_images/Menus/option_menu.png", NULL);
    option->menu.pos.x = 390;
    option->menu.pos.y = 100;
    option->menu.scale.x = 0.75;
    option->menu.scale.y = 0.75;
    option->save_b.sprt = sfSprite_create();
    option->save_b.texture =
    sfTexture_createFromFile("used_images/Buttons/save_button.png", NULL);
    option->save_b.pos.x = 550;
    option->save_b.pos.y = 515;
    option->save_b.scale.x = 0.85;
    option->save_b.scale.y = 0.85;
    option->exit_b.sprt = sfSprite_create();
    define_option_second(option);
}