/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef STR_H_
#define STR_H_

int string(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void str_space_dot(char *arg, char *str, int nb, int);

#define VAR_STR_SPACE int i = 0; int a = 0; int b = 0; int y = 0;
#define SPACES while (b != k) {my_putchar(' '); b += 1;}
#define NB_0 if (nb == 0) {a += 1;}
#define PUT_STR_NO_SUB if (a == 0) my_putstr(str);

#endif