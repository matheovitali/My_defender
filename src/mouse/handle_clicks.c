/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** mouse_click
*/

#include "../../include.h"

void game_click_five(window_t *Window, cursor_t *cursor, int verif)
{
    if (Window->all_menu.game.defense.placement.p_three == 0) {
        mouse_click(Window->all_menu.game.defense.placement.three.sprt,
        cursor->pos, &Window->all_menu.game.defense.placement.p_three,
        Window->all_menu.game.tower_selected);
    }
    if (Window->all_menu.game.defense.placement.p_four == 0) {
        mouse_click(Window->all_menu.game.defense.placement.four.sprt,
        cursor->pos, &Window->all_menu.game.defense.placement.p_four,
        Window->all_menu.game.tower_selected);
    }
    if (Window->all_menu.game.defense.placement.p_five == 0) {
        mouse_click(Window->all_menu.game.defense.placement.five.sprt,
        cursor->pos, &Window->all_menu.game.defense.placement.p_five,
        Window->all_menu.game.tower_selected);
    }
}

void game_click_four(window_t *Window, cursor_t *cursor, int verif)
{
    if (Window->all_menu.game.tower_selected > 0) {
        if (Window->all_menu.game.defense.placement.p_one == 0) {
            mouse_click(Window->all_menu.game.defense.placement.one.sprt,
            cursor->pos, &Window->all_menu.game.defense.placement.p_one,
            Window->all_menu.game.tower_selected);
        }
        if (Window->all_menu.game.defense.placement.p_two == 0) {
            mouse_click(Window->all_menu.game.defense.placement.two.sprt,
            cursor->pos, &Window->all_menu.game.defense.placement.p_two,
            Window->all_menu.game.tower_selected);
        }
        game_click_five(Window, cursor, verif);
    }
    if (verif > 0 && verif_pad_click(Window, cursor) == 0)
        Window->all_menu.game.tower_selected = 0;
}

void game_click_third(window_t *Window, cursor_t *cursor, int verif)
{
    mouse_click(Window->all_menu.game.menu_b.sprt, cursor->pos,
    &Window->all_menu.game.tower_menu_on, 0);
    if (Window->all_menu.game.money >=
    Window->all_menu.game.defense.basic.cost)
        mouse_click(Window->all_menu.game.defense.basic.tower.sprt,
        cursor->pos, &Window->all_menu.game.tower_selected, 1);
    if (Window->all_menu.game.money >=
    Window->all_menu.game.defense.sniper.cost)
        mouse_click(Window->all_menu.game.defense.sniper.tower.sprt,
        cursor->pos, &Window->all_menu.game.tower_selected, 2);
    if (Window->all_menu.game.money >= Window->all_menu.game.defense.aoe.cost)
        mouse_click(Window->all_menu.game.defense.aoe.tower.sprt, cursor->pos,
        &Window->all_menu.game.tower_selected, 3);
    if (Window->all_menu.game.money >= Window->all_menu.game.defense.ice.cost)
        mouse_click(Window->all_menu.game.defense.ice.tower.sprt, cursor->pos,
        &Window->all_menu.game.tower_selected, 4);
    game_click_four(Window, cursor, verif);
}

void game_click_second(window_t *Window, cursor_t *cursor, int verif)
{
    mouse_click(Window->all_menu.game.roll_b.sprt, cursor->pos,
    &Window->all_menu.game.game_option, 1);
    mouse_click(Window->all_menu.game.rotate_roll_b.sprt, cursor->pos,
    &Window->all_menu.game.game_option, 0);
    mouse_click(Window->all_menu.game.pause_b.sprt, cursor->pos,
    &Window->all_menu.game.game_pause, 1);
    mouse_click(Window->all_menu.game.setting_b.sprt, cursor->pos,
    &Window->index, 2);
    if (Window->all_menu.game.tower_menu_on == 0) {
        mouse_click(Window->all_menu.game.menu_b.sprt, cursor->pos,
        &Window->all_menu.game.tower_menu_on, 1);
    } else
        game_click_third(Window, cursor, verif);
}

void game_click(window_t *Window, cursor_t *cursor)
{
    int verif = 0;

    if (Window->all_menu.game.tower_selected > 0)
        verif = 1;
    if (Window->all_menu.game.health == 0) {
        mouse_click(Window->all_menu.end_game.exit_b.sprt, cursor->pos,
        &Window->index, 3);
        mouse_click(Window->all_menu.end_game.menu_b.sprt, cursor->pos,
        &Window->index, 0);
    } else {
        if (Window->all_menu.game.game_pause == 1) {
            mouse_click(Window->all_menu.pause.resume_b.sprt, cursor->pos,
            &Window->all_menu.game.game_pause, 0);
            mouse_click(Window->all_menu.pause.exit_b.sprt, cursor->pos,
            &Window->index, 0);
            mouse_click(Window->all_menu.pause.exit_b.sprt, cursor->pos,
            &Window->all_menu.game.game_pause, 0);
        } else
            game_click_second(Window, cursor, verif);
    }
}