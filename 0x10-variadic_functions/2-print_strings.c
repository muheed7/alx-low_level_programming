#include "variadic_functions.h"
/**
 * print_strings - print list of strings
 * @separator: char to be printed between strings
 * @n: number of argument in the function
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (seperator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);

}
