/*
** EPITECH PROJECT, 2021
** check_direction_before
** File description:
** check_direction_before
*/

#include "../../include/src.h"
#include <stdlib.h>

static void check_l(map_t *map, ia_t *ia)
{
    if (ia->y < map->nb_rows) {
        if (map->map[ia->y + 1][ia->x] != 'X')
            ia->direction = 2;
    }
}

static void check_down(map_t *map, ia_t *ia)
{
    if (ia->x < map->nb_cols) {
        if (map->map[ia->y][ia->x + 1] != 'X')
            ia->direction = 1;
    }
}

static void check_r(map_t *map, ia_t *ia)
{
    if (ia->y > 0) {
        if (map->map[ia->y - 1][ia->x] != 'X')
            ia->direction = 0;
    }
}

static void check_up(map_t *map, ia_t *ia)
{
    if (ia->x > 0) {
        if (map->map[ia->y][ia->x - 1] != 'X')
            ia->direction = 3;
    }
}

void check_direction_before(map_t *map, ia_t *ia)
{
    void (*det[4])(map_t *, ia_t *) = {check_up, check_r, check_down, check_l};

    det[ia->direction](map, ia);
}