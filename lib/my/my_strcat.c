/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int first = 0;
    int last = 0;
    while (dest[last] != '\0') {
        last++;
    }
    while (src[first] != '\0') {
        dest[last] = src[first];
        first++;
        last++;
    }
    dest[last] = '\0';
    return (dest);
}
