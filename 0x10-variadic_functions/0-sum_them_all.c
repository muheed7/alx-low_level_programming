#include "variadic_functions.h"
/**
 * sum_them_all - sum all the numbers in the parameter
 * @n: number of argument
 *
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
