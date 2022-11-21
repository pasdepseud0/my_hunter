/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** permut a two int with third element
*/

void my_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
