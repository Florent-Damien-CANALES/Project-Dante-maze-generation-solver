##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC     =		main.c							\
				src/my_putstr.c					\
				src/my_putchar.c				\
				src/my_getnbr.c					\
				src/my_str_isnum.c				\
				src/generator.c					\
				src/av_check.c					\
				src/maze.c						\
				src/free_function.c

OBJ     =       $(SRC:.c=.o)

NAME    =       generator

CPPFLAGS = -I ./include/ -I ../include/

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o	$(NAME)	$(OBJ)	$(CPPFLAGS)	-L	-lmy

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all lib clean fclean re