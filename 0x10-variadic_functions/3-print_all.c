#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* Helper function to print separator */
void print_separator(int *c)
{
    if (*c)
        printf(", ");
    *c = 1;
}

/* Helper function to print character */
void print_char(va_list valist, unsigned int *c)
{
    print_separator(c);
    printf("%c", va_arg(valist, int));
}

/* Helper function to print integer */
void print_int(va_list valist, unsigned int *c)
{
    print_separator(c);
    printf("%d", va_arg(valist, int));
}

/* Helper function to print float */
void print_float(va_list valist, unsigned int *c)
{
    print_separator(c);
    printf("%f", va_arg(valist, double));
}

/* Helper function to print string */
void print_string(va_list valist, unsigned int *c)
{
    print_separator(c);
    char *str = va_arg(valist, char *);
    if (!str)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", str);
    }
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
    va_list valist;
    unsigned int i = 0, c = 0;

    va_start(valist, format);
    while (format && format[i])
    {
        switch (format[i])
        {
        case 'c':
            print_char(valist, &c);
            break;
        case 'i':
            print_int(valist, &c);
            break;
        case 'f':
            print_float(valist, &c);
            break;
        case 's':
            print_string(valist, &c);
            break;
        }
        i++;
    }
    printf("\n");
    va_end(valist);
}

