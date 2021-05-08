/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_game
*/

#include "../../include.h"

void define_game_five(game_t *game)
{
    game->Towers.scale.x = 0.2;
    game->Towers.scale.y = 0.2;
    sfText_setFont(game->Towers.text, game->Towers.font);
    sfText_setString(game->Towers.text, "Towers");
    sfText_setOutlineColor(game->Towers.text, sfBlack);
    sfText_setOutlineThickness(game->Towers.text, 1.8);
    game->tower_menu_on = 1;
    game->tower_menu.sprt = sfSprite_create();
    game->tower_menu.texture =
    sfTexture_createFromFile("used_images/Menus/tower_menu.png", NULL);
    game->tower_menu.pos.x = 1270;
    game->tower_menu.pos.y = 0;
    game->tower_menu.scale.x = 1.95;
    game->tower_menu.scale.y = 2.5;
    define_game_six(game);
}

void define_game_four(game_t *game)
{
    sfMusic_play(game->music);
    game->menu_b.sprt = sfSprite_create();
    game->menu_b.texture =
    sfTexture_createFromFile("used_images/Buttons/tower_button.png", NULL);
    game->menu_b.pos.x = 942;
    game->menu_b.pos.y = 675;
    game->menu_b.scale.x = 0.8;
    game->menu_b.scale.y = 0.8;
    sfSprite_setTexture(game->menu_b.sprt,
    game->menu_b.texture, sfFalse);
    sfSprite_setPosition(game->menu_b.sprt, game->menu_b.pos);
    sfSprite_setScale(game->menu_b.sprt, game->menu_b.scale);
    define_tower(game);
    define_placement(game);
    game->Towers.font = sfFont_createFromFile("used_fonts/font_title.ttf");
    game->Towers.text = sfText_create();
    game->Towers.pos.x = 1000;
    game->Towers.pos.y = 685;
    define_game_five(game);
}

void define_game_three(game_t *game)
{
    game->roll_b.pos.x = 1359;
    game->roll_b.pos.y = 10;
    sfSprite_rotate(game->roll_b.sprt, 90);
    game->rotate_roll_b.sprt = sfSprite_create();
    game->rotate_roll_b.texture =
    sfTexture_createFromFile("used_images/Buttons/roll_button.png", NULL);
    game->rotate_roll_b.pos.x = 1303;
    game->rotate_roll_b.pos.y = 225;
    game->rotate_roll_b.scale.x = 0.3;
    game->rotate_roll_b.scale.y = 0.3;
    sfSprite_rotate(game->rotate_roll_b.sprt, 270);
    sfSprite_setTexture(game->map.sprt, game->map.texture, sfFalse);
    sfSprite_setTexture(game->roll_b.sprt, game->roll_b.texture, sfFalse);
    sfSprite_setTexture(game->setting_b.sprt, game->setting_b.texture,
    sfFalse);
    sfSprite_setTexture(game->pause_b.sprt, game->pause_b.texture, sfFalse);
    sfSprite_setTexture(game->rotate_roll_b.sprt, game->rotate_roll_b.texture,
    sfFalse);
    define_game_four(game);
}

void define_game_two(game_t *game)
{
    game->setting_b.pos.x = 1295;
    game->setting_b.pos.y = 10;
    game->setting_b.scale.x = 0.5;
    game->setting_b.scale.y = 0.5;
    game->pause_b.sprt = sfSprite_create();
    game->pause_b.texture =
    sfTexture_createFromFile("used_images/Buttons/pause_menu_button.png",
    NULL);
    game->pause_b.pos.x = 1289;
    game->pause_b.pos.y = 90;
    game->pause_b.scale.x = 0.4;
    game->pause_b.scale.y = 0.4;
    game->roll_b.sprt = sfSprite_create();
    game->roll_b.texture =
    sfTexture_createFromFile("used_images/Buttons/roll_button.png", NULL);
    game->roll_b.scale.x = 0.3;
    game->roll_b.scale.y = 0.3;
    define_game_three(game);
}

void define_game(game_t *game)
{
    game->create = 1;
    game->options.create = 0;
    game->music = sfMusic_createFromFile("used_sounds/game_music.ogg");
    sfMusic_setLoop(game->music, sfTrue);
    game->map.sprt = sfSprite_create();
    game->map.texture =
    sfTexture_createFromFile("used_images/Backgrounds/map.png", NULL);
    game->map.scale.x = 1.1;
    game->map.scale.y = 0.905;
    game->map.pos.x = 0;
    game->map.pos.y = 0;
    game->setting_b.sprt = sfSprite_create();
    game->setting_b.texture =
    sfTexture_createFromFile("used_images/Buttons/option_game_button.png",
    NULL);
    define_game_two(game);
}