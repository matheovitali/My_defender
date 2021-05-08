/*
** EPITECH PROJECT, 2021
** B-PSU-101-STG-1-1-minishell1-matheo.vitali
** File description:
** include
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <math.h>
#include <sys/wait.h>
#include <curses.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <malloc.h>
#include <sys/sysmacros.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/OpenGL.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System/Time.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Vector3.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include "lib/my/my.h"

typedef struct sprite_t {
    int clicked;
    sfSprite *sprt;
    sfTexture *texture;
    sfTexture *other_texture;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f scale;
} sprite_t;

typedef struct text_t {
    sfFont *font;
    sfText *text;
    sfVector2f pos;
    sfVector2f scale;
} text_t;

typedef struct sound_t {
    sfSoundBuffer *buffer;
    sfSound *sound;
} sound_t;

typedef struct cursor_t {
    sprite_t cursor;
    sfVector2i pos;
    sfVector2f pos_mouse;
    sound_t click;
} cursor_t;

typedef struct tower_t {
    int time_hit;
    int damage;
    sprite_t tower;
    sprite_t range;
    int cost;
    text_t price;
    sfCircleShape *range_circle;
    sfVector2f circle_center;
    float radius;
} tower_t;

typedef struct Towers_t {
    tower_t tower;
    struct Towers_t *next;
} Towers_t;

typedef struct zombi_t {
    int iced;
    int anime_state;
    int reward;
    sprite_t zombi;
    int pv;
    text_t health;
    int speed;
    int base_speed;
    int rotate;
    int path;
    float anim;
    struct zombi_t *next;
    sound_t death;
} zombi_t;

typedef struct tower_placement_t {
    int p_one;
    int p_two;
    int p_three;
    int p_four;
    int p_five;
    int p_one_placed;
    int p_two_placed;
    int p_three_placed;
    int p_four_placed;
    int p_five_placed;
    sprite_t one;
    sprite_t two;
    sprite_t three;
    sprite_t four;
    sprite_t five;
} tower_placement_t;

typedef struct defense_t {
    tower_t basic;
    tower_t sniper;
    tower_t aoe;
    tower_t ice;
    tower_t basic_place;
    tower_t sniper_place;
    tower_t aoe_place;
    tower_t ice_place;
    tower_placement_t placement;
} defense_t;

typedef struct end_game_t {
    int create;
    sprite_t bg;
    sprite_t menu_b;
    sprite_t exit_b;
    text_t main_menu;
    text_t quit;
    text_t lost;
} end_game_t;

typedef struct pause_t {
    int create;
    sprite_t bg;
    sprite_t menu;
    sprite_t resume_b;
    sprite_t exit_b;
    text_t resume;
    text_t quit;
} pause_t;

typedef struct option_t {
    int create;
    sprite_t bg;
    sprite_t menu;
    sprite_t save_b;
    sprite_t exit_b;
    sprite_t sound_b;
    sprite_t music_b;
    sprite_t low_fps;
    sprite_t mid_fps;
    sprite_t high_fps;
    int index_wind_prev;
} option_t;

typedef struct game_t {
    int create;
    int pressed;
    int game_pause;
    int game_option;
    int tower_selected;
    int tower_menu_on;
    int money;
    text_t money_count;
    sprite_t money_money;
    int health;
    text_t health_count;
    sprite_t health_health;
    float time_zero;
    defense_t defense;
    zombi_t *zombi;
    Towers_t *towers_list;
    option_t options;
    sprite_t map;
    sprite_t setting_b;
    sprite_t pause_b;
    sprite_t roll_b;
    sprite_t rotate_roll_b;
    sprite_t menu_b;
    sprite_t tower_menu;
    sfMusic *music;
    text_t Towers;
    sfClock *clock;
    sfTime time;
} game_t;

typedef struct main_t {
    int create;
    int show_how;
    int hot_to_created;
    sprite_t bg;
    sprite_t name;
    sprite_t play_b;
    sprite_t option_b;
    sprite_t exit_b;
    sprite_t how_to_play;
    sprite_t how_to_button;
    sprite_t how_to_exit;
    text_t how_to_text_quit;
    text_t title;
    text_t setting;
    text_t leave;
    text_t how_to_text;
    sfMusic *music;
} main_t;

typedef struct all_menu_t {
    main_t main;
    pause_t pause;
    option_t option;
    game_t game;
    end_game_t end_game;
} all_menu_t;

typedef struct window_t {
    int index;
    sfVector2u res_window;
    all_menu_t all_menu;
} window_t;

int error_arg(int ac, char **av);
void usage(void);
void init_cursor(cursor_t *cursor, sfRenderWindow *window);
void init_buttons(window_t *Window);
void init_Window(window_t *Window);
int mouse_hover(sfSprite *sprite_button, sfVector2i mouse);
void mouse_click(sfSprite *sprite_button,
sfVector2i mouse, int *window_index, int nbr);
void define_main(main_t *menu, game_t *game);
void create_main(main_t *menu, sfRenderWindow **window);
void destroy_main(main_t *main);
void define_pause(pause_t *pause);
void create_pause(pause_t *pause, sfRenderWindow **window);
void destroy_pause(pause_t *pause);
void define_option(option_t *option);
void create_option(option_t *option, sfRenderWindow **window);
void destroy_option(option_t *option);
void define_game(game_t *game);
void create_game(game_t *game, sfRenderWindow **window);
void create_game_more(game_t *game, sfRenderWindow **window);
void create_game_even_more(game_t *game, sfRenderWindow **window);
void create_tower_menu(game_t *game, sfRenderWindow **window);
void destroy_game(game_t *game);
void search_to_detroy(int window_index, all_menu_t *all_menu);
void button_animation_second(main_t *menu);
void button_animation(main_t *menu);
void define_cursor(cursor_t *cursor);
void play_main(window_t *Window, cursor_t *cursor, sfRenderWindow **window);
int play_game(window_t *Window, cursor_t *cursor, sfRenderWindow **window);
void play_option(window_t *Window, cursor_t *cursor, sfRenderWindow **window);
int close_defender(window_t *Window, cursor_t *cursor);
int mouse_handling(sfRenderWindow **window,
window_t *Window, sfEvent event, cursor_t *cursor);
void define_placement(game_t *game);
void create_placement(game_t *game, sfRenderWindow **window);
void define_tower(game_t *game);
void define_circle(Towers_t *tower, int range);
void create_tower(game_t *game, sfRenderWindow **window);
void display_square(game_t *game, cursor_t *cursor,
sfRenderWindow **window, Towers_t **tower_list);
void add_new_turret(Towers_t **list, game_t *game, int place, int turret);
void draw_towers(Towers_t **tower_list, sfRenderWindow **window,
zombi_t **zombi, game_t *game);
void spawn_enemies(sfRenderWindow **window, zombi_t **list, game_t *game);
void move_enemies(sfRenderWindow **window, zombi_t **list_zombi,
game_t *game, option_t *option);
sfVector2f middle_point(sprite_t o, float size_ox, float size_oy);
int check_end(game_t game);
void tower_on_mouse(game_t *game, cursor_t cursor, sfRenderWindow **window);
void define_tower_seven(game_t *game);
void define_tower_six(game_t *game);
void place_tower(game_t *game, Towers_t **tower_list);
void check_pos(Towers_t *element, game_t *game, int place, int turret);
void define_money(game_t *game);
void define_health(game_t *game);
void define_game_six(game_t *game);
void destroy_game(game_t *game);
void delete_ennemies(zombi_t **list, game_t *game, option_t *option);
void delete_current(zombi_t **list, zombi_t *prev, zombi_t *next);
void follow_path(zombi_t *list, game_t *game);
void follow_path_six(zombi_t *list, game_t *game);
void move_enemies(sfRenderWindow **window, zombi_t **list_zombi, game_t *game,
option_t *option);
void rotate(zombi_t *list, int data[4]);
int verif_pad_click(window_t *Window, cursor_t *cursor);
void handle_clicks(window_t *Window, cursor_t *cursor);
void menu_click(window_t *Window, cursor_t *cursor);
void settings_click(window_t *Window, cursor_t *cursor);
void pause_handling(window_t *Window, cursor_t *cursor,
sfRenderWindow **window);
void game_click(window_t *Window, cursor_t *cursor);
void create_end_menu(end_game_t *end_game, sfRenderWindow **window);
void define_end_menu(end_game_t *end_g);
int my_defender_end(sfRenderWindow *window, window_t *Window,
cursor_t *cursor, sfEvent event);
zombi_t *get_close_zombi(Towers_t *tower, zombi_t **zombi);
void attack_all_zombi(Towers_t *tower, zombi_t **zombi, int damage);
int if_zombi_in_range(int range, Towers_t *tower, zombi_t *zombi);
void verif_slow(Towers_t **tower, zombi_t **zombi);
void show_how_to_play(main_t *main, sfRenderWindow **window);

#endif /* !INCLUDE_H_ */
