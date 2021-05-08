/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** init
*/

#include "../../include.h"

void init_cursor(cursor_t *cursor, sfRenderWindow *window)
{
    cursor->pos = sfMouse_getPositionRenderWindow(window);
    cursor->pos_mouse.x = cursor->pos.x;
    cursor->pos_mouse.y = cursor->pos.y;
    sfSprite_setPosition(cursor->cursor.sprt, cursor->pos_mouse);
}

void init_buttons(window_t *Window)
{
    if (Window->all_menu.main.create == 1) {
        button_animation(&Window->all_menu.main);
        button_animation_second(&Window->all_menu.main);
    }
}

void init_Window_two(window_t *Window)
{
    Window->all_menu.option.high_fps.clicked = 0;
    Window->all_menu.main.show_how = 0;
    Window->all_menu.main.hot_to_created = 0;
}

void init_Window(window_t *Window)
{
    Window->index = 0;
    Window->res_window.x = 1366;
    Window->res_window.y = 723;
    Window->all_menu.main.create = 0;
    Window->all_menu.game.create = 0;
    Window->all_menu.option.create = 0;
    Window->all_menu.pause.create = 0;
    Window->all_menu.end_game.create = 0;
    Window->all_menu.game.game_option = 0;
    Window->all_menu.game.game_pause = 0;
    Window->all_menu.game.health = 3;
    Window->all_menu.option.index_wind_prev = 0;
    Window->all_menu.game.tower_selected = 0;
    Window->all_menu.game.towers_list = NULL;
    Window->all_menu.game.zombi = NULL;
    Window->all_menu.option.sound_b.clicked = 0;
    Window->all_menu.option.music_b.clicked = 0;
    Window->all_menu.option.low_fps.clicked = 0;
    Window->all_menu.option.mid_fps.clicked = 1;
    init_Window_two(Window);
}