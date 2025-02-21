/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** generator.c
*/

#include "generator.h"
#include <stdlib.h>

char **map_init(struct data *ref)
{
    int rep = 0;
    char **tab = malloc(sizeof(char *) * (ref->row + 1));

    while (rep < ref->row) {
        tab[rep] = malloc(sizeof(char) * (ref->col + 1));
        tab[rep][ref->col] = '\0';
        for (int i = 0; i < ref->col; i = i + 1)
            tab[rep][i] = '*';
        rep = rep + 1;
    }
    tab[ref->row] = NULL;
    return (tab);
}

int generator(int ac, char **av)
{
    struct data *ref = malloc(sizeof(struct data));
    char **map;

    if ((av_check(ac, av, ref)) == 84)
        return (84);
    map = map_init(ref);
    map = maze(map, ref);
    for (int i = 0; i < ref->row; i = i + 1) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
    free_function(map, ref);
    return (0);
}