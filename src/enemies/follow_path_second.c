/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_enemies
*/

#include "../../include.h"

void follow_path_seven(zombi_t *list, game_t *game)
{
    if (list->path < 2864) {
        rotate(list, (int []) {-90, 0, -60, -180});
        list->zombi.pos.x -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 3390) {
        rotate(list, (int []) {90, 0, 60, -90});
        list->zombi.pos.y -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    }
    if (list->path > 3100 && list->path < 3104) {
        game->health -= 1;
        sfText_setString(game->health_count.text, int_to_str(game->health));
        list = list->next;
    }
}

void follow_path_six(zombi_t *list, game_t *game)
{
    if (list->path < 2560) {
        rotate(list, (int []) {90, -60, 0, 0});
        list->zombi.pos.x += list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else if (list->path < 2705) {
        rotate(list, (int []) {-90, 60, 0, -90});
        list->zombi.pos.y -= list->speed;
        list->path += list->speed;
        list->health.pos.x = list->zombi.pos.x;
        list->health.pos.y = list->zombi.pos.y;
    } else
        follow_path_seven(list, game);
}