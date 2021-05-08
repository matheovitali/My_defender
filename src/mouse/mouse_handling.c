/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void mouse_click(sfSprite *sprite_button, sfVector2i mouse,
int *window_index, int nbr)
{
    sfFloatRect mouse_rect = sfSprite_getGlobalBounds(sprite_button);

    if (sfFloatRect_contains(&mouse_rect, mouse.x, mouse.y))
        *window_index = nbr;
}

int mouse_hover(sfSprite *sprite_button, sfVector2i mouse)
{
    sfFloatRect mouse_rect = sfSprite_getGlobalBounds(sprite_button);
    sfColor color;

    if (sfFloatRect_contains(&mouse_rect, mouse.x, mouse.y))
        color = sfColor_fromRGBA(255, 255, 255, 150);
    else
        color = sfColor_fromRGBA(255, 255, 255, 255);
    sfSprite_setColor(sprite_button, color);
}