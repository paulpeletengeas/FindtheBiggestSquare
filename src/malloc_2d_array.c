/*
** EPITECH PROJECT, 2018
** malloc_2d_array.c
** File description:
** malloc_2d_array
*/

#include "../proto/proto.h"

int     stock_int(char c)
{
    if (c == 'o')
        return (0);
    if (c == '.')
        return (1);
}

int   **malloc_array(int row, int col)
{
    int count = 0;
    int **array = NULL;
    array = (int **)malloc(row * sizeof(int *));
    while (count < row) {
        array[count] = (int *)malloc(sizeof(int) * (col + 1));
        count++;
    }
    return (array);
}

int   **put_into_array_bis(int **array, int count1, int count2)
{
    array[count1][count2] = 1 + min_val(array[count1 - 1][count2],
    array[count1][count2 - 1],
    array[count1 - 1][count2 - 1]);
    return (array);
}

int   **put_into_array(int **array, int row, int col, int fd)
{
    int count1 = 0;
    int count2 = 0;
    char buffer[col + 1];

    while (count1 < row) {
        count2 = 0;
        read(fd, buffer, col + 1);
        while (count2 < col) {
            if (buffer[count2] == 'o' || count1 == 0 || count2 == 0)
                array[count1][count2] = stock_int(buffer[count2]);
            else if (buffer[count2] == '.')
                array = put_into_array_bis(array, count1, count2);
            else
                exit(84);
            count2 = count2 + 1;
        }
        count1 = count1 + 1;
    }
    close(fd);
    return (array);
}

int   **malloc_2d_array(char const *src, int row, int col)
{
    char buffer[1];
    int fd = open(src, O_RDONLY);
    int **array = malloc_array(row, col);

    while (buffer[0] != '\n') {
        read(fd, buffer, 1);
    }
    array = put_into_array(array, row, col, fd);
    return (array);
}