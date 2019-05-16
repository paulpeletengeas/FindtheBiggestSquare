/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** reverse string
*/

#include <stdio.h>
#include "../proto/proto.h"

char    *my_revstr(char *str)
{
    int x = 0;
    int y = 0;
    char temp;

    while (str[y] != '\0'){
        y++;
    }
    y--;
    while (y > x){
        temp = str[y];
        str[y] = str[x];
        str[x] = temp;
        x++;
        y--;
    }
    return (str);
}
