/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** print a digit integral
*/
void my_putchar(char c);
int my_print_digits(void)
{
    int digits = '0';
    while (digits <= '9') {
        my_putchar(digits);
        digits++;
    }
    my_putchar('\n');
    return (0);
}
