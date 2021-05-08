/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void place_tower_third(game_t *game, Towers_t **tower_list)
{
    if (game->defense.placement.p_five_placed == 0 &&
    game->defense.placement.p_five != 0) {
        add_new_turret(tower_list, game, 5, game->defense.placement.p_five);
        game->defense.placement.p_five_placed = 1;
    }
}

void place_tower_second(game_t *game, Towers_t **tower_list)
{
    if (game->defense.placement.p_three_placed == 0 &&
    game->defense.placement.p_three != 0) {
        add_new_turret(tower_list, game, 3, game->defense.placement.p_three);
        game->defense.placement.p_three_placed = 1;
    } else if (game->defense.placement.p_four_placed == 0 &&
    game->defense.placement.p_four != 0) {
        add_new_turret(tower_list, game, 4, game->defense.placement.p_four);
        game->defense.placement.p_four_placed = 1;
    } else
        place_tower_third(game, tower_list);
}

void place_tower(game_t *game, Towers_t **tower_list)
{
    if (game->defense.placement.p_one_placed == 0 &&
    game->defense.placement.p_one != 0) {
        add_new_turret(tower_list, game, 1, game->defense.placement.p_one);
        game->defense.placement.p_one_placed = 1;
    } else if (game->defense.placement.p_two_placed == 0 &&
    game->defense.placement.p_two != 0) {
        add_new_turret(tower_list, game, 2, game->defense.placement.p_two);
        game->defense.placement.p_two_placed = 1;
    } else
        place_tower_second(game, tower_list);
}