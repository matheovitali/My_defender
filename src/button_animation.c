/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** button_animation
*/

#include "../include.h"

void button_animation_second(main_t *menu)
{
    if (menu->play_b.scale.x > 0.09 && menu->play_b.scale.x < 1.1) {
        menu->play_b.scale.x += 0.035;
        menu->play_b.scale.y += 0.035;
        menu->option_b.scale.x += 0.02;
        menu->option_b.scale.y += 0.02;
        menu->exit_b.scale.x += 0.02;
        menu->exit_b.scale.y += 0.02;
        menu->setting.scale.x += 0.0175;
        menu->setting.scale.y += 0.0175;
        menu->leave.scale.x += 0.02;
        menu->leave.scale.y += 0.02;
        menu->play_b.pos.x -= 1.89;
        menu->play_b.pos.y -= 2.9;
        menu->option_b.pos.x -= 3;
        menu->exit_b.pos.x -= 3;
        menu->setting.pos.x -= 1.5;
        menu->setting.pos.y += 0.8;
        menu->leave.pos.y += 0.75;
        menu->leave.pos.x -= 0.5;
    }
}

void button_animation(main_t *menu)
{
    if (menu->title.scale.x < 1.4) {
        menu->title.scale.x += 0.03;
        menu->title.pos.x -= 8.4;
        menu->name.scale.x += 0.02;
        menu->name.pos.x -= 11.28;
        menu->title.scale.y += 0.03;
        menu->title.pos.y -= 0.6;
        menu->name.scale.y += 0.02;
        menu->name.pos.y -= 1.80;
    } else if (menu->play_b.scale.x < 0.1) {
        menu->play_b.scale.x = 0.1;
        menu->play_b.scale.y = 0.1;
        menu->option_b.scale.x = 0.1;
        menu->option_b.scale.y = 0.1;
        menu->exit_b.scale.x = 0.1;
        menu->exit_b.scale.y = 0.1;
        menu->setting.scale.x = 0.1;
        menu->setting.scale.y = 0.1;
        menu->leave.scale.x = 0.1;
        menu->leave.scale.y = 0.1;
    }
}