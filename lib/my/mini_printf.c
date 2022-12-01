/*
** EPITECH PROJECT, 2022
** mini_printf.c
** File description:
** make a mini_printf
*/
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void format_percent(char typ, va_list *ap)
{
    int found = 0;
    if (typ == 'c') {
        my_putchar(va_arg(*ap, int));
        found = 1;
    }
    if (typ == 'i' || typ == 'd') {
        my_put_nbr(va_arg(*ap, int));
        found = 1;
    }
    if (typ == 's') {
        my_putstr(va_arg(*ap, char *));
        found = 1;
    }
    if (found == 0) {
        my_putchar('%');
        my_putchar(typ);
    }
}

int mini_printf(char const *format, ...)
{
    int address = 0;
    va_list ap;
    va_start(ap, format);

    while (format[address] != '\0') {
        if (format[address] == '%') {
            address++;
            format_percent(format[address], &ap);
        } else {
            my_putchar(format[address]);
        }
        address++;
    }
    va_end(ap);
    return 0;
}
