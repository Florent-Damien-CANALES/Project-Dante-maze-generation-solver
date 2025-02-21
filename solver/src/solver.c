/*
** EPITECH PROJECT, 2021
** solver
** File description:
** solver
*/

#include "../include/src.h"
#include <stdlib.h>
#include <stdio.h>

static int do_solver(char **av)
{
    int check = 0;
    map_t map;

    init_map(&map);
    check = read_file(av[1], &map);
    if (check == 84)
        return (84);
    if (check_map(&map) == 84) {
        free_map(&map);
        return (84);
    }
    check = solve_the_map(&map);
    free_map(&map);
    return (0);
}

int solver(int ac, char **av)
{
    int check = 0;

    check == check_error(ac, av);
    if (check == 84)
        return (84);
    check = do_solver(av);
    return (check);
}