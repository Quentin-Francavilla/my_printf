/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** hexa
*/

#include <stdarg.h>
#include "../lib/my/lib.h"

#ifndef HEXA_H_
#define HEXA_H_

int hexa(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void hexa_space_dot(char *arg, unsigned int str, int nb, int j);
void put_zero_hexa(int nb, unsigned int *str, int *);
void my_put_nbr_base_hexa(unsigned int nbr, char const *base);
void my_put_nbr_base_hexa2(unsigned int nbr, char const *base, int *);

#define VAR_HEXA int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VA_H2
#define VA_H2 int k = 0;char const base[17] = "0123456789abcdef";int e = str;
#define SPACES_H while (b != nb - z && (z < nb) && e != 0) {SP1}
#define SPACES_H_0 while (b + 1 != nb - z && (z < nb) && e == 0) {SP1}
#define SP1 my_putchar(' '); b += 1;
#define PUT_HEXA_NO_SUB if (a == 0) my_put_nbr_base_hexa(str, base);
#define HEXA_ZERO if (str == 0 && y == 0) {my_putchar('0');}
#define SUB_H my_put_nbr_base_hexa(str, base);HEXA_ZERO SPACES_H SPACES_H_0

#endif