/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** print alphabet
*/
void my_putchar(char c);
int my_print_alpha(void)
{
    char alpha = 'a';
    while (alpha <= 'z') {
        my_putchar(alpha);
        alpha++;
    }
    my_putchar('\n');
    return (0);
}
