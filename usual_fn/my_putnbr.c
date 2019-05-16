/*
** EPITECH PROJECT, 2018
** my_putnbr.c
** File description:
** my_putnbr
*/

#include "../proto/proto.h"

void    my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        my_putnbr(nb);
    } else if (nb <= 9) {
        my_putchar(nb + 48);
    } else {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
}