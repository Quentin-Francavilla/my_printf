/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/str.h"
#include "../include/my.h"
#include "../lib/my/lib.h"

void put_dot_str(int nb, char *str, int a)
{
    int i = 0;

    if (nb <= my_strlen(str)) {
        while (i < nb) {
            my_putchar(str[i]);
            i += 1;
        }
    }
    else {
        my_putstr(str);
    }
}

void str_space_dot(char *arg, char *str, int nb, int j)
{
    VAR_STR_SPACE
    int k = (nb - my_strlen(str));

    if (arg[j - 1] == '-' && k >= 0) {
        my_putstr(str);
        SPACES
        a = 1;
    }
    else if (arg[j - 1] == '.') {
        put_dot_str(nb, str, a);
        NB_0
        a = 1;
    }
    else if (arg[j] >= '0' && arg[j] <= '9' && k >= 0) {
        SPACES
    }
    PUT_STR_NO_SUB
}

int string(char *arg, int j, va_list ap)
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
    str_space_dot(arg, str, nb, j);
}