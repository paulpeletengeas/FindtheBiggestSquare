/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** get_nbr.c
*/

#include "../proto/proto.h"

int    my_strlen(char const *str);

int    my_getnbr(char const *str)
{
    int count = 0;
    int dount = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));

    while (str[count] < 48 || str[count] > 57) {
        count++;
    }
    while (str[count] <= 57 && str[count] >= 48) {
        dest[dount] = str[count];
        dount++;
        count++;
    }
    return (str_to_int(dest));
}