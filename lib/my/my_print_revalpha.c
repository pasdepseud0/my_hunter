/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** print a reverse alpha at z to a
*/

void my_putchar(char c);
int my_print_revalpha(void)
{
    char revalpha = 122;
    while (revalpha >= 97) {
        my_putchar(revalpha);
        revalpha--;
    }
    my_putchar('\n');
    return (0);
}
