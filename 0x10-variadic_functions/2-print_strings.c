#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator:  string is printed between the strings.
 * @n: number of strings proceed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lst, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
