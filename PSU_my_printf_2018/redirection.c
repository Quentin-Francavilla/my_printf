/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "./include/my.h"
#include "./include/str.h"
#include "./include/str2.h"
#include "./include/unsigned.h"
#include "./include/octal.h"
#include "./include/character.h"
#include "./include/hexa.h"
#include "./include/hexa_cap.h"
#include "./include/binary.h"
#include "./include/number.h"
#include "./include/modulo.h"
#include "./include/pointeur.h"
#include "./lib/my/lib.h"

int redirection(char *arg, int *j, va_list ap)
{
    VAR_R

    while (arg[*j] != '%') {
        *j += 1;
    }
    while (!(arg[*j] > 64 && arg[*j] < 91 || arg[*j] > 96 && arg[*j] < 123)) {
        *j += 1;
    }
    x = *j;
    while (arg[x] >= '0' && arg[x] <= '9') {
        x += 1;
    }
    while (arg[x] != 'd' && arg[x] != 'i' && arg[x] != 'c' && arg[x] != 'x'
    && arg[x] != 's' && arg[x] != 'o' && arg[x] != 'u' && arg[x] != 'S'
    && arg[x] != 'b' && arg[x] != 'p' && arg[x] != 'X') {
        x += 1;
    }
    while (params[i++] != arg[x]);
    ptr[i](arg, *j, ap);
}