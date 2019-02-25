/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/number.h"
#include "../include/my.h"
#include "../lib/my/lib.h"

void put_zero_number(int nb, int *str, char *arg, int j)
{
    int i = 0;
    int new_nb;

    if (*str < 0 && arg[j] != 0 && arg[j - 1] != '.') {
        *str = *str * (-1);
        my_putchar('-');
        while (i < nb - my_strlennbr(*str) - 1) {
            my_putchar('0');
            i += 1;
        }
    }
    else if (*str < 0 && arg[j - 1] == '.') {
        *str = *str * (-1);
        my_putchar('-');
        PUT_0
    }
    else {
        *str = *str;
        PUT_0
    }
}

void number_space_dot(char *arg, int str, int nb, int j)
{
    VAR_NBR_SPACE
    int k;

    if (str < 0) {
        k = nb - (my_strlennbr(str) + 1);
    }
    else {
        k = nb - (my_strlennbr(str));
    }
    if (arg[j - 1] == '-' && k >= 0) {
        my_put_nbr(str);
        SPACES_NBR
        a = 1;
    }
    else if (arg[j - 1] == '.' || arg[j] == '0') {
        put_zero_number(nb, &str, arg, j);
    }
    else if (arg[j] >= '0' && arg[j] <= '9' && k >= 0) {
        SPACES_NBR
    }
    PUT_NBR_NO_SUB
}

int number(char *arg, int j, va_list ap)
{
    VAR_NBR

    if (!(arg[j - 1] >= '0' && arg[j - 1] <= 9)) {
        while (arg[j - 1] >= '0' && arg[j - 1] <= '9') {
            j -= 1;
        }
    }
    SPACE_STR_POS
    else if (arg[j - 2] == '+' && str > 0) {
        my_putchar('+');
        a += 1;
    }
    x = j;
    while (arg[x] >= '0' && arg[x] <= '9') {
        nb = nb * 10 + arg[x] - '0';
        x += 1;
    }
    nb = nb - a;
    number_space_dot(arg, str, nb, j);
}