/*
** EPITECH PROJECT, 2021
** src
** File description:
** src
*/

#ifndef SRC_H_
#define SRC_H_

#include "struct.h"

/* Main Code */

int solver(int, char **);

/* Error Management */

int check_error(int, char **);
int check_map(map_t *);

/* Create Map */

void init_map(map_t *);
int read_file(char *, map_t *);
int do_malloc_map(map_t *);
void free_map(map_t *);

/* Solve The Map */

int solve_the_map(map_t *);
void init_ia(ia_t *);
void print_solution(int, map_t *);
int check_victory(map_t *, ia_t *);
void move_ia(map_t *, ia_t *);
void check_direction_before(map_t *, ia_t *);
void check_direction_after(map_t *, ia_t *);
void move_one_step_ia(map_t *, ia_t *);

#endif
