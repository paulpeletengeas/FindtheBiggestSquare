/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include "../proto/proto.h"

char    *my_strdup(char const *src)
{
    int length = my_strlen(src);
    int count = 0;
    char *dest;

    dest = malloc(sizeof(char) * (length + 1));
    while (count < length) {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}