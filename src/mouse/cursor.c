/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** cursor
*/

#include "../../include.h"

void define_cursor(cursor_t *cursor)
{
    cursor->cursor.sprt = sfSprite_create();
    cursor->cursor.texture =
    sfTexture_createFromFile("used_images/Arrow_white.png", NULL);
    sfSprite_setTexture(cursor->cursor.sprt, cursor->cursor.texture, sfFalse);
    cursor->click.buffer =
    sfSoundBuffer_createFromFile("used_sounds/menu_click.wav");
    cursor->click.sound = sfSound_create();
    sfSound_setBuffer(cursor->click.sound, cursor->click.buffer);
}