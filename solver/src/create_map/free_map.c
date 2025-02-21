/*
** EPITECH PROJECT, 2021
** free_map
** File description:
** free_map
*/

#include "../../include/src.h"
#include <stdlib.h>

void free_map(map_t *map)
{
    int i = 0;

    while (map->map[i] != NULL) {
        free(map->map[i]);
        i++;
    }
    free(map->map);
}