/*
** EPITECH PROJECT, 2018
** draw.c
** File description:
** draw
*/

#include "../proto/proto.h"

void    draw_array(int **array, get_pos_t *coords, int col, int row)
{
    int i = 0;
    int j = 0;

    while (i < row) {
        j = 0;
        while (j < col) {
            if ((i > coords->Y - coords->size && i <= coords->Y) &&
                j > coords->X - coords->size && j <= coords->X) {
                    my_putchar('x');
            } else if (array[i][j] > 0) {
                my_putchar('.');
            } else {
                my_putchar('o');
            }
            j++;
        }
        my_putchar('\n');
        i++;
    }
}
