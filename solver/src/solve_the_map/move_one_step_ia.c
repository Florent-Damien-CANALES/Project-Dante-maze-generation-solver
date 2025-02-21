/*
** EPITECH PROJECT, 2021
** move_one_step_ia
** File description:
** move_one_step_ia
*/

#include "../../include/src.h"
#include <stdlib.h>

static void move_l(map_t *map, ia_t *ia)
{
    if (map->map[ia->y][ia->x - 1] == 'o')
        map->map[ia->y][ia->x] = '*';
    map->map[ia->y][ia->x - 1] = 'o';
    ia->x = ia->x - 1;
}

static void move_down(map_t *map, ia_t *ia)
{
    if (map->map[ia->y + 1][ia->x] == 'o')
        map->map[ia->y][ia->x] = '*';
    map->map[ia->y + 1][ia->x] = 'o';
    ia->y++;
}

static void move_r(map_t *map, ia_t *ia)
{
    if (map->map[ia->y][ia->x + 1] == 'o')
        map->map[ia->y][ia->x] = '*';
    map->map[ia->y][ia->x + 1] = 'o';
    ia->x++;
}

static void move_up(map_t *map, ia_t *ia)
{
    if (map->map[ia->y - 1][ia->x] == 'o')
        map->map[ia->y][ia->x] = '*';
    map->map[ia->y - 1][ia->x] = 'o';
    ia->y = ia->y - 1;
}

void move_one_step_ia(map_t *map, ia_t *ia)
{
    void (*det[4])(map_t *, ia_t *) = {move_up, move_r, move_down, move_l};

    if (ia->check == 2) {
        return;
    }
    det[ia->direction](map, ia);
}