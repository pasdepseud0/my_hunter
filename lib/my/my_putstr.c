/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** put a string
*/
void my_putchar(char c);
void my_putstr(char const *str)
{
    for (int put = 0; str[put] != '\0' ; put++) {
        my_putchar(str[put]);
    }
}
