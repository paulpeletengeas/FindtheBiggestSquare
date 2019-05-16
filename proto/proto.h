/*
** EPITECH PROJECT, 2018
** proto.h
** File description:
** all file and lib prototypes
*/

#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct position_in_array {
    int X;
    int Y;
    int size;
} get_pos_t;
void    my_putstr(char const *str);
void    my_putchar(char c);
int    my_strlen(char const *str);
void    my_putnbr(int nb);
int    my_getnbr(char const *str);
char    *my_revstr(char *str);
char    *my_strdup(char const *src);
int    str_to_int(char const *str);
void    get_dimensions(char const *src, int *row, int *col);
int    min_val(int a, int b, int c);
int   **malloc_2d_array(char const *src, int row, int col);
get_pos_t    *get_coords(int **array, int result, int row, int col);
int    *count(int *nbr);
void    draw_array(int **array, get_pos_t *coords, int col, int row);