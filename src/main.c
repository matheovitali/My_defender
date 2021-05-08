/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../include.h"

int check_end(game_t game)
{
    if (game.health == 0)
        return (1);
    return (0);
}

int my_defender(sfRenderWindow *window, window_t *Window,
cursor_t *cursor, sfEvent event)
{
    while (sfRenderWindow_isOpen(window)) {
        if (Window->all_menu.option.low_fps.clicked == 1)
            sfRenderWindow_setFramerateLimit(window, 30);
        if (Window->all_menu.option.mid_fps.clicked == 1)
            sfRenderWindow_setFramerateLimit(window, 60);
        if (Window->all_menu.option.high_fps.clicked == 1)
            sfRenderWindow_setFramerateLimit(window, 120);
        sfRenderWindow_setSize(window, Window->res_window);
        sfRenderWindow_setMouseCursorVisible(window, sfFalse);
        if (mouse_handling(&window, Window, event, cursor) == 1)
            return (0);
        init_cursor(cursor, window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            Window->all_menu.game.game_pause = 1;
        init_buttons(Window);
        play_main(Window, cursor, &window);
        if (my_defender_end(window, Window, cursor, event) == 1)
            return (0);
    }
}

void pre_game(window_t *Window, sfRenderWindow **window,
sfVideoMode mode, cursor_t *cursor)
{
    init_Window(Window);
    *window = sfRenderWindow_create(mode,
    "La revanche des gueux", sfResize | sfClose, NULL);
    sfRenderWindow_setMouseCursorVisible(*window, sfTrue);
    define_cursor(cursor);
}

void usage(void)
{
    my_printf("USAGE\n    you can press c to create more zombies\n\n");
    my_printf("DESCRIPTION\n   Welcome to la revanche des gueux\n   ");
    my_printf("This game is a tower defense so you need to kill all zombies");
    my_printf(" that will come and protect your lifes\n");
}

int main(int ac, char **av)
{
    int res = 0;
    sfVideoMode mode = {1360, 800};
    sfRenderWindow *window;
    cursor_t cursor;
    window_t Window;
    sfEvent event;

    res = error_arg(ac, av);
    if (res == 84)
        return (84);
    else if (res == 0)
        return (0);
    else {
        pre_game(&Window, &window, mode, &cursor);
        if (my_defender(window, &Window, &cursor, event) == 0)
            return (0);
    }
}