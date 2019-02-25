/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "./include/my.h"
#include "./include/str.h"
#include "./lib/my/lib.h"

int my_printf(char *arg, ...)
{
    VAR_MY_PRINTF

    va_list ap;
    va_start(ap, *arg);
    count_percent(arg, j, &z);
    j = 0;
    while (b < z) {
        while (a != 1) {
            SHOW
            redirection(arg, &j, ap);
            a = 1;
            j = j + 1;
        }
        a = 0;
        b += 1;
    }
    SHOW_END
    va_end(ap);
}