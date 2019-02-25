/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/str2.h"
#include "../include/my.h"
#include "../lib/my/lib.h"

void put_zero_ascii(int *x, int *len)
{
    while (*x < 3 - *len) {
        my_putchar('0');
        *x += 1;
    }
}

int my_putstr_ascii(char *str)
{
    VAR_PUTSTR_ASCII

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            a += 1;
        }
        i += 1;
    }
    len = my_strlennbr(str[a]);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar(92);
            put_zero_ascii(&x, &len);
            my_put_nbr(str[i]);
        }
        else {
            my_putchar(str[i]);
        }
        i += 1;
    }
}

void put_dot_str2(int nb, char *str, int a)
{
    if (nb <= my_strlen(str)) {
        while (a < nb) {
            my_putchar(str[a]);
            a += 1;
        }
    }
    else {
        my_putstr_ascii(str);
    }
}

void str2_space_dot(char *arg, char *str, int nb, int j)
{
    VAR_STR2_SPACE
    int k = (nb - my_strlen(str));

    if (arg[j - 1] == '-' && k >= 0) {
        my_putstr_ascii(str);
        SPACES
        a = 1;
    }
    else if (arg[j - 1] == '.') {
        put_dot_str2(nb, str, a);
        str[a] = '\0';
        NB_0
    }
    else if (arg[j] >= '0' && arg[j] <= '9' && k >= 0) {
        SPACES
    }
    PUT_STR2_NO_SUB
}

int string2(char *arg, int j, va_list ap)
{
    int nb = 0;
    int x = 0;
    char *str = va_arg(ap, char *);

    if (str == NULL) {
        str = "(null)";
    }
    if (!(arg[j - 1] >= '0' && arg[j - 1] <= 9)) {
        while (arg[j - 1] >= '0' && arg[j - 1] <= '9') {
            j -= 1;
        }
    }
    if (arg[j - 1] == '+' || arg[j - 2] == '+' && str > 0) {
        my_putchar('+');
    }
    x = j;
    while (arg[x] >= '0' && arg[x] <= '9') {
        nb = nb * 10 + arg[x] - '0';
        x += 1;
    }
    str2_space_dot(arg, str, nb, j);
}