/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** int_to_str
*/

#include "../include/my.h"

char *int_to_str(int nb)
{
    int temp_nb = nb;
    int size = 1;
    char *str;

    while (nb > 9) {
        nb = nb / 10;
        size++;
    }
    str = malloc(sizeof(char) * size);
    str[size] = '\0';
    size--;
    while (size >= 0) {
        str[size] = temp_nb % 10 + 48;
        size--;
        temp_nb = temp_nb / 10;
    }
    return (str);
}