/*
** EPITECH PROJECT, 2021
** check_victory
** File description:
** check_victory
*/

#include "../../include/src.h"
#include <stdlib.h>

int check_victory(map_t *map, ia_t *ia)
{
    if (ia->x == 0 && ia->y == 0)
        return (2);
    if (ia->x == map->nb_cols - 1 && ia->y == map->nb_rows - 1)
        return (1);
    return (0);
}