/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_main
*/

#include "../../include.h"

void define_main_five(main_t *menu)
{
    menu->how_to_button.scale.x = 0.5;
    menu->how_to_button.scale.y = 0.5;
    sfSprite_setPosition(menu->how_to_button.sprt, menu->how_to_button.pos);
    sfSprite_setScale(menu->how_to_button.sprt, menu->how_to_button.scale);
    menu->how_to_text.text = sfText_copy(menu->leave.text);
    sfText_setString(menu->how_to_text.text, "How to play");
    menu->how_to_text.scale.x = 0.5;
    menu->how_to_text.scale.y = 0.5;
    menu->how_to_text.pos.x = 24;
    menu->how_to_text.pos.y = 680;
    sfText_setPosition(menu->how_to_text.text, menu->how_to_text.pos);
    sfText_setScale(menu->how_to_text.text, menu->how_to_text.scale);
}

void define_main_forth(main_t *menu)
{
    menu->exit_b.pos.x = 630;
    menu->exit_b.pos.y = 580;
    menu->exit_b.scale.x = 0.001;
    menu->exit_b.scale.y = 0.001;
    sfSprite_setTexture(menu->bg.sprt, menu->bg.texture, sfFalse);
    sfSprite_setTexture(menu->name.sprt, menu->name.texture, sfFalse);
    sfSprite_setTexture(menu->play_b.sprt, menu->play_b.texture, sfFalse);
    sfSprite_setTexture(menu->option_b.sprt, menu->option_b.texture, sfFalse);
    sfSprite_setTexture(menu->exit_b.sprt, menu->exit_b.texture, sfFalse);
    sfMusic_play(menu->music);
    menu->how_to_button.sprt = sfSprite_create();
    menu->how_to_button.texture =
    sfTexture_createFromFile("used_images/Buttons/settings_and_quit_b.png",
    NULL);
    sfSprite_setTexture(menu->how_to_button.sprt, menu->how_to_button.texture,
    sfFalse);
    menu->how_to_button.pos.x = 0;
    menu->how_to_button.pos.y = 660;
    define_main_five(menu);
}

void define_main_third(main_t *menu)
{
    menu->play_b.texture =
    sfTexture_createFromFile("used_images/Buttons/play_button.png", NULL);
    menu->play_b.pos.x = 635;
    menu->play_b.pos.y = 320;
    menu->play_b.scale.x = 0.001;
    menu->play_b.scale.y = 0.001;
    menu->option_b.sprt = sfSprite_create();
    menu->option_b.texture =
    sfTexture_createFromFile("used_images/Buttons/settings_and_quit_b.png",
    NULL);
    menu->option_b.pos.x = 630;
    menu->option_b.pos.y = 450;
    menu->option_b.scale.x = 0.001;
    menu->option_b.scale.y = 0.001;
    menu->exit_b.sprt = sfSprite_create();
    menu->exit_b.texture =
    sfTexture_createFromFile("used_images/Buttons/settings_and_quit_b.png",
    NULL);
    define_main_forth(menu);
}

void define_main_second(main_t *menu)
{
    menu->leave.text = sfText_copy(menu->title.text);
    menu->leave.pos.x = 627;
    menu->leave.pos.y = 585;
    menu->leave.scale.x = 0.001;
    menu->leave.scale.y = 0.001;
    sfText_setString(menu->setting.text, "Parametres");
    sfText_setString(menu->leave.text, "Quitter");
    menu->bg.sprt = sfSprite_create();
    menu->bg.texture =
    sfTexture_createFromFile("used_images/Backgrounds/background.png", NULL);
    menu->name.sprt = sfSprite_create();
    menu->name.texture =
    sfTexture_createFromFile("used_images/Buttons/game_title.png", NULL);
    menu->name.pos.x = 599;
    menu->name.pos.y = 95;
    menu->name.scale.x = 0.125;
    menu->name.scale.y = 0.125;
    menu->play_b.sprt = sfSprite_create();
    define_main_third(menu);
}

void define_main(main_t *menu, game_t *game)
{
    menu->create = 1;
    game->health = 3;
    menu->music = sfMusic_createFromFile("used_sounds/menu_music.ogg");
    sfMusic_setLoop(menu->music, sfTrue);
    menu->title.font = sfFont_createFromFile("used_fonts/font_title.ttf");
    menu->title.text = sfText_create();
    menu->title.pos.x = 615;
    menu->title.pos.y = 105;
    menu->title.scale.x = 0.2;
    menu->title.scale.y = 0.2;
    sfText_setFont(menu->title.text, menu->title.font);
    sfText_setString(menu->title.text, "La revanche des gueux");
    sfText_setOutlineColor(menu->title.text, sfBlack);
    sfText_setOutlineThickness(menu->title.text, 1.8);
    menu->setting.text = sfText_copy(menu->title.text);
    menu->setting.pos.x = 625;
    menu->setting.pos.y = 455;
    menu->setting.scale.x = 0.001;
    menu->setting.scale.y = 0.001;
    define_main_second(menu);
}