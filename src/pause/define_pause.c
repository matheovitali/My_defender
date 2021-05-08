/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_pause
*/

#include "../../include.h"

void define_pause_three(pause_t *pause)
{
    pause->quit.text = sfText_copy(pause->resume.text);
    pause->quit.pos.x = 740;
    pause->quit.pos.y = 360;
    pause->quit.scale.x = 0.55;
    pause->quit.scale.y = 0.55;
    sfText_setString(pause->quit.text, "Quitter");
    sfSprite_setTexture(pause->bg.sprt, pause->bg.texture, sfFalse);
    sfSprite_setTexture(pause->menu.sprt, pause->menu.texture, sfFalse);
    sfSprite_setTexture(pause->resume_b.sprt,
    pause->resume_b.texture, sfFalse);
    sfSprite_setTexture(pause->exit_b.sprt, pause->exit_b.texture, sfFalse);
}

void define_pause_second(pause_t *pause)
{
    pause->resume.font = sfFont_createFromFile("used_fonts/font_title.ttf");
    pause->resume.text = sfText_create();
    pause->resume.pos.x = 475;
    pause->resume.pos.y = 360;
    pause->resume.scale.x = 0.55;
    pause->resume.scale.y = 0.55;
    sfText_setFont(pause->resume.text, pause->resume.font);
    sfText_setString(pause->resume.text, "Reprendre");
    sfText_setOutlineColor(pause->resume.text, sfBlack);
    sfText_setOutlineThickness(pause->resume.text, 1.8);
    define_pause_three(pause);
}

void define_pause(pause_t *pause)
{
    pause->create = 1;
    pause->bg.sprt = sfSprite_create();
    pause->bg.texture =
    sfTexture_createFromFile("used_images/Backgrounds/background.png", NULL);
    pause->menu.sprt = sfSprite_create();
    pause->menu.texture =
    sfTexture_createFromFile("used_images/Menus/pause_menu_in_game.png", NULL);
    pause->menu.pos.x = 175;
    pause->menu.pos.y = 40;
    pause->exit_b.sprt = sfSprite_create();
    pause->exit_b.texture =
    sfTexture_createFromFile("used_images/Buttons/button_in_game.png", NULL);
    pause->exit_b.pos.x = 675;
    pause->exit_b.pos.y = 345;
    pause->resume_b.sprt = sfSprite_create();
    pause->resume_b.texture =
    sfTexture_createFromFile("used_images/Buttons/button_in_game.png", NULL);
    pause->resume_b.pos.x = 438;
    pause->resume_b.pos.y = 345;
    define_pause_second(pause);
}