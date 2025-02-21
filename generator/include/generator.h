/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** generator.h
*/

#ifndef GENERATOR_H
#define GENERATOR_H

#include <stdio.h>

struct data {
    int row;
    int col;
    int perfect;
};

void my_putchar(char c);
int my_putstr(char const *str);
int generator(int ac, char **av);
int av_check(int ac, char **av, struct data *ref);
int my_getnbr(char const *str);
int my_str_isnum(char const *str);
char **maze(char **map, struct data *ref);
void free_function(char **map, struct data *ref);

#endif