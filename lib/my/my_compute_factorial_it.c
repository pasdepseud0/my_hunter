/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it.c
** File description:
** return a iterative algo who give factorial of the number
*/

int my_compute_factorial_it(int nb)
{
    int result = nb;

    if (nb == 0 || nb == 1)
        return 1;

    if (nb < 0)
        return 0;

    if (nb >= 13)
        return 0;

    while (nb > 1) {
        nb--;
        result = nb * result;
    }
    return result;
}
