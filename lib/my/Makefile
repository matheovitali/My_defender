##
## EPITECH PROJECT, 2020
## B-CPE-100-STG-1-1-cpoolday10-matheo.vitali
## File description:
## Makefile
##

SRC = my_putstr.c \
	  my_putchar.c \
	  my_getnbr.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_revstr.c \
	  my_strcapitalize.c \
	  my_strcat.c \
	  my_strncmp.c \
	  my_strcmp.c \
	  my_strcpy.c \
	  my_strlen.c \
	  my_strlowcase.c \
	  my_strncat.c \
	  my_strncpy.c \
	  my_strstr.c \
	  my_strupcase.c \
	  my_swap.c \
	  number.c \
	  verif_nbrs.c \
	  check_size.c \
	  my_strdup.c \
	  suppr_useless.c \
	  my_intlen.c \
	  str_to_int.c \
	  my_put_unsgnint.c \
	  convert_base.c \
	  convert_base_main.c \
	  infadd.c \
	  my_str_to_word_array.c \
	  my_printf/my_printf.c \
	  my_printf/long_long_to_str.c \
	  my_printf/my_getnbr.c \
	  my_printf/my_printf_functions.c \
	  my_printf/my_put_unsgnint.c \
	  my_printf/printf_ascii.c \
	  my_printf/second_printf_functions.c \
	  my_printf/long_long_to_str.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: 	$(NAME)

$(NAME): $(OBJ)
		ar rc libmy.a $(OBJ)
		cp libmy.a ../
		rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all