/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "./include/my.h"
#include "./include/str.h"
#include "./lib/my/lib.h"

int count_percent(char *arg, int j, int *z)
{
    while (arg[j] != '\0') {
        if (arg[j] == '%') {
            *z += 1;
        }
        j += 1;
    }
}