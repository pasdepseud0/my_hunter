/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** compare a len of two string
*/

int my_strcmp(char const *str1 , char const *str2)
{
    int f_value = 0;
    int s_value = 0;

    for (int i = 0; str1[i] != '\0'; i++){
        f_value += str1[i];
    }
    for (int j = 0; str2[j] != '\0'; j++){
        s_value += str2[j];
    }
    if (f_value == s_value) {
        return 0;
    } else if (f_value < s_value) {
        return -1;
    } else {
        return 1;
    }
    return 0;
}
