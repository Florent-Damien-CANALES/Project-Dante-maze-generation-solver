/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** free.c
*/

#include "generator.h"
#include <stdlib.h>

void free_function(char **map, struct data *ref)
{
    int rep = 0;

    while (rep < ref->row) {
        free(map[rep]);
        rep = rep + 1;
    }
    free(map);
    free(ref);
}