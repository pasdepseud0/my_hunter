/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** compare two strings
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    int first_value = 0;
    int second_value = 0;

    for (int i = 0; s1[i] != '\0'; i++){
        if (i <= n)
            first_value += s1[i];
    }
    for (int j = 0; s2[j] != '\0'; j++){
        if (j <= n)
            second_value += s2[j];
    }
    if (first_value == second_value)
        return 0;
    else if (first_value < second_value)
        return -1;
    else
        return +1;
}
