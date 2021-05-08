/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

int if_zombi_in_range_check(float circle_distance_y, float cornerDistance_sq,
zombi_t *zombi, int range)
{
    if (circle_distance_y <= (zombi->zombi.rect.height/2))
        return (1);
    if (cornerDistance_sq <= pow(range, 2))
        return (1);
    else
        return (0);
}

int if_zombi_in_range(int range, Towers_t *tower, zombi_t *zombi)
{
    tower->tower.circle_center = middle_point(tower->tower.tower,
    range, range);
    float circle_distance_x = abs(tower->tower.circle_center.x
    + range - zombi->zombi.pos.x);
    float circle_distance_y = abs(tower->tower.circle_center.y
    + range - zombi->zombi.pos.y);
    float cornerDistance_sq = pow((circle_distance_x -
    zombi->zombi.rect.width / 2), 2) + pow((circle_distance_y -
    (zombi->zombi.rect.height - 20)/ 2), 2);

    if (circle_distance_x > (zombi->zombi.rect.width/2 + range))
        return (0);
    if (circle_distance_y > (zombi->zombi.rect.height/2 + range))
        return (0);
    if (circle_distance_x <= (zombi->zombi.rect.width/2))
        return (1);
    return (if_zombi_in_range_check(circle_distance_y,
    cornerDistance_sq, zombi, range));
}

void attack_all_zombi(Towers_t *tower, zombi_t **zombi, int damage)
{
    zombi_t *zomb = *zombi;

    while (zomb != NULL) {
        if (if_zombi_in_range(110, tower, zomb) == 1 &&
        tower->tower.time_hit > 40)
            zomb->pv -= damage;
        zomb = zomb->next;
    }
    if (tower->tower.time_hit > 40)
        tower->tower.time_hit = 0;
}