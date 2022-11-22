/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copy n char in string
*/
void my_putchar(char c);
char *my_strncpy(char *dest, char const *src, int n)
{
    int x = 0;
    if (x > n) {
        dest[x] = '\0';
    }
    for (; src[x] != '\0' && x < n; x++) {
        dest[x] = src[x];
    }
    dest[x] = '\0';
    return (dest);
}
