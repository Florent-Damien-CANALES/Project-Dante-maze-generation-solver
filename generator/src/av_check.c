/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** av_check.c
*/

#include "generator.h"
#include <string.h>

int check_nb(char **av, struct data *ref)
{
    if ((my_str_isnum(av[1])) == 0 || (my_str_isnum(av[2])) == 0)
        return (84);
    ref->row = my_getnbr(av[2]);
    ref->col = my_getnbr(av[1]);
    return (0);
}

int check_string(char *string, struct data *ref)
{
    int len =  strlen(string);
    char *str2 = "perfect";

    if (len != 7)
        return (84);
    for (int i = 0; string[i] != '\n' && string[i] != '\0'; i = i + 1) {
        if (string[i] != str2[i])
            return (84);
    }
    ref->perfect = 1;
    return (0);
}

int av_check(int ac, char **av, struct data *ref)
{
    if ((check_nb(av, ref)) == 84)
        return (84);
    if (ac == 4)
        check_string(av[3], ref);
    return (0);
}