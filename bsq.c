/*
** EPITECH PROJECT, 2018
** bsq.c
** File description:
** bsq
*/

#include "proto/proto.h"

get_pos_t    *get_coords(int **array, int result, int col, int row)
{
    int i = 0;
    int j = 0;
    get_pos_t *get_pos = malloc(sizeof(get_pos_t));

    while (i < row) {
        j = 0;
        while (j <= col) {
            if (array[i][j] > result) {
                result = array[i][j];
                get_pos->X = j;
                get_pos->Y = i;
                get_pos->size = result;
            }
            j++;
        }
        i++;
    }
    return (get_pos);
}

int    bsq(char const *src)
{
    int col;
    int row;
    get_dimensions(src, &row, &col);
    if (row == 0)
        exit(84);
    int **array = malloc_2d_array(src, row, col);
    int result = 0;

    draw_array(array, get_coords(array, result, col, row), col, row);
    free(array);
    return (result);
}

int   main(int ac, char **av)
{
    bsq(av[1]);
    return (0);
}