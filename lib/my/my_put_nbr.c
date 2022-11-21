/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** put a number
*/

void my_putchar(char c);
int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10){
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else if (nb < 10){
        my_putchar(nb % 10 + '0');
    }
    return 0;
}
