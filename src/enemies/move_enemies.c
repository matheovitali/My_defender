/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_enemies
*/

#include "../../include.h"

void move_enemies_fourth(zombi_t *list, game_t *game)
{
    if (list->anime_state == 0) {
        list->anim = game->time_zero;
        list->zombi.rect.left += 139;
    }
    if (list->anime_state == 1) {
        list->anim = game->time_zero;
        list->zombi.rect.left -= 139;
    }
}

void move_enemies_third(zombi_t *list, game_t *game)
{
    if (list->zombi.rect.left >= 600)
        list->anime_state = 1;
    if (list->zombi.rect.left <= 0)
        list->anime_state = 0;
}

void move_enemies_second(option_t *option, zombi_t *list)
{
    if (option->high_fps.clicked == 1)
        list->speed = 1;
    if (option->mid_fps.clicked == 1)
        list->speed = 2;
    if (option->low_fps.clicked == 1)
        list->speed = 3;
}

void move_enemies(sfRenderWindow **window, zombi_t **list_zombi, game_t *game,
option_t *option)
{
    zombi_t *list = *list_zombi;

    while (list != NULL) {
        if (list->iced != 1)
            move_enemies_second(option, list);
        if (game->time_zero - list->anim >= 0.2) {
            move_enemies_third(list, game);
            move_enemies_fourth(list, game);
        }
        follow_path(list, game);
        sfSprite_setTextureRect(list->zombi.sprt, list->zombi.rect);
        sfSprite_setPosition(list->zombi.sprt, list->zombi.pos);
        sfText_setPosition(list->health.text, list->health.pos);
        if (list->pv >= 0)
            sfText_setString(list->health.text, int_to_str(list->pv));
        sfRenderWindow_drawSprite(*window, list->zombi.sprt, sfFalse);
        sfRenderWindow_drawText(*window, list->health.text, NULL);
        delete_ennemies(list_zombi, game, option);
        list = list->next;
    }
}