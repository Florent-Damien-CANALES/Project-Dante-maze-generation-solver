/*
** EPITECH PROJECT, 2021
** print_solution
** File description:
** solve_solution
*/

#include "../../include/src.h"
#include <stdlib.h>
#include <stdio.h>

void print_solution(int check, map_t *map)
{
    if (check == 2) {
        printf("no solution found\n");
        return;
    }
    if (check == 1) {
        for (int a = 0; map->map[a] != NULL; a++)
            printf("%s", map->map[a]);
        printf("\n");
        return;
    }
}