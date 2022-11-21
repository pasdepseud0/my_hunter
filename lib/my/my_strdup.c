/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** duplicate a string
*/

#include <stdlib.h>
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(const char *stringdup)
{
    int tail = 0;
    char *multp = 0;

    tail = my_strlen(stringdup) + 1;
    multp = malloc(tail);

    if (multp == NULL) {
        return (NULL);
    }
    multp = my_strcpy(multp, stringdup);
    multp[tail - 1] = '\0';

    return multp;
}
