/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** sum nb + dis
*/

#include <unistd.h>
#include "../proto/proto.h"

int    my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        i++;
    }
    return (i);
}