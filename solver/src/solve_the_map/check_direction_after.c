/*
** EPITECH PROJECT, 2021
** check_direction_after
** File description:
** check_direction_after
*/

#include "../../include/src.h"
#include <stdlib.h>

static void check_l(map_t *map, ia_t *ia)
{
    if (ia->x == 0) {
        ia->direction = 0;
        return;
    }
    if (map->map[ia->y][ia->x - 1] == 'X') {
        ia->direction = 0;
        return;
    }
    ia->check = 1;
}

static void check_down(map_t *map, ia_t *ia)
{
    if (ia->y + 1 == map->nb_rows) {
        ia->direction = 3;
        return;
    }
    if (map->map[ia->y + 1][ia->x] == 'X') {
        ia->direction = 3;
        return;
    }
    ia->check = 1;
}

static void check_r(map_t *map, ia_t *ia)
{
    if (ia->x + 1 == map->nb_cols) {
        ia->direction = 2;
        return;
    }
    if (map->map[ia->y][ia->x + 1] == 'X') {
        ia->direction = 2;
        return;
    }
    ia->check = 1;
}

static void check_up(map_t *map, ia_t *ia)
{
    if (ia->y == 0) {
        ia->direction = 1;
        return;
    }
    if (map->map[ia->y - 1][ia->x] == 'X') {
        ia->direction = 1;
        return;
    }
    ia->check = 1;
}

void check_direction_after(map_t *map, ia_t *ia)
{
    int check_all = 0;
    void (*det[4])(map_t *, ia_t *) = {check_up, check_r, check_down, check_l};

    while (ia->check == 0 && check_all < 4) {
        det[ia->direction](map, ia);
        check_all++;
    }
    if (check_all >= 4) {
        ia->check = 2;
        return;
    }
    ia->check = 0;
}