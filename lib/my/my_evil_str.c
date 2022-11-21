/*
** EPITECH PROJECT, 2022
** my_evil_str.c
** File description:
** my_evil_str
*/

void my_swap(int *a, int *b);
int my_strlen(char const *str);
char *my_evil_str(char *str)
{
    int len = 0;
    int rev = 0;
    rev = my_strlen(str) - 1;
    while (rev < len) {
        my_swap(&len, &rev);
        len++;
        rev--;
    }
    return str;
}
