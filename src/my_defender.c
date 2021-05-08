/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../include.h"

int play_game_third(window_t *Window, cursor_t *cursor,
sfRenderWindow **window)
{
    if (Window->all_menu.game.game_pause == 1)
        pause_handling(Window, cursor, window);
    else {
        spawn_enemies(window, &Window->all_menu.game.zombi,
        &Window->all_menu.game);
        move_enemies(window, &Window->all_menu.game.zombi,
        &Window->all_menu.game, &Window->all_menu.option);
    }
    if (check_end(Window->all_menu.game) == 1) {
        destroy_game(&Window->all_menu.game);
        return (1);
    }
    return (0);
}

int play_game_second(window_t *Window, cursor_t *cursor,
sfRenderWindow **window)
{
    if (Window->all_menu.game.tower_menu_on == 1 &&
    Window->all_menu.game.game_pause == 0) {
        create_tower_menu(&Window->all_menu.game, window);
        create_tower(&Window->all_menu.game, window);
        display_square(&Window->all_menu.game,
        cursor, window, &Window->all_menu.game.towers_list);
    }
    draw_towers(&Window->all_menu.game.towers_list,
    window, &Window->all_menu.game.zombi, &Window->all_menu.game);
    create_game_even_more(&Window->all_menu.game, window);
    mouse_hover(Window->all_menu.game.roll_b.sprt, cursor->pos);
    mouse_hover(Window->all_menu.game.menu_b.sprt, cursor->pos);
    mouse_hover(Window->all_menu.game.defense.basic.tower.sprt, cursor->pos);
    mouse_hover(Window->all_menu.game.defense.sniper.tower.sprt, cursor->pos);
    mouse_hover(Window->all_menu.game.defense.aoe.tower.sprt, cursor->pos);
    mouse_hover(Window->all_menu.game.defense.ice.tower.sprt, cursor->pos);
    if (play_game_third(Window, cursor, window) == 1)
        return (1);
    return (0);
}

int play_game(window_t *Window, cursor_t *cursor, sfRenderWindow **window)
{
    if (Window->index == 1) {
        if (Window->all_menu.game.create == 0)
            define_game(&Window->all_menu.game);
        Window->all_menu.game.time =
        sfClock_getElapsedTime(Window->all_menu.game.clock);
        Window->all_menu.game.time_zero =
        sfTime_asSeconds(Window->all_menu.game.time);
        create_game(&Window->all_menu.game, window);
        if (Window->all_menu.game.game_option == 1) {
            create_game_more(&Window->all_menu.game, window);
            mouse_hover(Window->all_menu.game.setting_b.sprt, cursor->pos);
            mouse_hover(Window->all_menu.game.pause_b.sprt, cursor->pos);
            mouse_hover(Window->all_menu.game.rotate_roll_b.sprt, cursor->pos);
        }
        if (play_game_second(Window, cursor, window) == 1)
            return (1);
        return (0);
    }
}

void play_main(window_t *Window, cursor_t *cursor, sfRenderWindow **window)
{
    if (Window->index == 0) {
        if (Window->all_menu.main.create == 0)
            define_main(&Window->all_menu.main, &Window->all_menu.game);
        create_main(&Window->all_menu.main, window);
        if (Window->all_menu.main.show_how == 1) {
            show_how_to_play(&Window->all_menu.main, window);
            mouse_hover(Window->all_menu.main.how_to_exit.sprt, cursor->pos);
        } else {
            mouse_hover(Window->all_menu.main.play_b.sprt, cursor->pos);
            mouse_hover(Window->all_menu.main.option_b.sprt, cursor->pos);
            mouse_hover(Window->all_menu.main.exit_b.sprt, cursor->pos);
            mouse_hover(Window->all_menu.main.how_to_button.sprt, cursor->pos);
        }
    }
}

int my_defender_end(sfRenderWindow *window, window_t *Window,
cursor_t *cursor, sfEvent event)
{
    if (Window->all_menu.game.health > 0)
        play_game(Window, cursor, &window);
    else {
        if (Window->all_menu.end_game.create == 0)
            define_end_menu(&Window->all_menu.end_game);
        create_end_menu(&Window->all_menu.end_game, &window);
        mouse_hover(Window->all_menu.end_game.exit_b.sprt, cursor->pos);
        mouse_hover(Window->all_menu.end_game.menu_b.sprt, cursor->pos);
    }
    play_option(Window, cursor, &window);
    if (close_defender(Window, cursor) == 0)
        return (1);
    sfRenderWindow_drawSprite(window, cursor->cursor.sprt, NULL);
    search_to_detroy(Window->index, &Window->all_menu);
    if (Window->index != 2)
        Window->all_menu.option.index_wind_prev = Window->index;
    sfRenderWindow_display(window);
    return (0);
}