/*
** EPITECH PROJECT, 2021
** move_ia
** File description:
** move_ia
*/

#include "../../include/src.h"
#include <stdlib.h>

void move_ia(map_t *map, ia_t *ia)
{
    int i = 0;

    check_direction_before(map, ia);
    check_direction_after(map, ia);
    move_one_step_ia(map, ia);
}