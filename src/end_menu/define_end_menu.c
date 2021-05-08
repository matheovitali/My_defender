/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_end_menu
*/

#include "../../include.h"

void define_end_menu_three(end_game_t *end_g)
{
    sfSprite_setPosition(end_g->exit_b.sprt, end_g->exit_b.pos);
    sfSprite_setPosition(end_g->menu_b.sprt, end_g->menu_b.pos);
    end_g->lost.text = sfText_copy(end_g->quit.text);
    end_g->lost.scale.x = 2;
    end_g->lost.scale.y = 2;
    end_g->lost.pos.x = 435;
    end_g->lost.pos.y = 100;
    sfText_setString(end_g->lost.text, "You Lost !");
    sfText_setPosition(end_g->lost.text, end_g->lost.pos);
    sfText_setScale(end_g->lost.text, end_g->lost.scale);
}

void define_end_menu_two(end_game_t *end_g)
{
    end_g->quit.scale.y = 0.7;
    sfText_setString(end_g->quit.text, "Quit");
    sfText_setPosition(end_g->quit.text, end_g->quit.pos);
    sfText_setPosition(end_g->main_menu.text, end_g->main_menu.pos);
    sfText_setScale(end_g->main_menu.text, end_g->main_menu.scale);
    sfText_setScale(end_g->quit.text, end_g->quit.scale);
    end_g->exit_b.sprt = sfSprite_create();
    end_g->exit_b.texture =
    sfTexture_createFromFile("used_images/Buttons/settings_and_quit_b.png",
    NULL);
    sfSprite_setTexture(end_g->exit_b.sprt, end_g->exit_b.texture, sfFalse);
    end_g->exit_b.pos.x = 350;
    end_g->exit_b.pos.y = 400;
    end_g->exit_b.scale.x = 0.6;
    end_g->exit_b.scale.y = 0.6;
    sfSprite_setScale(end_g->exit_b.sprt, end_g->exit_b.scale);
    end_g->menu_b.sprt = sfSprite_copy(end_g->exit_b.sprt);
    end_g->menu_b.pos.x = 750;
    end_g->menu_b.pos.y = 400;
    define_end_menu_three(end_g);
}

void define_end_menu(end_game_t *end_g)
{
    end_g->create = 1;
    end_g->bg.sprt = sfSprite_create();
    end_g->bg.texture =
    sfTexture_createFromFile("used_images/Backgrounds/background.png", NULL);
    sfSprite_setTexture(end_g->bg.sprt, end_g->bg.texture, sfFalse);
    end_g->main_menu.font = sfFont_createFromFile("used_fonts/font_title.ttf");
    end_g->main_menu.text = sfText_create();
    end_g->main_menu.pos.x = 790;
    end_g->main_menu.pos.y = 425;
    end_g->main_menu.scale.x = 0.6;
    end_g->main_menu.scale.y = 0.6;
    sfText_setFont(end_g->main_menu.text, end_g->main_menu.font);
    sfText_setString(end_g->main_menu.text, "Main_menu");
    sfText_setOutlineColor(end_g->main_menu.text, sfBlack);
    sfText_setOutlineThickness(end_g->main_menu.text, 1.8);
    end_g->quit.text = sfText_copy(end_g->main_menu.text);
    end_g->quit.pos.x = 430;
    end_g->quit.pos.y = 425;
    end_g->quit.scale.x = 0.7;
    define_end_menu_two(end_g);
}