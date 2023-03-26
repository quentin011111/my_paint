##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

PRINC	=	my_paint.c

SRC		=		lib/my/my_putchar.c \
				lib/my/my_putnbr.c \
				lib/my/my_putstr.c \
				lib/my/my_strlen.c \
				lib/my/hexa_convertor.c \
				lib/my/convertor_binaire.c \
				lib/my/convert_octal.c \
				lib/my/my_putnbr_long.c \
				lib/my/my_non_printable_str.c \
				lib/my/my_find.c \
				lib/my/hexa_convertor_up.c \
				lib/my/my_putnbr_long_unsigned.c \
				lib/my/cond1.c \
				lib/my/cond2.c \
				lib/my/cond3.c \
				lib/my/cond4.c \
				lib/my/my_abs.c \
				lib/my/my_printf.c \
				lib/my/my_putfloat.c \
				lib/my/my_getnbr.c \
				lib/my/str_compare.c \
				lib/my/my_strcpy.c \
				lib/my/my_strcat.c \
				lib/my/str_to_word_array.c \
				lib/my/struct.c \
				init_param.c \
				framebuffer.c \
				game.c \
				event.c \
				touch_edit.c \
				touch_pen.c \
				touch_size_pen.c \
				size_pen_button.c \
				all_size_for_pen_button.c \
				edit_button.c \
				folder_button.c \
				helper_button.c \
				size_brosh_button.c \
				touch_file.c \
				touch_brosh.c \
				touch_color.c \
				home_screen.c \
				init_file.c \
				list_of_draw.c \
				destroy.c

CFLAGS	+=	-Iinclude -Wall -Wextra -g3

OBJ	=	$(SRC:.c=.o)


NAMELIB	=	libmy.a

NAME	=	my_paint

CSFML = -lcsfml-graphics	\
		-lcsfml-system \
		-lcsfml-audio	\
		-lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAMELIB) $(OBJ)
			gcc -o $(NAME) $(CFLAGS) $(PRINC) $(NAMELIB) $(CSFML)


clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAMELIB)

re: 	fclean all

.PHONY: all clean fclean re
