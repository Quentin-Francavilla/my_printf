/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>
#include "../lib/my/lib.h"

#ifndef OCTAL_H_
#define OCTAL_H_

int octal(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void octal_space_dot(char *arg, unsigned int str, int nb, int j);
void put_zero_octal(int nb, unsigned int *str, int *);
void my_put_nbr_base_octal(unsigned int nbr, char const *base);
void my_put_nbr_base_octal2(unsigned int nbr, char const *base, int *);

#define PT_SP my_putchar(' '); b += 1;
#define VAR_O int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VAR_02
#define VAR_02 int e = str; char const base[9] = "01234567";
#define SPACES_O while (b != nb - z && (z < nb) && e != 0) {PT_SP}
#define SPACES_O_0 while (b + 1 != nb - z && (z < nb) && e == 0) {PT_SP}
#define PUT_OCTAL_NO_SUB if (a == 0) my_put_nbr_base_octal(str, base);
#define OCTAL_ZERO if (e == 0 && y == 0) {my_putchar('0');}
#define SUB_O my_put_nbr_base_octal(str, base);OCTAL_ZERO SPACES_O SPACES_O_0

#endif