##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC     =		src/main.c									\
				src/solver.c								\
				src/error_management/check_error.c			\
				src/create_map/read_file.c					\
				src/create_map/init_map.c					\
				src/create_map/free_map.c					\
				src/error_management/check_map.c			\
				src/solve_the_map/solve_the_map.c			\
				src/solve_the_map/init_ia.c					\
				src/solve_the_map/print_solution.c			\
				src/solve_the_map/check_victory.c			\
				src/solve_the_map/move_ia.c					\
				src/solve_the_map/check_direction_before.c	\
				src/solve_the_map/check_direction_after.c	\
				src/solve_the_map/move_one_step_ia.c

OBJ     =       $(SRC:.c=.o)

NAME    =       solver

CFLAGS	=	-g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L -lmy

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all lib clean fclean re