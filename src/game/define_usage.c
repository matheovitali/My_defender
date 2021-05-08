/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_game
*/

#include "../../include.h"

sfVector2f middle_point(sprite_t o, float size_ox, float size_oy)
{
    sfFloatRect middle = sfSprite_getGlobalBounds(o.sprt);

    return ((sfVector2f) {o.pos.x + (middle.width / 2) - size_ox,
    o.pos.y + (middle.height / 2) - size_oy});
}

void define_health_second(game_t *game)
{
    game->health_health.sprt = sfSprite_create();
    game->health_health.texture =
    sfTexture_createFromFile("used_images/heart.png", NULL);
    game->health_health.scale.x = 0.07;
    game->health_health.scale.y = 0.07;
    game->health_health.pos.x = 10;
    game->health_health.pos.y = 18;
    sfSprite_setTexture(game->health_health.sprt,
    game->health_health.texture, sfFalse);
    sfSprite_setScale(game->health_health.sprt, game->health_health.scale);
}

void define_health(game_t *game)
{
    game->health_count.font =
    sfFont_createFromFile("used_fonts/font_title.ttf");
    game->health_count.text = sfText_create();
    game->health_count.pos.x = 50;
    game->health_count.pos.y = 25;
    game->health_count.scale.x = 0.5;
    game->health_count.scale.y = 0.5;
    sfText_setFont(game->health_count.text, game->health_count.font);
    sfText_setString(game->health_count.text, int_to_str(game->health));
    sfText_setOutlineColor(game->health_count.text, sfBlack);
    sfText_setOutlineThickness(game->health_count.text, 1.8);
    sfText_setScale(game->health_count.text, game->health_count.scale);
    define_health_second(game);
}

void define_money_second(game_t *game)
{
    game->money_money.sprt = sfSprite_create();
    game->money_money.texture =
    sfTexture_createFromFile("used_images/gold_anim.png", NULL);
    game->money_money.scale.x = 0.7;
    game->money_money.scale.y = 0.7;
    game->money_money.pos.x = 10;
    game->money_money.pos.y = 65;
    game->money_money.rect.left = 0;
    game->money_money.rect.top = 0;
    game->money_money.rect.width = 50;
    game->money_money.rect.height = 48;
    sfSprite_setTexture(game->money_money.sprt,
    game->money_money.texture, sfFalse);
    sfSprite_setScale(game->money_money.sprt, game->money_money.scale);
    sfSprite_setTextureRect(game->money_money.sprt, game->money_money.rect);
}

void define_money(game_t *game)
{
    game->money_count.font =
    sfFont_createFromFile("used_fonts/font_title.ttf");
    game->money_count.text = sfText_create();
    game->money_count.pos.x = 50;
    game->money_count.pos.y = 75;
    game->money_count.scale.x = 0.5;
    game->money_count.scale.y = 0.5;
    sfText_setFont(game->money_count.text, game->money_count.font);
    sfText_setString(game->money_count.text, int_to_str(game->money));
    sfText_setOutlineColor(game->money_count.text, sfBlack);
    sfText_setOutlineThickness(game->money_count.text, 1.8);
    sfText_setScale(game->money_count.text, game->money_count.scale);
    define_money_second(game);
}