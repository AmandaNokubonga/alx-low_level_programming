#include "variadic_functions.h"

/**
 * sum_them_all - return sum all its parameter.
 * @n: - interger proceed as arguments.
 *
 *Return: all sum of parameter of if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = =, d
	va_list valist;
	int sum = 0

	if (n == 0)
		return (0)

	va_start(valist, n);

		for (d = 0; d < n; d++)
			sum += p;

		va_end(valist)

		return (sum);
}
