/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_game
*/

#include "../../include.h"

void destroy_game(game_t *game)
{
    game->create = 0;
    if (game->options.create != 0)
        destroy_option(&game->options);
    sfSprite_destroy(game->map.sprt);
    sfTexture_destroy(game->map.texture);
    sfSprite_destroy(game->setting_b.sprt);
    sfTexture_destroy(game->setting_b.texture);
    sfSprite_destroy(game->pause_b.sprt);
    sfTexture_destroy(game->pause_b.texture);
    sfSprite_destroy(game->roll_b.sprt);
    sfTexture_destroy(game->roll_b.texture);
    sfSprite_destroy(game->rotate_roll_b.sprt);
    sfTexture_destroy(game->rotate_roll_b.texture);
    sfMusic_destroy(game->music);
}