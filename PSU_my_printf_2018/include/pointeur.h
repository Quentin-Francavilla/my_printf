/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>
#include "../lib/my/lib.h"

#ifndef PTR_H_
#define PTR_H_

int pointeur(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void ptr_space_dot(char *arg, unsigned long str, int nb, int j);
void put_zero_ptr(int nb, unsigned long *str, int *);
void my_put_nbr_base_ptr(unsigned long nbr, char const *base);
void my_put_nbr_base_ptr2(unsigned long nbr, char const *base, int *);

#define PT_SP my_putchar(' '); b += 1;
#define VAR_P int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VAR_P2
#define VAR_P2 int e = str; char const base[17] = "0123456789abcdef";
#define SPACES_P while (b != nb - z && (z < nb) && e != 0) {PT_SP}
#define SPACES_P_0 while (b + 1 != nb - z && (z < nb) && e == 0) {PT_SP}
#define PUT_PTR_NO_SUB if (a == 0) my_put_nbr_base_ptr(str, base);
#define PTR_ZERO if (e == 0 && y == 0) {my_putchar('0');}
#define SUB_P my_put_nbr_base_ptr(str, base);PTR_ZERO SPACES_P SPACES_P_0

#endif