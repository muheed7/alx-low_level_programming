#include "variadic_functions.h"
/**
 * print_all - print anuthing
 * @format: a list of argument that is contant
 *
 * Return: nohing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;

	const char t_args[] = "cifs";
	
	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
												      if (!str)
				{
					printf("(nil)");
					break;
				}
												      ptintf("%s", str);
				break;
		} i++;
	}
	printf("\n");
	va_end(valist);
}
