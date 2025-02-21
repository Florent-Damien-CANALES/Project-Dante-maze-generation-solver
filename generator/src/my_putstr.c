/*
** EPITECH PROJECT, 2020
** Dante
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "generator.h"

int my_putstr(char const *str)
{
    int b = 0;

    while (str[b] != '\0'){
        my_putchar(str[b]);
        b = b + 1;
    }
    return (0);
}