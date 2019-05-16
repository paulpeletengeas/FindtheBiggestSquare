/*
** EPITECH PROJECT, 2018
** str_to_int.c
** File description:
** str_to_int
*/

#include "../proto/proto.h"

int    str_to_int(char const *str)
{
    int count = my_strlen(str) - 1;
    int dec = 1;
    int res = 0;

    while (count >= 0) {
        res = dec * (str[count] - 48) + res;
        dec *= 10;
        count--;
    }
    return (res);
}
