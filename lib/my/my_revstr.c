/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverse a string
*/

int my_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void my_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

char *my_revstr(char *str)
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
