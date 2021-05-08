/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_game
*/

#include "../../include.h"

void define_circle(Towers_t *tower, int range)
{
    tower->tower.range_circle = sfCircleShape_create();
    tower->tower.circle_center = middle_point(tower->tower.tower, range,
    range);
    sfCircleShape_setPosition(tower->tower.range_circle,
    tower->tower.circle_center);
    sfCircleShape_setRadius(tower->tower.range_circle, range);
}