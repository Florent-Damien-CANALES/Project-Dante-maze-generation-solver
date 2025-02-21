/*
** EPITECH PROJECT, 2021
** solve_the_map
** File description:
** solve_the_map
*/

#include "../../include/src.h"

int solve_the_map(map_t *map)
{
    ia_t ia;
    int check = 0;

    init_ia(&ia);
    map->map[0][0] = 'o';
    while (check == 0) {
        move_ia(map, &ia);
        check = check_victory(map, &ia);
    }
    print_solution(check, map);
    return (0);
}