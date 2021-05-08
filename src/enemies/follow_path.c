/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_enemies
*/

#include "../../include.h"

void follow_path_five(zombi_t *list, game_t *game)
{
    if (list->path < 2240) {
        rotate(list, (int []) {-90, 0, -60, -180});
        list->zombi.pos.x -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 2385) {
        rotate(list, (int []) {90, 0, 60, -90});
        list->zombi.pos.y -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else
        follow_path_six(list, game);
}

void follow_path_four(zombi_t *list, game_t *game)
{
    if (list->path < 1840) {
        rotate(list, (int []) {-90, 0, 60, 0});
        list->zombi.pos.x += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 2050) {
        rotate(list, (int []) {-90, 60, 0, -90});
        list->zombi.pos.y -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else
        follow_path_five(list, game);
}

void follow_path_third(zombi_t *list, game_t *game)
{
    if (list->path < 1170) {
        rotate(list, (int []) {90, 60, 0, 180});
        list->zombi.pos.x -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 1310) {
        rotate(list, (int []) {-90, -60, 0, 90});
        list->zombi.pos.y += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y - 20;
    } else
        follow_path_four(list, game);
}

void follow_path_second(zombi_t *list, game_t *game)
{
    if (list->path < 705) {
        rotate(list, (int []) {90, -70, 0, 0});
        list->zombi.pos.x += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 1000) {
        rotate(list, (int []) {90, -10, -60, 90});
        list->zombi.pos.y += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y - 20;
    } else
        follow_path_third(list, game);
}

void follow_path(zombi_t *list, game_t *game)
{
    if (list->path < 370) {
        list->zombi.pos.x += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 515) {
        rotate(list, (int []) {-90, 70, 0, -90});
        list->zombi.pos.y -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else
        follow_path_second(list, game);
}