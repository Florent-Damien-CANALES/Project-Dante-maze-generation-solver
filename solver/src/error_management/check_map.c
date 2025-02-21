/*
** EPITECH PROJECT, 2021
** check_map
** File description:
** check_map
*/

#include "../../include/src.h"
#include <string.h>
#include <stdlib.h>

int check_map(map_t *map)
{
    if (map->map == NULL)
        return (84);
    if (map->map[map->nb_rows-1][strlen(map->map[map->nb_rows-1])-1] == '\n')
        return (84);
    if (map->map[map->nb_rows-1][strlen(map->map[map->nb_rows-1])-1] != '*')
        return (84);
    if (map->map[0][0] != '*')
        return (84);
    return (0);
}