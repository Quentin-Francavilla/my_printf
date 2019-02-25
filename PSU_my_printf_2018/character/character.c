/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/character.h"
#include "../include/my.h"
#include "../lib/my/lib.h"

void char_space(char *arg, char str, int nb, int j)
{
    VAR_CHAR_SPACE
    int k = (nb - 1);

    if (arg[j - 1] == '-' && k >= 0) {
        my_putchar(str);
        SPACES
        a = 1;
    }
    else if (arg[j - 1] == '.') {
    }
    else if (arg[j] >= '0' && arg[j] <= '9' && k >= 0) {
        SPACES
    }
    PUT_CHAR_NO_SUB
}

int character(char *arg, int j, va_list ap)
{
    int nb = 0;
    int x = 0;
    char str = va_arg(ap, int);

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
    char_space(arg, str, nb, j);
}