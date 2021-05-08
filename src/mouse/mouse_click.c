/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** mouse_click
*/

#include "../../include.h"

int close_game(sfRenderWindow **window, window_t *Window,
sfEvent *event, cursor_t *cursor)
{
    if (event->type == sfEvtClosed) {
        if (Window->all_menu.main.create == 1)
            sfMusic_destroy(Window->all_menu.main.music);
        if (Window->all_menu.game.create == 1)
            sfMusic_destroy(Window->all_menu.game.music);
        sfSound_destroy(cursor->click.sound);
        sfSoundBuffer_destroy(cursor->click.buffer);
        sfRenderWindow_close(*window);
        return (1);
    }
    return (0);
}

int verif_pad_click(window_t *Window, cursor_t *cursor)
{
    int verif = 0;

    mouse_click(Window->all_menu.game.defense.placement.one.sprt,
    cursor->pos, &verif, 1);
    mouse_click(Window->all_menu.game.defense.placement.two.sprt,
    cursor->pos, &verif, 1);
    mouse_click(Window->all_menu.game.defense.placement.three.sprt,
    cursor->pos, &verif, 1);
    mouse_click(Window->all_menu.game.defense.placement.four.sprt,
    cursor->pos, &verif, 1);
    mouse_click(Window->all_menu.game.defense.placement.five.sprt,
    cursor->pos, &verif, 1);
    if (verif > 0)
        return (1);
    return (0);
}

void handle_clicks(window_t *Window, cursor_t *cursor)
{
    if (Window->index == 0) {
        menu_click(Window, cursor);
    } else if (Window->index == 2) {
        settings_click(Window, cursor);
    } else if (Window->index == 1)
        game_click(Window, cursor);
}

void mouse_handling_sound(window_t *Window, cursor_t *cursor)
{
    if (Window->all_menu.option.sound_b.clicked == 0)
        sfSound_play(cursor->click.sound);
}

int mouse_handling(sfRenderWindow **window, window_t *Window,
sfEvent event, cursor_t *cursor)
{
    while (sfRenderWindow_pollEvent(*window, &event)) {
        if (close_game(window, Window, &event, cursor) == 1)
            return (1);
        if (event.type == sfEvtMouseButtonReleased) {
            mouse_handling_sound(Window, cursor);
            handle_clicks(Window, cursor);
        }
    }
    return (0);
}