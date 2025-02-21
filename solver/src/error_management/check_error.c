/*
** EPITECH PROJECT, 2021
** check_error.c
** File description:
** check_erroc
*/
 
 #include <stdlib.h>
 #include "../../include/src.h"

int check_error(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (av[1] == NULL)
        return (84);
    return (0);
}