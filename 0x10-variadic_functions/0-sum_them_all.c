#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum all its parameter.
 * @n: - interger proceed as arguments.
 *
 *Return: all sum of parameter of if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);

		for (i = 0; i < n; i++)
			sum += va_arg(lst, int);
				 
				va_end(lst);

		return (sum);
}
