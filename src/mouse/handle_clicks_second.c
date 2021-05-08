/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** mouse_click
*/

#include "../../include.h"

void settings_click_four(window_t *Window, cursor_t *cursor)
{
    if (Window->all_menu.option.high_fps.clicked == 0) {
        mouse_click(Window->all_menu.option.high_fps.sprt, cursor->pos,
        &Window->all_menu.option.high_fps.clicked, 1);
        mouse_click(Window->all_menu.option.high_fps.sprt, cursor->pos,
        &Window->all_menu.option.low_fps.clicked, 0);
        mouse_click(Window->all_menu.option.high_fps.sprt, cursor->pos,
        &Window->all_menu.option.mid_fps.clicked, 0);
    } else {
        mouse_click(Window->all_menu.option.high_fps.sprt, cursor->pos,
        &Window->all_menu.option.high_fps.clicked, 0);
    }
}

void settings_click_third(window_t *Window, cursor_t *cursor)
{
    if (Window->all_menu.option.mid_fps.clicked == 0) {
        mouse_click(Window->all_menu.option.mid_fps.sprt, cursor->pos,
        &Window->all_menu.option.mid_fps.clicked, 1);
        mouse_click(Window->all_menu.option.mid_fps.sprt, cursor->pos,
        &Window->all_menu.option.low_fps.clicked, 0);
        mouse_click(Window->all_menu.option.mid_fps.sprt, cursor->pos,
        &Window->all_menu.option.high_fps.clicked, 0);
    } else {
        mouse_click(Window->all_menu.option.mid_fps.sprt, cursor->pos,
        &Window->all_menu.option.mid_fps.clicked, 0);
    }
    settings_click_four(Window, cursor);
}

void settings_click_second(window_t *Window, cursor_t *cursor)
{
    if (Window->all_menu.option.low_fps.clicked == 0) {
        mouse_click(Window->all_menu.option.low_fps.sprt, cursor->pos,
        &Window->all_menu.option.low_fps.clicked, 1);
        mouse_click(Window->all_menu.option.low_fps.sprt, cursor->pos,
        &Window->all_menu.option.mid_fps.clicked, 0);
        mouse_click(Window->all_menu.option.low_fps.sprt, cursor->pos,
        &Window->all_menu.option.high_fps.clicked, 0);
    } else {
        mouse_click(Window->all_menu.option.low_fps.sprt, cursor->pos,
        &Window->all_menu.option.low_fps.clicked, 0);
    }
    settings_click_third(Window, cursor);
}

void settings_click(window_t *Window, cursor_t *cursor)
{
    mouse_click(Window->all_menu.option.save_b.sprt, cursor->pos,
    &Window->index, Window->all_menu.option.index_wind_prev);
    mouse_click(Window->all_menu.option.exit_b.sprt, cursor->pos,
    &Window->index, Window->all_menu.option.index_wind_prev);
    if (Window->all_menu.option.sound_b.clicked == 0)
        mouse_click(Window->all_menu.option.sound_b.sprt, cursor->pos,
        &Window->all_menu.option.sound_b.clicked, 1);
    else
        mouse_click(Window->all_menu.option.sound_b.sprt, cursor->pos,
        &Window->all_menu.option.sound_b.clicked, 0);
    if (Window->all_menu.option.music_b.clicked == 0)
        mouse_click(Window->all_menu.option.music_b.sprt, cursor->pos,
        &Window->all_menu.option.music_b.clicked, 1);
    else
        mouse_click(Window->all_menu.option.music_b.sprt, cursor->pos,
        &Window->all_menu.option.music_b.clicked, 0);
    settings_click_second(Window, cursor);
}

void menu_click(window_t *Window, cursor_t *cursor)
{
    if (Window->all_menu.main.show_how == 1)
        mouse_click(Window->all_menu.main.how_to_exit.sprt, cursor->pos,
        &Window->all_menu.main.show_how, 0);
    else {
        mouse_click(Window->all_menu.main.play_b.sprt, cursor->pos,
        &Window->index, 1);
        mouse_click(Window->all_menu.main.option_b.sprt, cursor->pos,
        &Window->index, 2);
        mouse_click(Window->all_menu.main.exit_b.sprt, cursor->pos,
        &Window->index, 3);
        mouse_click(Window->all_menu.main.how_to_button.sprt, cursor->pos,
        &Window->all_menu.main.show_how, 1);
    }
}