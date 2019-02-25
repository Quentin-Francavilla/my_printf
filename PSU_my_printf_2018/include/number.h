/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef NBR_H_
#define NBR_H_

int number(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void number_space_dot(char *arg, int str, int nb, int j);
void put_zero_number(int nb, int *str, char *arg, int j);

#define VAR_NBR_SPACE int i = 0; int a = 0; int b = 0; int y = 0;
#define VAR_NBR int nb = 0;int x = 0;int str = va_arg(ap, int);int a = 0;
#define SPACE_STR_POS if (arg[j - 1] == ' ') {if (str > 0) {my_putchar(' ');}}
#define SPACES_NBR while (b != k) {my_putchar(' '); b += 1;}
#define PUT_NBR_NO_SUB if (a == 0) my_put_nbr(str);
#define PUT_0 while (i < nb - my_strlennbr(*str)) {my_putchar('0');i += 1;}

#endif