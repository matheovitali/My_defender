/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_pause
*/
#include "../../include.h"

void create_pause(pause_t *pause, sfRenderWindow **window)
{
    sfSprite_setPosition(pause->menu.sprt, pause->menu.pos);
    sfSprite_setPosition(pause->exit_b.sprt, pause->exit_b.pos);
    sfSprite_setPosition(pause->resume_b.sprt, pause->resume_b.pos);
    sfText_setPosition(pause->resume.text, pause->resume.pos);
    sfText_setScale(pause->resume.text, pause->resume.scale);
    sfText_setPosition(pause->quit.text, pause->quit.pos);
    sfText_setScale(pause->quit.text, pause->quit.scale);
    sfRenderWindow_drawSprite(*window, pause->bg.sprt, NULL);
    sfRenderWindow_drawSprite(*window, pause->menu.sprt, NULL);
    sfRenderWindow_drawSprite(*window, pause->resume_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, pause->exit_b.sprt, NULL);
    sfRenderWindow_drawText(*window, pause->resume.text, NULL);
    sfRenderWindow_drawText(*window, pause->quit.text, NULL);
}

void destroy_pause(pause_t *pause)
{
    pause->create = 0;
    sfSprite_destroy(pause->bg.sprt);
    sfTexture_destroy(pause->bg.texture);
    sfSprite_destroy(pause->exit_b.sprt);
    sfTexture_destroy(pause->exit_b.texture);
    sfSprite_destroy(pause->resume_b.sprt);
    sfTexture_destroy(pause->resume_b.texture);
    sfSprite_destroy(pause->menu.sprt);
    sfTexture_destroy(pause->menu.texture);
    sfText_destroy(pause->resume.text);
    sfText_destroy(pause->quit.text);
    sfFont_destroy(pause->resume.font);
}