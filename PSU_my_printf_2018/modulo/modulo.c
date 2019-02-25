/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/modulo.h"
#include "../include/my.h"
#include "../lib/my/lib.h"

int modulo(char *arg, int j, va_list ap)
{
    my_putchar('%');
    my_putchar(arg[j]);
}