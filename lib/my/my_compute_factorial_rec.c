/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec.c
** File description:
** recursive task factorial
*/

int my_compute_factorial_rec(int nb)
{
    int result = nb;

    if (nb == 0 || nb == 1)
        return 1;
    if (nb < 0)
        return 0;
    if (nb >= 13)
        return 0;
    result = (my_compute_factorial_rec(result - 1) * result);
    return result;
}
