/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void define_tower_five(game_t *game)
{
    game->defense.aoe.tower.scale.x = 0.6;
    game->defense.aoe.tower.scale.y = 0.6;
    game->defense.ice.tower.sprt = sfSprite_create();
    game->defense.ice.tower.texture =
    sfTexture_createFromFile("used_images/Towers/ice_tower.png", NULL);
    game->defense.ice.tower.rect.left = 0;
    game->defense.ice.tower.rect.top = 0;
    game->defense.ice.tower.rect.height = 150;
    game->defense.ice.tower.rect.width = 90;
    game->defense.ice.tower.pos.x = 1048;
    game->defense.ice.tower.pos.y = 278;
    game->defense.ice.tower.scale.x = 0.6;
    game->defense.ice.tower.scale.y = 0.6;
    sfSprite_setTexture(game->defense.basic.tower.sprt,
    game->defense.basic.tower.texture, sfFalse);
    sfSprite_setScale(game->defense.basic.tower.sprt,
    game->defense.basic.tower.scale);
    sfSprite_setTextureRect(game->defense.basic.tower.sprt,
    game->defense.basic.tower.rect);
}

void define_tower_four(game_t *game)
{
    game->defense.sniper.tower.sprt = sfSprite_create();
    game->defense.sniper.tower.texture =
    sfTexture_createFromFile("used_images/Towers/sniper_tower.png", NULL);
    game->defense.sniper.tower.rect.left = 0;
    game->defense.sniper.tower.rect.top = 0;
    game->defense.sniper.tower.rect.height = 150;
    game->defense.sniper.tower.rect.width = 90;
    game->defense.sniper.tower.pos.x = 1038;
    game->defense.sniper.tower.pos.y = 135;
    game->defense.sniper.tower.scale.x = 0.7;
    game->defense.sniper.tower.scale.y = 0.6;
    game->defense.aoe.tower.sprt = sfSprite_create();
    game->defense.aoe.tower.texture =
    sfTexture_createFromFile("used_images/Towers/aoe_tower.png", NULL);
    game->defense.aoe.tower.rect.left = 0;
    game->defense.aoe.tower.rect.top = 0;
    game->defense.aoe.tower.rect.height = 150;
    game->defense.aoe.tower.rect.width = 90;
    game->defense.aoe.tower.pos.x = 1048;
    game->defense.aoe.tower.pos.y = 205;
}

void define_tower_third(game_t *game)
{
    sfColor color;

    game->defense.aoe.price.text = sfText_copy(game->defense.basic.price.text);
    game->defense.aoe.price.pos.x = 1093;
    game->defense.aoe.price.pos.y = 225;
    sfText_setString(game->defense.aoe.price.text, "100");
    game->defense.ice.price.text = sfText_copy(game->defense.basic.price.text);
    game->defense.ice.price.pos.x = 1098;
    game->defense.ice.price.pos.y = 300;
    sfText_setString(game->defense.ice.price.text, "75");
    game->defense.basic.range.sprt = sfSprite_create();
    game->defense.basic.range.texture =
    sfTexture_createFromFile("used_images/tower_range.png", NULL);
    game->defense.basic.range.pos.x = 1048;
    game->defense.basic.range.pos.y = 75;
    game->defense.basic.range.scale.x = 0.45;
    game->defense.basic.range.scale.y = 0.45;
    color = sfColor_fromRGBA(255, 255, 255, 100);
    sfSprite_setColor(game->defense.basic.range.sprt, color);
}

void define_tower_second(game_t *game)
{
    game->defense.basic.price.font =
    sfFont_createFromFile("used_fonts/font_title.ttf");
    game->defense.basic.price.text = sfText_create();
    game->defense.basic.price.pos.x = 1098;
    game->defense.basic.price.pos.y = 85;
    game->defense.basic.price.scale.x = 0.4;
    game->defense.basic.price.scale.y = 0.4;
    sfText_setFont(game->defense.basic.price.text,
    game->defense.basic.price.font);
    sfText_setString(game->defense.basic.price.text, "50");
    sfText_setOutlineColor(game->defense.basic.price.text, sfBlack);
    sfText_setOutlineThickness(game->defense.basic.price.text, 1.5);
    sfText_setScale(game->defense.basic.price.text,
    game->defense.basic.price.scale);
    game->defense.sniper.price.text =
    sfText_copy(game->defense.basic.price.text);
    game->defense.sniper.price.pos.x = 1098;
    game->defense.sniper.price.pos.y = 155;
    sfText_setString(game->defense.sniper.price.text, "75");
    define_tower_third(game);
}

void define_tower(game_t *game)
{
    game->tower_selected = 0;
    game->defense.basic.cost = 50;
    game->defense.sniper.cost = 75;
    game->defense.aoe.cost = 100;
    game->defense.ice.cost = 75;
    game->defense.basic.tower.sprt = sfSprite_create();
    game->defense.basic.tower.texture =
    sfTexture_createFromFile("used_images/Towers/basic_tower.png", NULL);
    game->defense.basic.tower.rect.left = 0;
    game->defense.basic.tower.rect.top = 0;
    game->defense.basic.tower.rect.height = 150;
    game->defense.basic.tower.rect.width = 90;
    game->defense.basic.tower.pos.x = 1048;
    game->defense.basic.tower.pos.y = 75;
    game->defense.basic.tower.scale.x = 0.55;
    game->defense.basic.tower.scale.y = 0.45;
    define_tower_second(game);
    define_tower_four(game);
    define_tower_five(game);
    define_tower_six(game);
}