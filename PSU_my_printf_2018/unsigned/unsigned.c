/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/unsigned.h"
#include "../include/my.h"
#include "../lib/my/lib.h"
#include "../include/my_put_nbr_base.h"

void my_put_nbr_un2(unsigned int nbr, char const *base, int *z)
{
    VARIABLES;

    nbr = negative_un(nbr);
    while (i < 50) {
        i += 1;
        div = nbr / basenbr;
        mod = nbr % basenbr;
        nbr = div;
        revalpha[i] = (base[mod]);
    }
    i = 0;
    while (revalpha[50-i] == '0') {
        i = i + 1;
    }
    while (i < 50){
        *z += 1;
        i = i + 1;
    }
}

void my_put_nbr_un(unsigned int nbr, char const *base)
{
    VARIABLES;

    nbr = negative_un(nbr);
    while (i < 50) {
        i += 1;
        div = nbr / basenbr;
        mod = nbr % basenbr;
        nbr = div;
        revalpha[i] = (base[mod]);
    }
    i = 0;
    while (revalpha[50-i] == '0') {
        i = i + 1;
    }
    while (i < 50) {
        my_putchar(revalpha[50 - i]);
        i = i + 1;
    }
}

void put_zero_unsigned(int nb, unsigned int *str, int *z)
{
    int i = 0;
    int new_nb;
    int e = *str;

    if (*str < 0) {
        *str = *str * (-1);
        my_putchar('-');
    }
    else {
        *str = *str;
    }
    while (i < nb - *z) {
        my_putchar('0');
        i += 1;
    }
    if (e == 0 && nb != 0) {
        my_putchar('0');
    }
}

void unsigned_space_dot(char *arg, unsigned int str, int nb, int j)
{
    VAR_UN

    my_put_nbr_un2(str, base, &z);
    if (arg[j - 1] == '-') {
        SUB_U
        a = 1;
        y += 1;
    }
    else if (arg[j - 1] == '.' || arg[j] == '0') {
        if (e == 0) {
            z += 1;
        }
        y += 1;
        put_zero_unsigned(nb, &str, &z);
    }
    else if (arg[j] >= '0' && arg[j] <= '9') {
        SPACES_UN
        SPACES_UN_0
    }
    PUT_UN_NO_SUB
    UN_ZERO
}

int unsigned_int(char *arg, int j, va_list ap)
{
    int nb = 0;
    int x = 0;
    unsigned int str = va_arg(ap, unsigned int);

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
    unsigned_space_dot(arg, str, nb, j);
}