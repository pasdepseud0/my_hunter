/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** cut sentence on word
*/

#include "my.h"
#include <stdlib.h>
char **my_str_to_word_array(char const *str)
{
    int k = 0;
    int j = 0;
    char **buf = malloc(sizeof(char *)* my_strlen(str));
    char *word = malloc(sizeof(char)* my_strlen(str));

    for (int x = 0; x <= my_strlen(str) + 1; x++) {
        if (str[x] == ',' || str[x] == ' ') {
        buf[j] = malloc(sizeof(char)* my_strlen(word));
        my_strcpy(buf[j], word);
        k = 0;
        j++;
        x++;
        }
        word[k] = str[x];
        k++;
        word[k] = '\n';
    }
    buf[j] = NULL;
    return (buf);
}
