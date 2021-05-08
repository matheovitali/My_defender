/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_enemies
*/

#include "../../include.h"

void delete_current(zombi_t **list, zombi_t *prev, zombi_t *next)
{
    if (prev != NULL)
        prev->next = next;
    else
        *list = next;
}

void delete_ennemies_second(zombi_t **list, game_t *game, option_t *option,
zombi_t *current)
{
    sfText_setString(game->money_count.text, int_to_str(game->money));
    if (option->sound_b.clicked == 0)
        sfSound_play(current->death.sound);
}

void delete_ennemies(zombi_t **list, game_t *game, option_t *option)
{
    zombi_t *prev = NULL;
    zombi_t *current = *list;
    zombi_t *next = NULL;

    while (current != NULL) {
        if (current->next != NULL)
            next = current->next;
        else
            next = NULL;
        if (current->pv <= 0) {
            game->money += current->reward;
            delete_ennemies_second(list, game, option, current);
            delete_current(list, prev, next);
        } else if (current->path > 3110)
            delete_current(list, prev, next);
        else
            prev = current;
        current = next;
    }
}