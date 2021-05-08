/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../include.h"

void pause_handling(window_t *Window,
cursor_t *cursor, sfRenderWindow **window)
{
    if (Window->all_menu.pause.create == 0)
        define_pause(&Window->all_menu.pause);
    create_pause(&Window->all_menu.pause, window);
    mouse_hover(Window->all_menu.pause.exit_b.sprt, cursor->pos);
    mouse_hover(Window->all_menu.pause.resume_b.sprt, cursor->pos);
}

int close_defender(window_t *Window, cursor_t *cursor)
{
    if (Window->index == 3) {
        if (Window->all_menu.main.create == 1)
            sfMusic_destroy(Window->all_menu.main.music);
        else if (Window->all_menu.game.create == 1) {
            sfSound_destroy(Window->all_menu.game.zombi->death.sound);
            sfSoundBuffer_destroy(Window->all_menu.game.zombi->death.buffer);
            sfMusic_destroy(Window->all_menu.game.music);
        }
        sfSound_destroy(cursor->click.sound);
        sfSoundBuffer_destroy(cursor->click.buffer);
        return (0);
    }
    return (1);
}

void play_option_second(window_t *Window, cursor_t *cursor,
sfRenderWindow **window)
{
    if (Window->all_menu.option.music_b.clicked == 1) {
        if (Window->all_menu.game.create == 1)
            sfMusic_pause(Window->all_menu.game.music);
        if (Window->all_menu.main.create == 1)
            sfMusic_pause(Window->all_menu.main.music);
    } else if (Window->all_menu.option.music_b.clicked == 0 &&
    Window->all_menu.game.create == 1 &&
    sfMusic_getStatus(Window->all_menu.game.music) == sfPaused)
        sfMusic_play(Window->all_menu.game.music);
    else if (Window->all_menu.option.music_b.clicked == 0 &&
    Window->all_menu.main.create == 1 &&
    sfMusic_getStatus(Window->all_menu.main.music) == sfPaused)
        sfMusic_play(Window->all_menu.main.music);
}

void play_option(window_t *Window, cursor_t *cursor, sfRenderWindow **window)
{
    if (Window->index == 2) {
        play_option_second(Window, cursor, window);
        if (Window->all_menu.option.create == 0)
            define_option(&Window->all_menu.option);
        create_option(&Window->all_menu.option, window);
        mouse_hover(Window->all_menu.option.save_b.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.exit_b.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.sound_b.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.music_b.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.low_fps.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.mid_fps.sprt, cursor->pos);
        mouse_hover(Window->all_menu.option.high_fps.sprt, cursor->pos);
    }
}