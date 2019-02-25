/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int redirection(char *, int *, va_list ap);
int count_percent(char *arg, int j, int *z);
int found_type(char *arg, int *j, int *a);
int counter(char **arg, int *j, int *x);

#define VAR_MY_PRINTF int j = 0;char *done;int z = 0;int a = 0;int b = 0;
#define SHOW while (arg[j] != '%') {my_putchar(arg[j]); j += 1;}
#define SHOW_END while (arg[j] != '\0') {my_putchar(arg[j]);j += 1;}

#define VAR_R char *params = "dicxsouSbpX%";int i = 0;int x = 0; PTR; VAR_R2
#define VAR_R2 int p = 0; int a = 0; ARRAY
#define PTR int (*ptr[13])(char *, int, va_list);
#define MODULO_FLAG if (arg[*j + 1] == '%') {a = 1;}
#define ARRAY ptr[1] = &number; ptr[2] = &number; ptr[3] = &character; ARRAY2
#define ARRAY2 ptr[4] = &hexa; ptr[5] = &string; ptr[6] = &octal; ARRAY3
#define ARRAY3 ptr[7] = &unsigned_int; ptr[8] = &string2; ARRAY4
#define ARRAY4 ptr[9] = &binary; ptr[10] = &pointeur;ptr[11] = &hexa_cap; AR5
#define AR5 ptr[12] = &modulo;

#endif