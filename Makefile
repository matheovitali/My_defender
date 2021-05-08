##
## EPITECH PROJECT, 2021
## tests codes
## File description:
## Makefile
##

SRC    =    src/main.c \
			src/error_handling.c \
			src/main/create_main.c \
			src/main/define_main.c \
			src/game/create_game.c \
			src/game/define_game.c \
			src/game/define_game_second.c \
			src/game/define_usage.c \
			src/game/define_usage_second.c \
			src/game/destroy_game.c \
			src/end_menu/create_end_menu.c \
			src/end_menu/define_end_menu.c \
			src/settings/create_settings.c \
			src/settings/define_settings.c \
			src/pause/create_pause.c \
			src/pause/define_pause.c \
			src/tower/draw_tower.c \
			src/tower/attack_tower.c \
			src/tower/attack_tower_second.c \
			src/tower/define_tower.c \
			src/tower/define_tower_second.c \
			src/tower/create_tower.c \
			src/tower/place_tower.c \
			src/tower/add_new_tower.c \
			src/tower/better_placement.c \
			src/tower/define_placement.c \
			src/tower/create_placement.c \
			src/enemies/define_enemies.c \
			src/enemies/destroy_enemies.c \
			src/enemies/move_enemies.c \
			src/enemies/follow_path.c \
			src/enemies/follow_path_second.c \
			src/how_to_play/how_to_play.c \
			src/search_to_destroy.c \
			src/mouse/cursor.c \
			src/mouse/handle_clicks.c \
			src/mouse/handle_clicks_second.c \
			src/mouse/mouse_handling.c \
			src/mouse/mouse_click.c \
			src/init/init.c \
			src/button_animation.c \
			src/my_defender.c \
			src/my_defender_second.c \


OBJ    =    $(SRC:.c=.o)

NAME    =   my_defender

sokoban : $(OBJ)
	make -C lib/my
	gcc -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm $(OBJ) -I include/ -L lib/ -lmy
	rm -f $(OBJ)

all : sokoban

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean libmy.a

unit_tests : fclean libmy.a