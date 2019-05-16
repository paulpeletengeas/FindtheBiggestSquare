/*
** EPITECH PROJECT, 2018
** min_val.c
** File description:
** min_val
*/

#include "../proto/proto.h"

int    min_val(int a, int b, int c)
{
    int val[3] = {a, b, c};
    int count = 0;
    int temp = val[0];

    while (count < 3) {
        if (val[count] <= temp) {
            temp = val[count];
        }
        count++;
    }
    return (temp);
}