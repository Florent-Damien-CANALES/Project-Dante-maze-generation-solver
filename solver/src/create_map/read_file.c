/*
** EPITECH PROJECT, 2021
** read_file
** File description:
** read_file
*/

#include "../../include/src.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

static void read_map(char const *filepath, map_t *map, int a)
{
    FILE *stream = fopen(filepath, "r");
    int i = 0;
    size_t n;
    ssize_t read_str;
    char *buffer;

    while (read_str = getline(&buffer, &n, stream) != -1) {
        while (buffer[i] != '\0') {
            map->map[a][i] = buffer[i];
            i++;
        }
        map->map[a][i] = '\0';
        a++;
        i = 0;
    }
    free(buffer);
    map->map[a] = NULL;
    fclose(stream);
}

static int check_buffer_two(char const *buffer, map_t *map)
{
    int i = 0;

    if (map->nb_rows > 0) {
        if (map->nb_cols != strlen(buffer))
            return (84);
    }
    while (buffer[i] != '\0') {
        if (buffer[i] != 'X' && buffer[i] != '*')
            return (84);
        i++;
    }
    return (0);
}

static int check_buffer(FILE *stream, map_t *map)
{
    int check = 0;
    size_t n;
    ssize_t read_str;
    char *buffer;

    while (read_str = getline(&buffer, &n, stream) != -1) {
        if (buffer[strlen(buffer) - 1] == '\n')
            buffer[strlen(buffer) - 1] = '\0';
        if (buffer == NULL || check_buffer_two(buffer, map) == 84)
            return (84);
        map->nb_cols = strlen(buffer);
        map->nb_rows++;
    }
    free(buffer);
    return (0);
} 

int read_file(char *filepath, map_t *map)
{
    FILE *stream;
    int check = 0;
    int a = 0;

    stream = fopen(filepath, "r");
    if (stream == NULL)
        return (84);
    check = check_buffer(stream, map);
    if (check == 84)
        return (84);
    check = do_malloc_map(map);
    read_map(filepath, map, a);
    fclose(stream);
}