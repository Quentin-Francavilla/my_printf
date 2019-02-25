/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** hexa
*/

#include <stdarg.h>
#include "../lib/my/lib.h"

#ifndef HEXACAP_H_
#define HEXACAP_H_

int hexa_cap(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void hexa_cap_space_dot(char *arg, unsigned int str, int nb, int j);
void put_zero_hexa_cap(int nb, unsigned int *str, int *);
void my_put_nbr_base_hexa_cap(unsigned int nbr, char const *base);
void my_put_nbr_base_hexa_cap2(unsigned int nbr, char const *base, int *);
int negative_hexa_cap(unsigned int nbr);

#define VAR_HC int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VA_HC2
#define VA_HC2 int k = 0;char const base[17] = "0123456789ABCDEF";int e = str;
#define SPACES_HC while (b != nb - z && (z < nb) && e != 0) {SP1}
#define SPACES_HC_0 while (b + 1 != nb - z && (z < nb) && e == 0) {SP1}
#define SP1 my_putchar(' '); b += 1;
#define PUT_HEXAC_NO_SUB if (a == 0) my_put_nbr_base_hexa_cap(str, base);
#define HC_0 if (str == 0 && y == 0) {my_putchar('0');}
#define SUB_HC my_put_nbr_base_hexa_cap(str, base);HC_0 SPACES_HC SPACES_HC_0

#endif