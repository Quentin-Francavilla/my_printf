/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/binary.h"
#include "../include/my.h"
#include "../lib/my/lib.h"
#include "../include/my_put_nbr_base.h"

void my_put_nbr_base_binary(unsigned int nbr, char const *base)
{
    VARIABLES;

    nbr = negative_binary(nbr);
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
        my_putchar(revalpha[50 - i]);
        i = i + 1;
    }
}