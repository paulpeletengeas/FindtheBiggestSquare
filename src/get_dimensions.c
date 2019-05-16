/*
** EPITECH PROJECT, 2018
** get_dimensions.c
** File description:
** get dimensions of array
*/

#include "../proto/proto.h"

int    get_col(int fd)
{
    int count = 0;
    char buffer[1];
    while (buffer[0] != '\n') {
        read(fd, buffer, 1);
        if (buffer[0] != '.' && buffer[0] != 'o' && buffer[0] != '\n')
            exit(84);
        count++;
    }
    return (count);
}

void    get_dimensions(char const *src, int *row, int *col)
{
    int fd = open(src, O_RDONLY);
    char *dest = malloc(sizeof(char) * 500);
    char buffer[1];
    int count = 0;

    while (buffer[0] != '\n') {
        read(fd, buffer, 1);
        if (buffer[0] == '\0' && count == 0)
            exit(84);
        dest[count++] = buffer[0];
    }
    dest[count - 1] = '\0';
    read(fd, buffer, 1);
    *col = get_col(fd);
    *row = str_to_int(dest);
    free(dest);
}