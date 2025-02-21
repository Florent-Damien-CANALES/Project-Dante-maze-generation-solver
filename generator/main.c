/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (0);
    srand(time(NULL));
    return (generator(ac, av));
}