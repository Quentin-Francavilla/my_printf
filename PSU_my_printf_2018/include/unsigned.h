/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef UN_H_
#define UN_H_

int unsigned_int(char *arg, int j, va_list ap);
int my_printf(char *arg, ...);
void unsigned_space_dot(char *arg, unsigned int str, int nb, int j);
void put_zero_unsigned(int nb, unsigned int *str, int *);

#define PT_SP my_putchar(' '); b += 1;
#define VAR_UN int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VAR_UN2
#define VAR_UN2 int e = str; char const base[11] = "0123456789";
#define SPACES_UN while (b != nb - z && (z < nb) && e != 0) {PT_SP}
#define SPACES_UN_0 while (b + 1 != nb - z && (z < nb) && e == 0) {PT_SP}
#define PUT_UN_NO_SUB if (a == 0) my_put_nbr_un(str, base);
#define UN_ZERO if (e == 0 && y == 0) {my_putchar('0');}
#define SUB_U my_put_nbr_un(str, base);UN_ZERO SPACES_UN SPACES_UN_0

#endif