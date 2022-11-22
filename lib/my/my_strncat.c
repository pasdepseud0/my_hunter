/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** concatenates n char of str in the dest str
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int first = 0;
    int end = 0;

    if (first < nb) {
        dest[end] = '\0';
    }
    while (dest[end] != '\0') {
        end++;
    }
    while (src[first] != '\0' && nb > first) {
        dest[end] = src[first];
        first++;
        end++;
    }
    dest[end] = '\0';
    return (dest);
}
