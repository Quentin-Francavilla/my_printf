/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/hexa_cap.h"
#include "../include/my.h"
#include "../lib/my/lib.h"
#include "../include/my_put_nbr_base.h"

void my_put_nbr_base_hexa_cap2(unsigned int nbr, char const *base, int *z)
{
    VARIABLES;

    nbr = negative_hexa_cap(nbr);
    while (i < 50) {
        i += 1;
        div = nbr / basenbr;
        mod = nbr % basenbr;
        nbr = div;
        revalpha[i] = (base[mod]);
    }
    i = 0;
    while (revalpha[50 - i] == '0') {
        i = i + 1;
    }
    while (i < 50) {
        *z += 1;
        i = i + 1;
    }
}

int negative_hexa_cap(unsigned int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
        return (nbr);
    }
    else {
        nbr = nbr;
        return (nbr);
    }
}

void put_zero_hexa_cap(int nb, unsigned int *str, int *z)
{
    int i = 0;
    int new_nb;

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
}

void hexa_cap_space_dot(char *arg, unsigned int str, int nb, int j)
{
    VAR_HC

    my_put_nbr_base_hexa_cap2(str, base, &z);
    if (arg[j - 1] == '-') {
        SUB_HC
        y += 1;
        a = 1;
    }
    else if (arg[j - 1] == '.' || arg[j] == '0') {
        if (str == 0) {
            z += 1;
        }
        y += 1;
        put_zero_hexa_cap(nb, &str, &z);
    }
    else if (arg[j] >= '0' && arg[j] <= '9') {
        SPACES_HC
        SPACES_HC_0
    }
    PUT_HEXAC_NO_SUB
    HC_0
}

int hexa_cap(char *arg, int j, va_list ap)
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
    hexa_cap_space_dot(arg, str, nb, j);
}