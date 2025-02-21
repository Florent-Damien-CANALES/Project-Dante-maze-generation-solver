/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** maze.c
*/

#include "generator.h"
#include <stdlib.h>

char **first_step(char **map, struct data *ref)
{
    int pos = 1;

    while (pos < ref->row) {
        for (int y = 0; y < ref->col; y = y + 1)
            map[pos][y] = 'X';
        pos = pos + 2;
    }
    return (map);
}

char **second_step(char **map, struct data *ref)
{
    int x = 2;
    int y;

    while (x < ref->row) {
        for (int i = 0; i < ref->col; i = i + 1) {
            y = rand() % 2;
            if (y == 0 && x != ref->row) {
                y = (rand() % (x - 1)) + 1;
                map[x][i] = 'X';
                map[x - 1][y] = '*';
            }
        }
        x = x + 2;
    }
    return (map);
}

char **third_step(char **map,struct data *ref)
{
    for (int i = 0; i < ref->col; i = i + 1)
        map[ref->row - 1][i] = '*';
    return (map);
}

char **perfect(char **map, struct data *ref)
{
    for (int i = 1; i < ref->row; i = i + 1)
        map[i][ref->col - 1] = '*';
    return (map);
}

char **maze(char **map, struct data *ref)
{
    if (ref->perfect == 0) {
        map = first_step(map, ref);
        map = second_step(map, ref);
        map = third_step(map, ref);
    }
    if (ref->perfect == 1) {
        map = first_step(map, ref);
        map = second_step(map, ref);
        map = perfect(map, ref);
    }
    return (map);
}