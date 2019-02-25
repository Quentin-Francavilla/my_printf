/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdarg.h>
#include "../lib/my/lib.h"

#ifndef BINARY_H_
#define OBINARY_H_

int binary(char *arg, int, va_list ap);
int my_printf(char *arg, ...);
void binary_space_dot(char *arg, unsigned int str, int nb, int j);
void put_zero_binary(int nb, unsigned int *str, int *);
void my_put_nbr_base_binary(unsigned int nbr, char const *base);
void my_put_nbr_base_binary2(unsigned int nbr, char const *base, int *);
int negative_binary(unsigned int nbr);

#define PT_SP my_putchar(' '); b += 1;
#define VAR_B int i = 0; int a = 0; int b = 0; int y = 0; int z = 0; VAR_B2
#define VAR_B2 int e = str; char const base[3] = "01";
#define SPACES_B while (b != nb - z && (z < nb) && e != 0) {PT_SP}
#define SPACES_B_0 while (b + 1 != nb - z && (z < nb) && e == 0) {PT_SP}
#define PUT_BINARY_NO_SUB if (a == 0) my_put_nbr_base_binary(str, base);
#define B_ZERO if (e == 0 && y == 0) {my_putchar('0');}
#define SUB_B my_put_nbr_base_binary(str, base); B_ZERO SPACES_B SPACES_B_0

#endif