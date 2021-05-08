/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_enemies
*/

#include "../../include.h"

void add_new_zombi_third(zombi_t **list, game_t *game, zombi_t *element)
{
    sfSprite_rotate(element->zombi.sprt, -90);
    sfSprite_setScale(element->zombi.sprt, element->zombi.scale);
    sfSprite_setTexture(element->zombi.sprt, element->zombi.texture, sfFalse);
    sfSprite_setTextureRect(element->zombi.sprt, element->zombi.rect);
    element->death.buffer =
    sfSoundBuffer_createFromFile("used_sounds/death_sound.wav");
    element->death.sound = sfSound_create();
    sfSound_setBuffer(element->death.sound, element->death.buffer);
    *list = element;
}

void add_new_zombi_second(zombi_t **list, game_t *game, zombi_t *element)
{
    element->pv = 25;
    element->reward = 25;
    element->health.font = sfFont_createFromFile("used_fonts/font_title.ttf");
    element->health.text = sfText_create();
    element->health.pos.x = -100;
    element->health.pos.y = 365;
    element->health.scale.x = 0.5;
    element->health.scale.y = 0.5;
    sfText_setFont(element->health.text, element->health.font);
    sfText_setString(element->health.text, int_to_str(element->pv));
    sfText_setOutlineColor(element->health.text, sfBlack);
    sfText_setOutlineThickness(element->health.text, 1.8);
    sfText_setScale(element->health.text, element->health.scale);
    element->iced = 0;
    element->rotate = 0;
    element->path = 0;
    element->anim = game->time_zero;
    element->anime_state = 0;
    add_new_zombi_third(list, game, element);
}

void add_new_zombi(zombi_t **list, game_t *game)
{
    zombi_t *element;

    element = malloc(sizeof(*element));
    element->next = *list;
    element->zombi.sprt = sfSprite_create();
    element->zombi.texture =
    sfTexture_createFromFile("used_images/enemies/zombi/zombi_walk.png", NULL);
    element->zombi.rect.left = 0;
    element->zombi.rect.top = 0;
    element->zombi.rect.height = 156;
    element->zombi.rect.width = 139;
    element->zombi.pos.x = -100;
    element->zombi.pos.y = 355;
    element->zombi.scale.x = 0.4;
    element->zombi.scale.y = 0.4;
    element->base_speed = 2;
    element->speed = element->base_speed;
    add_new_zombi_second(list, game, element);
}

void spawn_enemies(sfRenderWindow **window, zombi_t **list, game_t *game)
{
    if (game->pressed == 1)
        add_new_zombi(list, game);
    if (sfKeyboard_isKeyPressed(sfKeyC) == sfTrue)
        game->pressed += 1;
    else
        game->pressed = 0;
}

void rotate(zombi_t *list, int data[4])
{
    if (list->rotate != data[3]) {
        sfSprite_rotate(list->zombi.sprt, data[0]);
        list->rotate += data[0];
        list->zombi.pos.x += data[1];
        list->zombi.pos.y += data[2];
    }
}