/*
** EPITECH PROJECT, 2021
** init_map
** File description:
** init_map
*/

#include "../../include/src.h"
#include <stdlib.h>

void init_map(map_t *map)
{
    map->map = NULL;
    map->nb_cols = 0;
    map->nb_rows = 0;
}

int do_malloc_map(map_t *map)
{
    int i = 0;

    map->map = malloc(sizeof(char *) * map->nb_rows + 1);
    if (map->map == NULL)
        return (84);
    while (i != map->nb_rows) {
        map->map[i] = malloc(sizeof(char) * map->nb_cols + 2);
        if (map->map[i] == NULL)
            return (84);
        i++;
    }
    return (0);
}