#include "main.h"
/**
 * print_most_numbers - print numbers from 0-9 and skip 2 and 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
			x++;
			continue;
		}
		else
		{
			_putchar(x + '0');
			x++;
		}
	}
	_putchar('\n');
}
