/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct map
{
    char **map;
    int nb_cols;
    int nb_rows;
}map_t;

typedef struct ia
{
    int x;
    int y;
    int direction;
    int check;
}ia_t;

#endif
